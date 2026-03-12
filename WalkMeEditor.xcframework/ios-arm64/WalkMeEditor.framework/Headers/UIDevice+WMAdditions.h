//
//  UIDevice+WMAdditions.h
//  WalkMeSDK
//
//  Created by Guy Sharony on 03/02/2019.
//  Copyright © 2019 WalkMe Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIDevice (WMAdditions)

- (BOOL)__wmHasNotch;
+ (UIEdgeInsets)__wm__safeAreaInsets;

@end

NS_ASSUME_NONNULL_END
