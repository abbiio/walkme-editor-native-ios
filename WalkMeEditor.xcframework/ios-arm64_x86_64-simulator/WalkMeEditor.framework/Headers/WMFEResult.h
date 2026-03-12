//
//  WMElement.h
//  WalkMeSDK
//
//  Created by Haim Benchimol on 21/03/2017.
//  Copyright © 2017 WalkMe Ltd. All rights reserved.
//

#import "WMFEDefines.h"
#import "WMElementObject.h"
#import "WMExternalBridgeInterface.h"

@interface WMFEResult : NSObject <WMFEResultInterface>

@property (nonatomic,assign) NSUInteger stepIndex;
@property (nonatomic,strong) NSString *elementKey;
@property (nonatomic,strong) WMBaseElementObject *model;

@property (nonatomic,assign) CGRect frame; // The frame of the element found in the view coordinate system (in a case of a web element frame != view.bounds)

@property (nonatomic,assign) BOOL isDisabled;
@property (nonatomic,readonly) BOOL isFocused;
@property (nonatomic,assign) BOOL wasDismissed;

- (CGRect)rectInWindowForRect:(CGRect)rect;

- (void)scrollToElementAnimated:(BOOL)animated completion:(void (^)(BOOL success))completion;

+ (WMFEResult*)elementFromView:(UIView*)view;
- (BOOL)isElementInWindow;
- (BOOL)isCurrentlyShown;

@end

@protocol WMNonNativeElementDelegate <NSObject>

@optional
- (void)didNonNativeElementClicked:(WMFEResult *)nonNativeElement;
- (void)didNonNativeElementFocusOut:(WMFEResult *)nonNativeElement;
- (void)didNonNativeElementRequestFocus:(WMFEResult *)nonNativeElement;
- (void)didNonNativeElementPositionChanged:(WMFEResult *)nonNativeElement;
- (void)didNonNativeElementChangedVisibility:(WMFEResult *)nonNativeElement isHidden:(BOOL)isHidden;
- (void)didKeyboardReturnTapped:(WMFEResult *)nonNativeElement;

@end

@interface WMFEResultNonNative : WMFEResult

@property (nonatomic, weak) id<WMNonNativeElementDelegate> delegate;
@property (nonatomic, weak) id<WMExternalBridgeInterface> bridge;
@property (nonatomic, assign) CGRect scrollParentRect;

- (instancetype)initFromView:(UIView *)view withNonNativeElementProps:(NSDictionary *)nonNativeElementProps andBridge:(id<WMExternalBridgeInterface>)bridge;

- (void)activateElementObservers:(id<WMNonNativeElementDelegate>)delegate;
- (void)deActivateElementObservers;
- (UIEdgeInsets)getScrollViewContentInsets;

@end

@interface WMFEResultWeb : WMFEResultNonNative

@end

@interface WMFEResultExternal : WMFEResultNonNative

@end
