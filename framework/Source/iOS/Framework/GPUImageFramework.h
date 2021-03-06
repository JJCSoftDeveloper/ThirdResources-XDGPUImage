#import <UIKit/UIKit.h>

//! Project version number for XDGPUImageFramework.
FOUNDATION_EXPORT double XDGPUImageFrameworkVersionNumber;

//! Project version string for XDGPUImageFramework.
FOUNDATION_EXPORT const unsigned char XDGPUImageFrameworkVersionString[];

#import <XDGPUImage/GLProgram.h>

// Base classes
#import <XDGPUImage/XDGPUImageContext.h>
#import <XDGPUImage/XDGPUImageOutput.h>
#import <XDGPUImage/XDGPUImageView.h>
#import <XDGPUImage/XDGPUImageVideoCamera.h>
#import <XDGPUImage/XDGPUImageStillCamera.h>
#import <XDGPUImage/XDGPUImageMovie.h>
#import <XDGPUImage/XDGPUImagePicture.h>
#import <XDGPUImage/XDGPUImageRawDataInput.h>
#import <XDGPUImage/XDGPUImageRawDataOutput.h>
#import <XDGPUImage/XDGPUImageMovieWriter.h>
#import <XDGPUImage/XDGPUImageFilterPipeline.h>
#import <XDGPUImage/XDGPUImageTextureOutput.h>
#import <XDGPUImage/XDGPUImageFilterGroup.h>
#import <XDGPUImage/XDGPUImageTextureInput.h>
#import <XDGPUImage/XDGPUImageUIElement.h>
#import <XDGPUImage/XDGPUImageBuffer.h>
#import <XDGPUImage/XDGPUImageFramebuffer.h>
#import <XDGPUImage/XDGPUImageFramebufferCache.h>

