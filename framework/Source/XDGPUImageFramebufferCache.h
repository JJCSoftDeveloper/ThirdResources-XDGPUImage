#import <Foundation/Foundation.h>
#import <QuartzCore/QuartzCore.h>
#import "XDGPUImageFramebuffer.h"

@interface  XDGPUImageFramebufferCache : NSObject

// Framebuffer management
- (XDGPUImageFramebuffer *)fetchFramebufferForSize:(CGSize)framebufferSize textureOptions:(GPUTextureOptions)textureOptions onlyTexture:(BOOL)onlyTexture;
- (XDGPUImageFramebuffer *)fetchFramebufferForSize:(CGSize)framebufferSize onlyTexture:(BOOL)onlyTexture;
- (void)returnFramebufferToCache:(XDGPUImageFramebuffer *)framebuffer;
- (void)purgeAllUnassignedFramebuffers;
- (void)addFramebufferToActiveImageCaptureList:(XDGPUImageFramebuffer *)framebuffer;
- (void)removeFramebufferFromActiveImageCaptureList:(XDGPUImageFramebuffer *)framebuffer;

@end
