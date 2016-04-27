//
//   XDGPUImageHistogramEqualizationFilter.h
//  FilterShowcase
//
//  Created by Adam Marcus on 19/08/2014.
//  Copyright (c) 2014 Sunset Lake Software LLC. All rights reserved.
//

#import "XDGPUImageFilterGroup.h"
#import "XDGPUImageHistogramFilter.h"
#import "XDGPUImageRawDataOutput.h"
#import "XDGPUImageRawDataInput.h"
#import "XDGPUImageTwoInputFilter.h"

@interface  XDGPUImageHistogramEqualizationFilter :  XDGPUImageFilterGroup
{
     XDGPUImageHistogramFilter *histogramFilter;
     XDGPUImageRawDataOutput *rawDataOutputFilter;
     XDGPUImageRawDataInput *rawDataInputFilter;
}

@property(readwrite, nonatomic) NSUInteger downsamplingFactor;

- (id)initWithHistogramType:(XDGPUImageHistogramType)newHistogramType;

@end
