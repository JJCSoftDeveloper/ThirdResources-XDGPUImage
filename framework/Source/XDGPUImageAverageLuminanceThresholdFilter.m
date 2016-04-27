#import "XDGPUImageAverageLuminanceThresholdFilter.h"
#import "XDGPUImageLuminosity.h"
#import "XDGPUImageLuminanceThresholdFilter.h"

@interface  XDGPUImageAverageLuminanceThresholdFilter()
{
     XDGPUImageLuminosity *luminosityFilter;
     XDGPUImageLuminanceThresholdFilter *luminanceThresholdFilter;
}
@end

@implementation  XDGPUImageAverageLuminanceThresholdFilter

@synthesize thresholdMultiplier = _thresholdMultiplier;

#pragma mark -
#pragma mark Initialization and teardown

- (id)init;
{
    if (!(self = [super init]))
    {
		return nil;
    }
    
    self.thresholdMultiplier = 1.0;
    
    luminosityFilter = [[XDGPUImageLuminosity alloc] init];
    [self addFilter:luminosityFilter];
    
    luminanceThresholdFilter = [[XDGPUImageLuminanceThresholdFilter alloc] init];
    [self addFilter:luminanceThresholdFilter];
    
    __unsafe_unretained  XDGPUImageAverageLuminanceThresholdFilter *weakSelf = self;
    __unsafe_unretained  XDGPUImageLuminanceThresholdFilter *weakThreshold = luminanceThresholdFilter;
    
    [luminosityFilter setLuminosityProcessingFinishedBlock:^(CGFloat luminosity, CMTime frameTime) {
        weakThreshold.threshold = luminosity * weakSelf.thresholdMultiplier;
    }];
    
    self.initialFilters = [NSArray arrayWithObjects:luminosityFilter, luminanceThresholdFilter, nil];
    self.terminalFilter = luminanceThresholdFilter;
    
    return self;
}

@end
