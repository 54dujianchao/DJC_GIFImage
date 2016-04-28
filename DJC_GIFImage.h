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
 动画时间
 默认是frames的个数
 */
@property (nonatomic, readonly) NSTimeInterval *frameDurations;

/**
 总时间
 */
@property (nonatomic, readonly) NSTimeInterval totalDuration;

/**
动画停止之前loops图片的数量
 */
@property (nonatomic, readonly) NSUInteger loopCount;

- (UIImage*)getFrameWithIndex:(NSUInteger)idx;

@end
