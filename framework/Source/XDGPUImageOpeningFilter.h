#import "XDGPUImageFilterGroup.h"

@class  XDGPUImageErosionFilter;
@class  XDGPUImageDilationFilter;

// A filter that first performs an erosion on the red channel of an image, followed by a dilation of the same radius. 
// This helps to filter out smaller bright elements.

@interface  XDGPUImageOpeningFilter :  XDGPUImageFilterGroup
{
     XDGPUImageErosionFilter *erosionFilter;
     XDGPUImageDilationFilter *dilationFilter;
}

@property(readwrite, nonatomic) CGFloat verticalTexelSpacing, horizontalTexelSpacing;

- (id)initWithRadius:(NSUInteger)radius;

@end
