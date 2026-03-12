//
//  UIView+WMCommonPlayerAdditions.h
//  WalkMeSDKCommonPlayer
//
//  Created by Sharony, Guy on 16/11/2025.
//  Copyright © 2025 WalkMe. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIView (WMCommonPlayerAdditions)

- (BOOL)__wm__isWebView;
- (BOOL)__wm__isFlutterView;
- (BOOL)__wm__isBridgedView;

- (__kindof UIView *)__wm__viewOfType:(Class)classType;
- (__kindof UIView *)__wm__rootviewOfType:(Class)classType;

- (void)__wm__removeAllSubviews;

- (void)__wm__setViewShadowX:(CGFloat)x y:(CGFloat)y radius:(CGFloat)radius opacity:(CGFloat)opacity;
- (void)__wm__setViewShadowX:(CGFloat)x y:(CGFloat)y radius:(CGFloat)radius opacity:(CGFloat)opacity color:(UIColor *)color;

- (UIView *)__wm__getFrontMostView:(CGPoint)point event:(UIEvent * _Nullable)event ignoredViews:(NSArray<UIView *> * _Nullable)ignoredViews;
- (UIView *)__wm__filterSubviewsOf:(NSArray<Class> *)superviews;
- (UIView *)__wm__getUserInteractableView;
- (UIView *)__wm__subviewWithPredicate:(NSPredicate *)predicate;

- (NSArray<UIView *> *)__wm__subviewsOfType:(Class)classType;
- (NSArray<UIView *> *)__wm__subviewsOfTypes:(NSArray<Class> *)classTypes;
- (NSArray<UIView *> *)__wm__visibleSibilingViewsOfType:(Class)classType;
- (NSArray<UIView *> *)__wm__visibleSubviewsOfType:(Class)classType;

- (UIView *)__wm__getFrontMostView:(CGRect)rect;
- (UIViewController *)__wm__childContainerInVC:(UIViewController *)vc;
- (UIViewController *)__wm__container;

// Goes up in the view's hierarchy till superview is equal to classType
// Returns a view, which its superview is of type classType, or nil if there is no superview of type classType
- (id)__wm__superviewOfType:(Class)superViewClassType;

// index as following:
// 0 = current view, 1 = super view, 2 = grandfather view, ...
// returns nil if index is greather than the view hierarchy levels
- (id)__wm__superviewWithIndex:(NSUInteger)index;
- (NSInteger)__wm__indexOfSuperview:(UIView *)superview;

// Goes up in the view's hierarchy (including self by param) till view type is equal to classType. Ignore classes of specific types that are subclass of classType
// Returns nil if there is no view of type classType
- (id)__wm__viewOfType:(Class)classType ignoredClasses:(NSArray<Class>*)ignoredClasses includeSelf:(BOOL)includeSelf;

- (id)__wm__viewTextWrapper; // Can be NSString / NSAttributedString / NSTextStorage or any other text wrapper
- (NSString *)__wm__textFromView;
- (void)__wm__textFromViewWithCompletion:(void (^_Nonnull)(NSString * _Nonnull text))completion;
- (nonnull NSString *)__wm__viewClassName;

- (UIViewController *)__wm_associatedVCFromContainer:(UIViewController *)containerVC;

- (BOOL)__wm__isVisible;
- (BOOL)__wm__isVisibleAndNotCovered;

- (BOOL)__wm__isKindOfWMSupportedScrollableClass;
- (BOOL)__wm__isKindOfWMTableReusableView;
- (BOOL)__wm__isKindOfWMCollectionReusableView;
- (BOOL)__wm__isKindOfWMSwiftUIScrollableView;
- (id)__wm__supportedWMScrollableSuperview;

// patch for bug in ios26 that has CameraUI.ModeLoupeLayer not initializing init(layer:)
- (CGRect)__wm__frame;

- (nullable UIImage *)__wm__imageFromLayer;
- (nullable NSNumber *)__wm__displayListID;
- (BOOL)__wm__shouldRunOCR;
- (BOOL)__wm__isSwiftUIView;
- (BOOL)__wm__isSwiftUIImage;
- (BOOL)__wm__isSwiftUIClass:(nonnull Class)cls;
- (BOOL)__wm__isMemberOfSwiftUIClass:(nonnull NSString *)className;

- (NSArray<UIView *> *)__wm__visibleSwiftUISubviewsOfType:(NSString *)className;

@end

NS_ASSUME_NONNULL_END
