#import "XDGPUImageFilter.h"

extern NSString *const kGPUImageLuminanceFragmentShaderString;

/** Converts an image to grayscale (a slightly faster implementation of the saturation filter, without the ability to vary the color contribution)
 */
@interface  XDGPUImageGrayscaleFilter :  XDGPUImageFilter

@end
