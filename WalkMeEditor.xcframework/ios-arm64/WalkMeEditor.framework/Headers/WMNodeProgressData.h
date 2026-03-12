//
//  WMNodeProgressData.h
//  WalkMeSDK
//
//  Created by Guy Sharony on 01/01/2026.
//  Copyright © WalkMe Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger, WMWStepClickReason) {
    WMWStepClickReasonDefault,
    WMWStepClickReasonSkipped,
    WMWStepClickReasonGroup,
    WMWStepClickReasonTimeout,
    WMWStepClickReasonAutomatedStep = 5
};

typedef NS_ENUM(NSUInteger, WMWTStepPlayReason) {
    WMWTStepPlayReasonByWT,
    WMWTStepPlayReasonPrevStep,
    WMWTStepPlayReasonByUser,
    WMWTStepPlayReasonSkippedStep,
    WMWTStepPlayReasonStartFromRelevantStep,
    WMWTStepPlayReasonStartFromSpecificStep,
    WMWTStepPlayReasonAutomatedStep
};

@class WMFEResult, WMFlowNodeObject, WMFlowObject;

@interface WMNodeProgressData : NSObject

// Data from FE
@property (nonatomic, strong) NSMutableDictionary<NSString *, WMFEResult *> *stepElements;

// Step properties
@property (nonatomic, assign) WMWTStepPlayReason playReason;
@property (nonatomic, assign) WMWStepClickReason clickReason;
@property (nonatomic, assign) NSUInteger stepUUID;
@property (nonatomic, assign) NSUInteger stepIndex;
@property (nonatomic, assign) NSInteger innerStepIndex;
@property (nonatomic, assign) NSInteger  prevStepIndex;
@property (nonatomic, assign) NSInteger prevInnerStepIndex;
@property (nonatomic, assign) NSUInteger playCount;
@property (nonatomic, assign) BOOL isScrollable;
@property (nonatomic, assign) BOOL isShown;

// Data from model
@property (nonatomic, strong) WMFlowNodeObject *promotion;
@property (nonatomic, strong) WMFlowObject *flow;

@property (nonatomic, strong) NSNumber *nextNodeId;
@property (nonatomic, strong) NSNumber *prevNodeId;

- (instancetype)initWithInnerStepIndex:(NSInteger)innerStepIndex prevInnerStepIndex:(NSInteger)prevInnerStepIndex playCount:(NSInteger)playCount;

@end
