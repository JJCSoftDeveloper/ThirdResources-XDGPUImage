#import "XDGPUImageFilter.h"

@interface  XDGPUImageBuffer :  XDGPUImageFilter
{
    NSMutableArray *bufferedFramebuffers;
}

@property(readwrite, nonatomic) NSUInteger bufferSize;

@end
