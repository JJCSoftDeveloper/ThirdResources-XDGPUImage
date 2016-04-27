#import "XDGPUImageFilter.h"

@interface  XDGPUImageLuminanceRangeFilter :  XDGPUImageFilter
{
    GLint rangeReductionUniform;
}

/** The degree to reduce the luminance range, from 0.0 to 1.0. Default is 0.6.
 */
@property(readwrite, nonatomic) CGFloat rangeReductionFactor;

@end
