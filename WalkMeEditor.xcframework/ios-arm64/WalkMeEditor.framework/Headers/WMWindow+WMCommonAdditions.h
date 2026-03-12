//
//  WMWindow+WMCommonAdditions.h
//  WalkMeSDKCommonCore
//
//  Created by Haim Ben Chimol on 06/10/2019.
//  Copyright © 2019 WalkMe. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIWindow (WMCommonAdditions)

+ (UIWindow *)__wm__activeWindow;
+ (UIWindow *)__wm__mainActiveWindow;
- (UIView *)__wm__contentView;
- (CGRect)__wm__windowBounds;

@end

NS_ASSUME_NONNULL_END
