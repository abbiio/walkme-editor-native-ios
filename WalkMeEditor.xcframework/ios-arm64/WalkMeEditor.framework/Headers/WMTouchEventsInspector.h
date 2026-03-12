//
//  WMTouchEventsInspector.h
//  WalkMeSDK
//
//  Created by Haim Benchimol on 08/06/2017.
//  Copyright © 2017 WalkMe Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_OPTIONS(NSUInteger,WMTouchEventTypeOption) {
    WMTouchEventTypeOptionTap = 1 << 0,
    WMTouchEventTypeOptionSwipe = 1 << 1,
    WMTouchEventTypeOptionScroll = 3,
    WMTouchEventTypeOptionAny = 4,
};

typedef NS_OPTIONS(NSUInteger,WMElementSwipeDirection) {
    WMElementSwipeDirectionRight = 1 << 0,
    WMElementSwipeDirectionLeft = 1 << 1,
    WMElementSwipeDirectionAny = 3,
};

@class WMTouchEventsInspector;
@protocol WMTouchEventsInspectorDelegate <NSObject>

@optional
- (NSPredicate*)ignoredSwipePredicate;
- (NSArray<UIView*>*)ignoredViews;
- (WMTouchEventTypeOption)ignoredTouchTypes;

- (void)touchInspector:(WMTouchEventsInspector*)touchInspector 
          didSwipeView:(UIView*)view
        swipeDirection:(WMElementSwipeDirection)swipeDirection 
              distance:(CGFloat)distance 
              velocity:(CGFloat)velocity;

- (void)touchInspector:(WMTouchEventsInspector*)touchInspector 
          didTouchView:(UIView*)view
           pointInView:(CGPoint)pointInView
         pointInWindow:(CGPoint)pointInWindow
             touchType:(WMTouchEventTypeOption)touchType;

- (void)touchInspector:(WMTouchEventsInspector*)touchInspector didIgnoreTouchOnView:(UIView*)view atPoint:(CGPoint)point;
- (void)touchInspector:(WMTouchEventsInspector*)touchInspector didSendEvent:(UIEvent*)event;
- (BOOL)touchInspector:(WMTouchEventsInspector*)touchInspector shouldCancelOrigSendEvent:(UIEvent*)event;

@end

@interface WMTouchEventsInspector : NSObject

+ (WMTouchEventsInspector*)shared;

- (void)observeTouches:(id<WMTouchEventsInspectorDelegate>)observer;
- (void)removeObserverForTouches:(id<WMTouchEventsInspectorDelegate>)observer;

// Returns YES if original send event should be invoked
// Asks the delegate "shouldCancelOrigSendEvent"
// Default will return YES
- (BOOL)sendEvent:(UIEvent*)event;
@end
