#import "XDGPUImageFilterGroup.h"
#import "XDGPUImageBuffer.h"
#import "XDGPUImageDissolveBlendFilter.h"

@interface  XDGPUImageLowPassFilter :  XDGPUImageFilterGroup
{
     XDGPUImageBuffer *bufferFilter;
     XDGPUImageDissolveBlendFilter *dissolveBlendFilter;
}

// This controls the degree by which the previous accumulated frames are blended with the current one. This ranges from 0.0 to 1.0, with a default of 0.5.
@property(readwrite, nonatomic) CGFloat filterStrength;

@end