#import "XDGPUImageTwoInputFilter.h"

@interface  XDGPUImageVoronoiConsumerFilter :  XDGPUImageTwoInputFilter 
{
    GLint sizeUniform;
}

@property (nonatomic, readwrite) CGSize sizeInPixels;

@end
