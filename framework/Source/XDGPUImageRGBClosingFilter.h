#import "XDGPUImageFilterGroup.h"

@class  XDGPUImageRGBErosionFilter;
@class  XDGPUImageRGBDilationFilter;

// A filter that first performs a dilation on each color channel of an image, followed by an erosion of the same radius. 
// This helps to filter out smaller dark elements.

@interface  XDGPUImageRGBClosingFilter :  XDGPUImageFilterGroup
{
     XDGPUImageRGBErosionFilter *erosionFilter;
     XDGPUImageRGBDilationFilter *dilationFilter;
}

- (id)initWithRadius:(NSUInteger)radius;


@end
