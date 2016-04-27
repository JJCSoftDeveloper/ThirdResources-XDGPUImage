#import "XDGPUImageMissEtikateFilter.h"
#import "XDGPUImagePicture.h"
#import "XDGPUImageLookupFilter.h"

@implementation  XDGPUImageMissEtikateFilter

- (id)init;
{
    if (!(self = [super init]))
    {
		return nil;
    }

#if TARGET_IPHONE_SIMULATOR || TARGET_OS_IPHONE
    UIImage *image = [UIImage imageNamed:@"lookup_miss_etikate.png"];
#else
    NSImage *image = [NSImage imageNamed:@"lookup_miss_etikate.png"];
#endif

    NSAssert(image, @"To use  XDGPUImageMissEtikateFilter you need to add lookup_miss_etikate.png from  XDGPUImage/framework/Resources to your application bundle.");

    lookupImageSource = [[XDGPUImagePicture alloc] initWithImage:image];
     XDGPUImageLookupFilter *lookupFilter = [[XDGPUImageLookupFilter alloc] init];
    [self addFilter:lookupFilter];

    [lookupImageSource addTarget:lookupFilter atTextureLocation:1];
    [lookupImageSource processImage];

    self.initialFilters = [NSArray arrayWithObjects:lookupFilter, nil];
    self.terminalFilter = lookupFilter;

    return self;
}

#pragma mark -
#pragma mark Accessors

@end
