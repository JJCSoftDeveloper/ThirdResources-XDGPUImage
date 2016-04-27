#import "XDGPUImageFilterGroup.h"

@class  XDGPUImageRGBErosionFilter;
@class  XDGPUImageRGBDilationFilter;

// A filter that first performs an erosion on each color channel of an image, followed by a dilation of the same radius. 
// This helps to filter out smaller bright elements.

@interface  XDGPUImageRGBOpeningFilter :  XDGPUImageFilterGroup
{
     XDGPUImageRGBErosionFilter *erosionFilter;
     XDGPUImageRGBDilationFilter *dilationFilter;
}

- (id)initWithRadius:(NSUInteger)radius;

@end
