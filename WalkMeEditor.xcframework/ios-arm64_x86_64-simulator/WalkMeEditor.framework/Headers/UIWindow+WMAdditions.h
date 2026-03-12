//
//  UIWindow+WMAdditions.h
//  WalkMe
//
//  Created by Sharony, Guy on 20/01/2026.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIWindow (WMAdditions)

- (NSArray<UIView *> *) __wm__nonMainViews;

@end

NS_ASSUME_NONNULL_END
