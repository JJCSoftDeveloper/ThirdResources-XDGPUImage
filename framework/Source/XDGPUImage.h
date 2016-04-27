#import "GLProgram.h"

// Base classes
#import "XDGPUImageContext.h"
#import "XDGPUImageOutput.h"
#import "XDGPUImageView.h"
#import "XDGPUImageVideoCamera.h"
#import "XDGPUImageStillCamera.h"
#import "XDGPUImageMovie.h"
#import "XDGPUImagePicture.h"
#import "XDGPUImageRawDataInput.h"
#import "XDGPUImageRawDataOutput.h"
#import "XDGPUImageMovieWriter.h"
#import "XDGPUImageFilterPipeline.h"
#import "XDGPUImageTextureOutput.h"
#import "XDGPUImageFilterGroup.h"
#import "XDGPUImageTextureInput.h"
#import "XDGPUImageUIElement.h"
#import "XDGPUImageBuffer.h"
#import "XDGPUImageFramebuffer.h"
#import "XDGPUImageFramebufferCache.h"

// Filters
#import "XDGPUImageFilter.h"
#import "XDGPUImageTwoInputFilter.h"
#import "XDGPUImagePixellateFilter.h"
#import "XDGPUImagePixellatePositionFilter.h"
#import "XDGPUImageSepiaFilter.h"
#import "XDGPUImageColorInvertFilter.h"
#import "XDGPUImageSaturationFilter.h"
#import "XDGPUImageContrastFilter.h"
#import "XDGPUImageExposureFilter.h"
#import "XDGPUImageBrightnessFilter.h"
#import "XDGPUImageLevelsFilter.h"
#import "XDGPUImageSharpenFilter.h"
#import "XDGPUImageGammaFilter.h"
#import "XDGPUImageSobelEdgeDetectionFilter.h"
#import "XDGPUImageSketchFilter.h"
#import "XDGPUImageToonFilter.h"
#import "XDGPUImageSmoothToonFilter.h"
#import "XDGPUImageMultiplyBlendFilter.h"
#import "XDGPUImageDissolveBlendFilter.h"
#import "XDGPUImageKuwaharaFilter.h"
#import "XDGPUImageKuwaharaRadius3Filter.h"
#import "XDGPUImageVignetteFilter.h"
#import "XDGPUImageGaussianBlurFilter.h"
#import "XDGPUImageGaussianBlurPositionFilter.h"
#import "XDGPUImageGaussianSelectiveBlurFilter.h"
#import "XDGPUImageOverlayBlendFilter.h"
#import "XDGPUImageDarkenBlendFilter.h"
#import "XDGPUImageLightenBlendFilter.h"
#import "XDGPUImageSwirlFilter.h"
#import "XDGPUImageSourceOverBlendFilter.h"
#import "XDGPUImageColorBurnBlendFilter.h"
#import "XDGPUImageColorDodgeBlendFilter.h"
#import "XDGPUImageScreenBlendFilter.h"
#import "XDGPUImageExclusionBlendFilter.h"
#import "XDGPUImageDifferenceBlendFilter.h"
#import "XDGPUImageSubtractBlendFilter.h"
#import "XDGPUImageHardLightBlendFilter.h"
#import "XDGPUImageSoftLightBlendFilter.h"
#import "XDGPUImageColorBlendFilter.h"
#import "XDGPUImageHueBlendFilter.h"
#import "XDGPUImageSaturationBlendFilter.h"
#import "XDGPUImageLuminosityBlendFilter.h"
#import "XDGPUImageCropFilter.h"
#import "XDGPUImageGrayscaleFilter.h"
#import "XDGPUImageTransformFilter.h"
#import "XDGPUImageChromaKeyBlendFilter.h"
#import "XDGPUImageHazeFilter.h"
#import "XDGPUImageLuminanceThresholdFilter.h"
#import "XDGPUImagePosterizeFilter.h"
#import "XDGPUImageBoxBlurFilter.h"
#import "XDGPUImageAdaptiveThresholdFilter.h"
#import "XDGPUImageUnsharpMaskFilter.h"
#import "XDGPUImageBulgeDistortionFilter.h"
#import "XDGPUImagePinchDistortionFilter.h"
#import "XDGPUImageCrosshatchFilter.h"
#import "XDGPUImageCGAColorspaceFilter.h"
#import "XDGPUImagePolarPixellateFilter.h"
#import "XDGPUImageStretchDistortionFilter.h"
#import "XDGPUImagePerlinNoiseFilter.h"
#import "XDGPUImageJFAVoronoiFilter.h"
#import "XDGPUImageVoronoiConsumerFilter.h"
#import "XDGPUImageMosaicFilter.h"
#import "XDGPUImageTiltShiftFilter.h"
#import "XDGPUImage3x3ConvolutionFilter.h"
#import "XDGPUImageEmbossFilter.h"
#import "XDGPUImageCannyEdgeDetectionFilter.h"
#import "XDGPUImageThresholdEdgeDetectionFilter.h"
#import "XDGPUImageMaskFilter.h"
#import "XDGPUImageHistogramFilter.h"
#import "XDGPUImageHistogramGenerator.h"
#import "XDGPUImageHistogramEqualizationFilter.h"
#import "XDGPUImagePrewittEdgeDetectionFilter.h"
#import "XDGPUImageXYDerivativeFilter.h"
#import "XDGPUImageHarrisCornerDetectionFilter.h"
#import "XDGPUImageAlphaBlendFilter.h"
#import "XDGPUImageNormalBlendFilter.h"
#import "XDGPUImageNonMaximumSuppressionFilter.h"
#import "XDGPUImageRGBFilter.h"
#import "XDGPUImageMedianFilter.h"
#import "XDGPUImageBilateralFilter.h"
#import "XDGPUImageCrosshairGenerator.h"
#import "XDGPUImageToneCurveFilter.h"
#import "XDGPUImageNobleCornerDetectionFilter.h"
#import "XDGPUImageShiTomasiFeatureDetectionFilter.h"
#import "XDGPUImageErosionFilter.h"
#import "XDGPUImageRGBErosionFilter.h"
#import "XDGPUImageDilationFilter.h"
#import "XDGPUImageRGBDilationFilter.h"
#import "XDGPUImageOpeningFilter.h"
#import "XDGPUImageRGBOpeningFilter.h"
#import "XDGPUImageClosingFilter.h"
#import "XDGPUImageRGBClosingFilter.h"
#import "XDGPUImageColorPackingFilter.h"
#import "XDGPUImageSphereRefractionFilter.h"
#import "XDGPUImageMonochromeFilter.h"
#import "XDGPUImageOpacityFilter.h"
#import "XDGPUImageHighlightShadowFilter.h"
#import "XDGPUImageFalseColorFilter.h"
#import "XDGPUImageHSBFilter.h"
#import "XDGPUImageHueFilter.h"
#import "XDGPUImageGlassSphereFilter.h"
#import "XDGPUImageLookupFilter.h"
#import "XDGPUImageAmatorkaFilter.h"
#import "XDGPUImageMissEtikateFilter.h"
#import "XDGPUImageSoftEleganceFilter.h"
#import "XDGPUImageAddBlendFilter.h"
#import "XDGPUImageDivideBlendFilter.h"
#import "XDGPUImagePolkaDotFilter.h"
#import "XDGPUImageLocalBinaryPatternFilter.h"
#import "XDGPUImageLanczosResamplingFilter.h"
#import "XDGPUImageAverageColor.h"
#import "XDGPUImageSolidColorGenerator.h"
#import "XDGPUImageLuminosity.h"
#import "XDGPUImageAverageLuminanceThresholdFilter.h"
#import "XDGPUImageWhiteBalanceFilter.h"
#import "XDGPUImageChromaKeyFilter.h"
#import "XDGPUImageLowPassFilter.h"
#import "XDGPUImageHighPassFilter.h"
#import "XDGPUImageMotionDetector.h"
#import "XDGPUImageHalftoneFilter.h"
#import "XDGPUImageThresholdedNonMaximumSuppressionFilter.h"
#import "XDGPUImageHoughTransformLineDetector.h"
#import "XDGPUImageParallelCoordinateLineTransformFilter.h"
#import "XDGPUImageThresholdSketchFilter.h"
#import "XDGPUImageLineGenerator.h"
#import "XDGPUImageLinearBurnBlendFilter.h"
#import "XDGPUImageGaussianBlurPositionFilter.h"
#import "XDGPUImagePixellatePositionFilter.h"
#import "XDGPUImageTwoInputCrossTextureSamplingFilter.h"
#import "XDGPUImagePoissonBlendFilter.h"
#import "XDGPUImageMotionBlurFilter.h"
#import "XDGPUImageZoomBlurFilter.h"
#import "XDGPUImageLaplacianFilter.h"
#import "XDGPUImageiOSBlurFilter.h"
#import "XDGPUImageLuminanceRangeFilter.h"
#import "XDGPUImageDirectionalNonMaximumSuppressionFilter.h"
#import "XDGPUImageDirectionalSobelEdgeDetectionFilter.h"
#import "XDGPUImageSingleComponentGaussianBlurFilter.h"
#import "XDGPUImageThreeInputFilter.h"
#import "XDGPUImageWeakPixelInclusionFilter.h"

