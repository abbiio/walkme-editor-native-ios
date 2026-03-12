//
//  NSString+WMAdditions.h
//  WalkMeSDK
//
//  Created by Haim Benchimol on 03/04/2018.
//  Copyright © 2018 WalkMe Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface NSString (WMAdditions)

- (NSUInteger)__wm__distanceFromString:(NSString*)query;
- (NSString*)__wm__decodedBase64String;

- (NSUInteger)__wm__crc32;
- (NSString*)__wm__crc32String;
- (NSString *)__wm__sha1String;
- (NSString*)__wm__sha512String;

- (NSString*)__wm_unwrapCSSVarFallback;
- (NSString *)__wm_unwrapCSSURLIfNeeded;

- (UIColor*)__wm__colorFromHexString;

- (CGFloat)__wm__sizeFromString:(CGRect)parent isHorizontal:(BOOL)isHorizontal;
- (CGFloat)__wm__rectHeightFor:(UIFont*)font andWidth:(CGFloat)width NS_AVAILABLE(10_11, 7_0);

- (BOOL)__wm__isLikeFormat:(NSString*)format;
- (NSString*)__wm__stringByRemovingPipeSections;
- (CGFloat)__wm__pixelValue;
- (NSString*)__wm__escapeJson;

- (NSString *)__wm__limitedStringLength:(NSUInteger)length;
- (NSString *)__wm__substringFromEndOfLength:(NSUInteger)length;
- (NSString *)__wm__removeSubstrings:(NSArray<NSString *> *)substrings;
- (NSString *)__wm__stringByRemovingAngleBracketedText;

@end
