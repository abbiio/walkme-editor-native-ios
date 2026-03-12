//
//  WMNodeHandler.h
//  WalkMeSDK
//
//  Created by Yair Barak on 24/02/2019.
//  Copyright © 2019 WalkMe. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class WMFlowObject, WMFlowNodeObject, WMViewActionObject, WMFEResult;

@protocol WMNodeHandlerDelegate <NSObject>
- (void)playNextStep:(nullable NSNumber *)nodeId;
- (void)playPreviousStep;
- (void)stepCancelled;
@end

@protocol WMUIBasedNodeHandlerDelegate <WMNodeHandlerDelegate>

- (void)didDisplayNode:(WMFlowNodeObject *)node forElement:(nullable WMFEResult *)elementResult;
- (void)didFinishNode:(WMFlowNodeObject *)node withAction:(nullable WMViewActionObject *)action;

@end

@protocol WMConnectToFlowHandlerDelegate <WMNodeHandlerDelegate>

- (void)connectFlowId:(NSNumber *)flowId fromNode:(NSNumber *)nodeId nextNodeId:(NSNumber *)nextNodeId orgnNodeId: (NSNumber *)orgnNodeId;
- (void)connectShoutOutId:(NSNumber *)shoutOutId orgnNodeId:(NSNumber *)orgnNodeId;

@end


@protocol WMNodeHandlerDataSource <NSObject>
- (WMFlowObject* _Nullable)flowInfo;
- (NSString* _Nullable)flowPlayID;
@end

// Protocol definitions for all type of handlers in order to access them externaly
@protocol WMNodeHandler <NSObject>

- (instancetype)initWithNode:(WMFlowNodeObject*)node;
- (void)performAction;

@optional
- (void)cancelAction;

@end

@protocol WMConnectToFlowNodeHandler <WMNodeHandler>
@end

@protocol WMDelayNodeHandler <WMNodeHandler>
@end

@protocol WMFindElementNodeHandler <WMNodeHandler>
@end

@protocol WMPopupNodeHandler <WMNodeHandler>
@end

@protocol WMSetDataNodeHandler <WMNodeHandler>
@end

@protocol WMSplitNodeHandler <WMNodeHandler>
@end

@protocol WMWaitForNodeHandler <WMNodeHandler>
@end

@protocol WMAutoStepNodeHandler <WMNodeHandler>
@end

@interface WMNodeHandler : NSObject <WMNodeHandler>


@property (nonatomic,strong) __kindof WMFlowNodeObject *node;

@property (nonatomic,weak) id<WMNodeHandlerDelegate> delegate;
@property (nonatomic,weak) id<WMNodeHandlerDataSource> dataSource;

- (instancetype)initWithNode:(WMFlowNodeObject*)node;
+ (__kindof WMNodeHandler*)createHandlerForNode:(__kindof WMFlowNodeObject*)node;

@end

NS_ASSUME_NONNULL_END
