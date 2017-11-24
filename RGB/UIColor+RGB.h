//
//  UIColor+RGB.h
//  Test3.0
//
//  Created by YuanGu on 2017/11/3.
//  Copyright © 2017年 YuanGu. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIColor (RGB)

+ (UIColor *)colorWithHexString:(NSString*)stringToConvert;

+ (UIColor *)colorWithRGBHex:(UInt32)hex;

@end
