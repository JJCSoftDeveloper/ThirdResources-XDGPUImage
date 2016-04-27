#import "XDGPUImageRGBClosingFilter.h"
#import "XDGPUImageRGBErosionFilter.h"
#import "XDGPUImageRGBDilationFilter.h"

@implementation  XDGPUImageRGBClosingFilter

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
    dilationFilter = [[XDGPUImageRGBDilationFilter alloc] initWithRadius:radius];
    [self addFilter:dilationFilter];
    
    // Second pass: erosion
    erosionFilter = [[XDGPUImageRGBErosionFilter alloc] initWithRadius:radius];
    [self addFilter:erosionFilter];
    
    [dilationFilter addTarget:erosionFilter];
    
    self.initialFilters = [NSArray arrayWithObjects:dilationFilter, nil];
    self.terminalFilter = erosionFilter;
    
    return self;
}


@end
