#import <Foundation/Foundation.h>
#import "XDGPUImageOutput.h"

@interface  XDGPUImageFilterPipeline : NSObject
{
    NSString *stringValue;
}

@property (strong) NSMutableArray *filters;

@property (strong)  XDGPUImageOutput *input;
@property (strong) id <XDGPUImageInput> output;

- (id) initWithOrderedFilters:(NSArray*) filters input:(XDGPUImageOutput*)input output:(id <XDGPUImageInput>)output;
- (id) initWithConfiguration:(NSDictionary*) configuration input:(XDGPUImageOutput*)input output:(id <XDGPUImageInput>)output;
- (id) initWithConfigurationFile:(NSURL*) configuration input:(XDGPUImageOutput*)input output:(id <XDGPUImageInput>)output;

- (void) addFilter:(XDGPUImageOutput<XDGPUImageInput> *)filter;
- (void) addFilter:(XDGPUImageOutput<XDGPUImageInput> *)filter atIndex:(NSUInteger)insertIndex;
- (void) replaceFilterAtIndex:(NSUInteger)index withFilter:(XDGPUImageOutput<XDGPUImageInput> *)filter;
- (void) replaceAllFilters:(NSArray *) newFilters;
- (void) removeFilter:(XDGPUImageOutput<XDGPUImageInput> *)filter;
- (void) removeFilterAtIndex:(NSUInteger)index;
- (void) removeAllFilters;

- (UIImage *) currentFilteredFrame;
- (UIImage *) currentFilteredFrameWithOrientation:(UIImageOrientation)imageOrientation;
- (CGImageRef) newCGImageFromCurrentFilteredFrame;

@end
