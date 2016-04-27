#import "XDGPUImageTwoInputFilter.h"

extern NSString *const kGPUImageThreeInputTextureVertexShaderString;

@interface  XDGPUImageThreeInputFilter :  XDGPUImageTwoInputFilter
{
     XDGPUImageFramebuffer *thirdInputFramebuffer;

    GLint filterThirdTextureCoordinateAttribute;
    GLint filterInputTextureUniform3;
     XDGPUImageRotationMode inputRotation3;
    GLuint filterSourceTexture3;
    CMTime thirdFrameTime;
    
    BOOL hasSetSecondTexture, hasReceivedThirdFrame, thirdFrameWasVideo;
    BOOL thirdFrameCheckDisabled;
}

- (void)disableThirdFrameCheck;

@end
