#import "XDGPUImageClosingFilter.h"
#import "XDGPUImageErosionFilter.h"
#import "XDGPUImageDilationFilter.h"

@implementation  XDGPUImageClosingFilter

@synthesize verticalTexelSpacing = _verticalTexelSpacing;
@synthesize horizontalTexelSpacing = _horizontalTexelSpacing;

- (id)init;
{
    if (!(self = [self initWithRadius:1]))
    {
		return nil;
    }
    
    return self;
}

- (id)initWithRadius:(NSUInteger)radius;
{
    if (!(self = [super init]))
    {
		return nil;
    }
    
    // First pass: dilation
    dilationFilter = [[XDGPUImageDilationFilter alloc] initWithRadius:radius];
    [self addFilter:dilationFilter];
    
    // Second pass: erosion
    erosionFilter = [[XDGPUImageErosionFilter alloc] initWithRadius:radius];
    [self addFilter:erosionFilter];
    
    [dilationFilter addTarget:erosionFilter];
    
    self.initialFilters = [NSArray arrayWithObjects:dilationFilter, nil];
    self.terminalFilter = erosionFilter;
    
    return self;
}

- (void)setVerticalTexelSpacing:(CGFloat)newValue;
{
    _verticalTexelSpacing = newValue;
    erosionFilter.verticalTexelSpacing = newValue;
    dilationFilter.verticalTexelSpacing = newValue;
}

- (void)setHorizontalTexelSpacing:(CGFloat)newValue;
{
    _horizontalTexelSpacing = newValue;
    erosionFilter.horizontalTexelSpacing = newValue;
    dilationFilter.horizontalTexelSpacing = newValue;
}

@end
