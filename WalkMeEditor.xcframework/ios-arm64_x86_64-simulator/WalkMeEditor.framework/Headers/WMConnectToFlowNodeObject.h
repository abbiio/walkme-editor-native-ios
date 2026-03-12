//
//  WMConnectToFlowNodeObject.h
//  WalkMeSDK
//
//  Created by Yair Barak on 04/03/2019.
//  Copyright © 2019 WalkMe. All rights reserved.
//

#import "WMActionFlowNodeObject.h"

NS_ASSUME_NONNULL_BEGIN

@protocol WMConnectToFlowNodeObject <WMActionFlowNodeObject>
@end

@interface WMConnectToFlowNodeObject : WMActionFlowNodeObject <WMConnectToFlowNodeObject>

@property (nonatomic, strong, readonly) NSNumber *connectedDeployableId;
@property (nonatomic, strong, readonly) NSNumber *startingNodeId;
@property (nonatomic, strong, readonly) NSString *connectedType;

@end

NS_ASSUME_NONNULL_END
