#import "XDGPUImageGaussianBlurFilter.h"

@interface  XDGPUImageBilateralFilter :  XDGPUImageGaussianBlurFilter
{
    CGFloat firstDistanceNormalizationFactorUniform;
    CGFloat secondDistanceNormalizationFactorUniform;
}
// A normalization factor for the distance between central color and sample color.
@property(nonatomic, readwrite) CGFloat distanceNormalizationFactor;
@end
