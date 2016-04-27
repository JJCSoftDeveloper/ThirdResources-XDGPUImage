#import "XDGPUImageOutput.h"
#import "XDGPUImageFilter.h"

@interface  XDGPUImageFilterGroup :  XDGPUImageOutput <XDGPUImageInput>
{
    NSMutableArray *filters;
    BOOL isEndProcessing;
}

@property(readwrite, nonatomic, strong)  XDGPUImageOutput<XDGPUImageInput> *terminalFilter;
@property(readwrite, nonatomic, strong) NSArray *initialFilters;
@property(readwrite, nonatomic, strong)  XDGPUImageOutput<XDGPUImageInput> *inputFilterToIgnoreForUpdates; 

// Filter management
- (void)addFilter:(XDGPUImageOutput<XDGPUImageInput> *)newFilter;
- (XDGPUImageOutput<XDGPUImageInput> *)filterAtIndex:(NSUInteger)filterIndex;
- (NSUInteger)filterCount;

@end
