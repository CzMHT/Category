//
//  UIImage+Extension.h
//  Category
//
//  Created by YuanGu on 2017/11/24.
//  Copyright © 2017年 YuanGu. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (Extension)

//颜色转换成图片(带圆角的)
+ (UIImage *)imageWithColor:(UIColor *)color redius:(CGFloat)redius size:(CGSize)size;

//将图片截成圆形图片
+ (UIImage *)imagewithImage:(UIImage *)image;

@end
