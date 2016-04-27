
#import "XDGPUImageFilter.h"

@interface  XDGPUImageHueFilter :  XDGPUImageFilter
{
    GLint hueAdjustUniform;
    
}
@property (nonatomic, readwrite) CGFloat hue;

@end
