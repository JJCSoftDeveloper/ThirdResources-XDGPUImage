#import "XDGPUImageFilterGroup.h"

@class  XDGPUImageErosionFilter;
@class  XDGPUImageDilationFilter;

// A filter that first performs a dilation on the red channel of an image, followed by an erosion of the same radius. 
// This helps to filter out smaller dark elements.

@interface  XDGPUImageClosingFilter :  XDGPUImageFilterGroup
{
     XDGPUImageErosionFilter *erosionFilter;
     XDGPUImageDilationFilter *dilationFilter;
}

@property(readwrite, nonatomic) CGFloat verticalTexelSpacing, horizontalTexelSpacing;

- (id)initWithRadius:(NSUInteger)radius;

@end
