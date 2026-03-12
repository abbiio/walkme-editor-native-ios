//
//  UIWindow+WMPMAdditions.h
//  WalkMeEditor
//
//  Created by Sharony, Guy on 27/11/2025.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIWindow (WMPMAdditions)

@property (nonatomic, readonly) UIViewController *wmPresentedVC;

- (UIEdgeInsets)wmSafeAreaInsets;

- (void)presentVCOnWindow:(UIViewController *)viewControllerToPresent animated:(BOOL)flag completion:(void (^ _Nullable)(void))completion;

- (void)dismissVCFromWindowAnimated:(BOOL)flag completion:(void (^ _Nullable)(void))completion;

@end

NS_ASSUME_NONNULL_END
