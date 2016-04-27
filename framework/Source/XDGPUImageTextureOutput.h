#import <Foundation/Foundation.h>
#import "XDGPUImageContext.h"

@protocol  XDGPUImageTextureOutputDelegate;

@interface  XDGPUImageTextureOutput : NSObject <XDGPUImageInput>
{
     XDGPUImageFramebuffer *firstInputFramebuffer;
}

@property(readwrite, unsafe_unretained, nonatomic) id<XDGPUImageTextureOutputDelegate> delegate;
@property(readonly) GLuint texture;
@property(nonatomic) BOOL enabled;

- (void)doneWithTexture;

@end

@protocol  XDGPUImageTextureOutputDelegate
- (void)newFrameReadyFromTextureOutput:(XDGPUImageTextureOutput *)callbackTextureOutput;
@end
