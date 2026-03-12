//
//  WMElementHandler.h
//  WalkMeSDK
//
//  Created by Haim Benchimol on 06/07/2017.
//  Copyright © 2017 WalkMe Ltd. All rights reserved.
//

#import "WMFEResult.h"
#import "WMElementObject.h"
#import "WMTouchEventsInspector.h"
#import "WMElementHandlerInterface.h"

@class WMElementHandler, WMInputElementHandler;

@protocol WMElementHandlerDelegate <NSObject>

@required
- (void)didTapElement:(WMElementHandler*)elementHandler;
- (void)didElementVCWillDissapear:(WMElementHandler*)elementHandler;
- (void)didElementOutOfBounds:(WMElementHandler*)elementHandler;
- (void)willShowKeyboard:(CGRect)kbFrame elementHandler:(WMElementHandler<WMElementHandlerProtocol>*)elementHandler;
- (void)willHideKeyboardWithElementHandler:(WMElementHandler<WMElementHandlerProtocol>*)elementHandler;

@optional
- (BOOL)isSpotlightHighlight;
- (void)didTapOutsideElement:(WMElementHandler *)elementHandler;

@end

@protocol WMInputElementHandlerDelegate <WMElementHandlerDelegate>

@required
- (void)shouldDismissElement:(WMElementHandler<WMElementHandlerProtocol>*)elementHandler;

@end

@interface WMElementHandler : NSObject <WMElementHandlerProtocol,WMTouchEventsInspectorDelegate>

@property (nonatomic, readonly) WMFEResult *element;
@property (nonatomic, readonly) WMElementObject *model;
@property (nonatomic, weak) id<WMElementHandlerDelegate> delegate;

+ (WMElementHandler*)elementHandlerForElement:(WMFEResult*)element model:(WMElementObject*)model delegate:(id)delegate;

- (instancetype)initWithElement:(WMFEResult*)element model:(WMElementObject*)model delegate:(id<WMElementHandlerDelegate>)delegate;
- (void)didTouch;
- (BOOL)shouldProcessTouchAtPoint:(CGPoint)point inView:(UIView*)view;
- (BOOL)shouldProcessSwipeOnView:(UIView*)view direction:(WMElementSwipeDirection)direction distance:(CGFloat)distance velocity:(CGFloat)velocity;

@end
