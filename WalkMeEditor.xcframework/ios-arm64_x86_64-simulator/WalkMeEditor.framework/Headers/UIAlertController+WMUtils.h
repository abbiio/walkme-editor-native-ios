//
//  UIAlertController+WMUtils.h
//  WalkMeSDK
//
//  Created by Haim Benchimol on 22/07/2018.
//  Copyright © 2018 WalkMe Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WMAlertWindow : UIWindow

@property (nonatomic, weak) UIWindow *underlyingWindow;

@end

@interface UIAlertController (WMUtils)

- (void)__wm__show:(BOOL)animated;
- (void)__wm__hide;

@end
