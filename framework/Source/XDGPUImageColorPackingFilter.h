#import "XDGPUImageFilter.h"

@interface  XDGPUImageColorPackingFilter :  XDGPUImageFilter
{
    GLint texelWidthUniform, texelHeightUniform;
    
    CGFloat texelWidth, texelHeight;
}

@end
