//
//  WMStateMachineBase.h
//  WalkMeLib
//
//  Created by walkme_ps on 10/15/14.
//  Copyright (c) 2014 walkme_ps. All rights reserved.
//

#import <Foundation/Foundation.h>

@class WMStateBase;

@protocol WalkMeSDK;

@interface WMStateMachineBase : NSObject

@property (nonatomic, strong) WMStateBase *currentState;
@property (nonatomic, weak) id<WalkMeSDK> manager;

- (void)switchState:(__kindof WMStateBase *)newState;

@end
