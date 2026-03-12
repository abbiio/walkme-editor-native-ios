//
//  UIApplication+WMCommonPlayerAdditions.h
//  WalkMeSDKCommonPlayer
//
//  Created by Sharony, Guy on 16/11/2025.
//  Copyright © 2025 WalkMe. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIApplication (WMCommonPlayerAdditions)

- (nullable UIWindow *)__wm__keyWindow;
- (nullable UIWindow *)__wm__window;

@end

NS_ASSUME_NONNULL_END
