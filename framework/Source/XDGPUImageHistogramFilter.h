#import "XDGPUImageFilter.h"

typedef enum { kGPUImageHistogramRed, kGPUImageHistogramGreen, kGPUImageHistogramBlue, kGPUImageHistogramRGB, kGPUImageHistogramLuminance}  XDGPUImageHistogramType;

@interface  XDGPUImageHistogramFilter :  XDGPUImageFilter
{
     XDGPUImageHistogramType histogramType;
    
    GLubyte *vertexSamplingCoordinates;
    
    GLProgram *secondFilterProgram, *thirdFilterProgram;
    GLint secondFilterPositionAttribute, thirdFilterPositionAttribute;
}

// Rather than sampling every pixel, this dictates what fraction of the image is sampled. By default, this is 16 with a minimum of 1.
@property(readwrite, nonatomic) NSUInteger downsamplingFactor;

// Initialization and teardown
- (id)initWithHistogramType:(XDGPUImageHistogramType)newHistogramType;
- (void)initializeSecondaryAttributes;

@end