// Filters
#import <XDGPUImage/XDGPUImageFilter.h>
#import <XDGPUImage/XDGPUImageTwoInputFilter.h>
#import <XDGPUImage/XDGPUImagePixellateFilter.h>
#import <XDGPUImage/XDGPUImagePixellatePositionFilter.h>
#import <XDGPUImage/XDGPUImageSepiaFilter.h>
#import <XDGPUImage/XDGPUImageColorInvertFilter.h>
#import <XDGPUImage/XDGPUImageSaturationFilter.h>
#import <XDGPUImage/XDGPUImageContrastFilter.h>
#import <XDGPUImage/XDGPUImageExposureFilter.h>
#import <XDGPUImage/XDGPUImageBrightnessFilter.h>
#import <XDGPUImage/XDGPUImageLevelsFilter.h>
#import <XDGPUImage/XDGPUImageSharpenFilter.h>
#import <XDGPUImage/XDGPUImageGammaFilter.h>
#import <XDGPUImage/XDGPUImageSobelEdgeDetectionFilter.h>
#import <XDGPUImage/XDGPUImageSketchFilter.h>
#import <XDGPUImage/XDGPUImageToonFilter.h>
#import <XDGPUImage/XDGPUImageSmoothToonFilter.h>
#import <XDGPUImage/XDGPUImageMultiplyBlendFilter.h>
#import <XDGPUImage/XDGPUImageDissolveBlendFilter.h>
#import <XDGPUImage/XDGPUImageKuwaharaFilter.h>
#import <XDGPUImage/XDGPUImageKuwaharaRadius3Filter.h>
#import <XDGPUImage/XDGPUImageVignetteFilter.h>
#import <XDGPUImage/XDGPUImageGaussianBlurFilter.h>
#import <XDGPUImage/XDGPUImageGaussianBlurPositionFilter.h>
#import <XDGPUImage/XDGPUImageGaussianSelectiveBlurFilter.h>
#import <XDGPUImage/XDGPUImageOverlayBlendFilter.h>
#import <XDGPUImage/XDGPUImageDarkenBlendFilter.h>
#import <XDGPUImage/XDGPUImageLightenBlendFilter.h>
#import <XDGPUImage/XDGPUImageSwirlFilter.h>
#import <XDGPUImage/XDGPUImageSourceOverBlendFilter.h>
#import <XDGPUImage/XDGPUImageColorBurnBlendFilter.h>
#import <XDGPUImage/XDGPUImageColorDodgeBlendFilter.h>
#import <XDGPUImage/XDGPUImageScreenBlendFilter.h>
#import <XDGPUImage/XDGPUImageExclusionBlendFilter.h>
#import <XDGPUImage/XDGPUImageDifferenceBlendFilter.h>
#import <XDGPUImage/XDGPUImageSubtractBlendFilter.h>
#import <XDGPUImage/XDGPUImageHardLightBlendFilter.h>
#import <XDGPUImage/XDGPUImageSoftLightBlendFilter.h>
#import <XDGPUImage/XDGPUImageColorBlendFilter.h>
#import <XDGPUImage/XDGPUImageHueBlendFilter.h>
#import <XDGPUImage/XDGPUImageSaturationBlendFilter.h>
#import <XDGPUImage/XDGPUImageLuminosityBlendFilter.h>
#import <XDGPUImage/XDGPUImageCropFilter.h>
#import <XDGPUImage/XDGPUImageGrayscaleFilter.h>
#import <XDGPUImage/XDGPUImageTransformFilter.h>
#import <XDGPUImage/XDGPUImageChromaKeyBlendFilter.h>
#import <XDGPUImage/XDGPUImageHazeFilter.h>
#import <XDGPUImage/XDGPUImageLuminanceThresholdFilter.h>
#import <XDGPUImage/XDGPUImagePosterizeFilter.h>
#import <XDGPUImage/XDGPUImageBoxBlurFilter.h>
#import <XDGPUImage/XDGPUImageAdaptiveThresholdFilter.h>
#import <XDGPUImage/XDGPUImageUnsharpMaskFilter.h>
#import <XDGPUImage/XDGPUImageBulgeDistortionFilter.h>
#import <XDGPUImage/XDGPUImagePinchDistortionFilter.h>
#import <XDGPUImage/XDGPUImageCrosshatchFilter.h>
#import <XDGPUImage/XDGPUImageCGAColorspaceFilter.h>
#import <XDGPUImage/XDGPUImagePolarPixellateFilter.h>
#import <XDGPUImage/XDGPUImageStretchDistortionFilter.h>
#import <XDGPUImage/XDGPUImagePerlinNoiseFilter.h>
#import <XDGPUImage/XDGPUImageJFAVoronoiFilter.h>
#import <XDGPUImage/XDGPUImageVoronoiConsumerFilter.h>
#import <XDGPUImage/XDGPUImageMosaicFilter.h>
#import <XDGPUImage/XDGPUImageTiltShiftFilter.h>
#import <XDGPUImage/XDGPUImage3x3ConvolutionFilter.h>
#import <XDGPUImage/XDGPUImageEmbossFilter.h>
#import <XDGPUImage/XDGPUImageCannyEdgeDetectionFilter.h>
#import <XDGPUImage/XDGPUImageThresholdEdgeDetectionFilter.h>
#import <XDGPUImage/XDGPUImageMaskFilter.h>
#import <XDGPUImage/XDGPUImageHistogramFilter.h>
#import <XDGPUImage/XDGPUImageHistogramGenerator.h>
#import <XDGPUImage/XDGPUImagePrewittEdgeDetectionFilter.h>
#import <XDGPUImage/XDGPUImageXYDerivativeFilter.h>
#import <XDGPUImage/XDGPUImageHarrisCornerDetectionFilter.h>
#import <XDGPUImage/XDGPUImageAlphaBlendFilter.h>
#import <XDGPUImage/XDGPUImageNormalBlendFilter.h>
#import <XDGPUImage/XDGPUImageNonMaximumSuppressionFilter.h>
#import <XDGPUImage/XDGPUImageRGBFilter.h>
#import <XDGPUImage/XDGPUImageMedianFilter.h>
#import <XDGPUImage/XDGPUImageBilateralFilter.h>
#import <XDGPUImage/XDGPUImageCrosshairGenerator.h>
#import <XDGPUImage/XDGPUImageToneCurveFilter.h>
#import <XDGPUImage/XDGPUImageNobleCornerDetectionFilter.h>
#import <XDGPUImage/XDGPUImageShiTomasiFeatureDetectionFilter.h>
#import <XDGPUImage/XDGPUImageErosionFilter.h>
#import <XDGPUImage/XDGPUImageRGBErosionFilter.h>
#import <XDGPUImage/XDGPUImageDilationFilter.h>
#import <XDGPUImage/XDGPUImageRGBDilationFilter.h>
#import <XDGPUImage/XDGPUImageOpeningFilter.h>
#import <XDGPUImage/XDGPUImageRGBOpeningFilter.h>
#import <XDGPUImage/XDGPUImageClosingFilter.h>
#import <XDGPUImage/XDGPUImageRGBClosingFilter.h>
#import <XDGPUImage/XDGPUImageColorPackingFilter.h>
#import <XDGPUImage/XDGPUImageSphereRefractionFilter.h>
#import <XDGPUImage/XDGPUImageMonochromeFilter.h>
#import <XDGPUImage/XDGPUImageOpacityFilter.h>
#import <XDGPUImage/XDGPUImageHighlightShadowFilter.h>
#import <XDGPUImage/XDGPUImageFalseColorFilter.h>
#import <XDGPUImage/XDGPUImageHSBFilter.h>
#import <XDGPUImage/XDGPUImageHueFilter.h>
#import <XDGPUImage/XDGPUImageGlassSphereFilter.h>
#import <XDGPUImage/XDGPUImageLookupFilter.h>
#import <XDGPUImage/XDGPUImageAmatorkaFilter.h>
#import <XDGPUImage/XDGPUImageMissEtikateFilter.h>
#import <XDGPUImage/XDGPUImageSoftEleganceFilter.h>
#import <XDGPUImage/XDGPUImageAddBlendFilter.h>
#import <XDGPUImage/XDGPUImageDivideBlendFilter.h>
#import <XDGPUImage/XDGPUImagePolkaDotFilter.h>
#import <XDGPUImage/XDGPUImageLocalBinaryPatternFilter.h>
#import <XDGPUImage/XDGPUImageLanczosResamplingFilter.h>
#import <XDGPUImage/XDGPUImageAverageColor.h>
#import <XDGPUImage/XDGPUImageSolidColorGenerator.h>
#import <XDGPUImage/XDGPUImageLuminosity.h>
#import <XDGPUImage/XDGPUImageAverageLuminanceThresholdFilter.h>
#import <XDGPUImage/XDGPUImageWhiteBalanceFilter.h>
#import <XDGPUImage/XDGPUImageChromaKeyFilter.h>
#import <XDGPUImage/XDGPUImageLowPassFilter.h>
#import <XDGPUImage/XDGPUImageHighPassFilter.h>
#import <XDGPUImage/XDGPUImageMotionDetector.h>
#import <XDGPUImage/XDGPUImageHalftoneFilter.h>
#import <XDGPUImage/XDGPUImageThresholdedNonMaximumSuppressionFilter.h>
#import <XDGPUImage/XDGPUImageHoughTransformLineDetector.h>
#import <XDGPUImage/XDGPUImageParallelCoordinateLineTransformFilter.h>
#import <XDGPUImage/XDGPUImageThresholdSketchFilter.h>
#import <XDGPUImage/XDGPUImageLineGenerator.h>
#import <XDGPUImage/XDGPUImageLinearBurnBlendFilter.h>
#import <XDGPUImage/XDGPUImageGaussianBlurPositionFilter.h>
#import <XDGPUImage/XDGPUImagePixellatePositionFilter.h>
#import <XDGPUImage/XDGPUImageTwoInputCrossTextureSamplingFilter.h>
#import <XDGPUImage/XDGPUImagePoissonBlendFilter.h>
#import <XDGPUImage/XDGPUImageMotionBlurFilter.h>
#import <XDGPUImage/XDGPUImageZoomBlurFilter.h>
#import <XDGPUImage/XDGPUImageLaplacianFilter.h>
#import <XDGPUImage/XDGPUImageiOSBlurFilter.h>
#import <XDGPUImage/XDGPUImageLuminanceRangeFilter.h>
#import <XDGPUImage/XDGPUImageDirectionalNonMaximumSuppressionFilter.h>
#import <XDGPUImage/XDGPUImageDirectionalSobelEdgeDetectionFilter.h>
#import <XDGPUImage/XDGPUImageSingleComponentGaussianBlurFilter.h>
#import <XDGPUImage/XDGPUImageThreeInputFilter.h>
#import <XDGPUImage/XDGPUImageWeakPixelInclusionFilter.h>
#import <XDGPUImage/XDGPUImageFASTCornerDetectionFilter.h>
#import <XDGPUImage/XDGPUImageMovieComposition.h>
