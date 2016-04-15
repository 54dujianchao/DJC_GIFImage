//
//  DJC_GIFImage.h
//  DJC_GIFImage
//
//  Created by 杜建超 on 14-3-2.
//  Copyright (c) 2014年 杜建超. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DJC_GIFImage : UIImage

///-----------------------
/// @name Image Attributes
///-----------------------

/**
 A C array containing the frame durations.
 
 The number of frames is defined by the count of the `images` array property.
 */
@property (nonatomic, readonly) NSTimeInterval *frameDurations;

/**
 Total duration of the animated image.
 */
@property (nonatomic, readonly) NSTimeInterval totalDuration;

/**
 Number of loops the image can do before it stops
 */
@property (nonatomic, readonly) NSUInteger loopCount;

- (UIImage*)getFrameWithIndex:(NSUInteger)idx;

@end
