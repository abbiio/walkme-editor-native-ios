//
//  UIViewController+WMAdditions.h
//  WalkMeSDK
//
//  Created by Haim Benchimol on 19/06/2017.
//  Copyright © 2017 WalkMe Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIViewController (WMAdditions)

- (BOOL)wmShouldIgnoreVCFromHeirarchy;
- (nullable NSString *)wmFriendlyName;
- (nullable NSString *)wmVCTitle;
- (nonnull NSString *)wmPath;
- (nonnull UIButton *)wmCreateCustomNavBarButtonWithTitle:(nonnull NSString *)title andAction:(nonnull SEL)action;
- (BOOL)__wm__isDescendantOf:(nullable UIViewController *)ancestorVC;
- (BOOL)__wm__isViewLoaded;
- (BOOL)__wm__isSwiftUI;
    
@end
