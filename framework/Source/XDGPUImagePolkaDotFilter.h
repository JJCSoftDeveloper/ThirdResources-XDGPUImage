#import "XDGPUImagePixellateFilter.h"

@interface  XDGPUImagePolkaDotFilter :  XDGPUImagePixellateFilter
{
    GLint dotScalingUniform;
}

@property(readwrite, nonatomic) CGFloat dotScaling;

@end
