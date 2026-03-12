//
//  WMStepTriggerHandler.h
//  WalkMeSDK
//
//  Created by Haim Ben Chimol on 14/05/2019.
//  Copyright © 2019 WalkMe. All rights reserved.
//

#import "WMFEDefines.h"

NS_ASSUME_NONNULL_BEGIN

// Base handler interface & delegate
@protocol WMStepTriggerHandlerDelegate <NSObject>
@end

@protocol WMStepTriggerHandlerInterface <NSObject>

@required
//@property (nonatomic,weak) id<WMStepTriggerHandlerDelegate> delegate;
@property (nonatomic,weak) id<WMStepTriggerHandlerDelegate> triggerDelegate;
#warning guy check if need this delegate

@optional
- (void)willBecomeActive;
- (void)willBecomeInActive;

@end

// Click handler interface & delegate
@protocol WMStepTriggerClickHandlerInterface;
@protocol WMStepTriggerClickHandlerDelegate <WMStepTriggerHandlerDelegate>

@optional
- (void)stepTriggerHandlerDidClick:(id<WMStepTriggerClickHandlerInterface>)handler;

@end

@protocol WMStepTriggerClickHandlerInterface <WMStepTriggerHandlerInterface>

@required
//@property (nonatomic,weak) id<WMStepTriggerClickHandlerDelegate> delegate;
@property (nonatomic,weak) id<WMStepTriggerClickHandlerDelegate> clickDelegate;
#warning guy check if need this delegate

- (instancetype)initWithElement:(id<WMFEResultInterface>)element
                       delegate:(id<WMStepTriggerClickHandlerDelegate>)delegate;

@end

// Input handler interface & delegate
@protocol WMStepTriggerInputHandlerInterface;
@protocol WMStepTriggerInputHandlerDelegate <WMStepTriggerHandlerDelegate>

@optional
- (void)stepTriggerHandlerDidInsertText:(id<WMStepTriggerInputHandlerInterface>)handler;

@end

@protocol WMStepTriggerInputHandlerInterface <WMStepTriggerHandlerDelegate>

@required
@property (nonatomic,weak) id<WMStepTriggerInputHandlerDelegate> delegate;

- (instancetype)initWithElement:(id<WMFEResultInterface>)element
                       delegate:(id<WMStepTriggerInputHandlerDelegate>)delegate;

@end

// Custom handler interface & delegate
@protocol WMStepTriggerCustomHandlerInterface;
@protocol WMStepTriggerCustomHandlerDelegate <WMStepTriggerHandlerDelegate>

@optional
- (void)stepTriggerHandlerDidConditionSuccess:(id<WMStepTriggerCustomHandlerInterface>)handler;

@end

@class WMCustomTriggerObject;
@protocol WMStepTriggerCustomHandlerInterface <WMStepTriggerHandlerInterface>

@required
@property (nonatomic,weak) id<WMStepTriggerCustomHandlerDelegate> delegate;

- (instancetype)initWithCustomTrigger:(WMCustomTriggerObject*)trigger
                             delegate:(id<WMStepTriggerCustomHandlerDelegate>)delegate;


@end

NS_ASSUME_NONNULL_END
