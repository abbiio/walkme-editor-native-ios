//
//  WMActionFlowNodeObject.h
//  WalkMeSDK
//
//  Created by Yair Barak on 21/02/2019.
//  Copyright © 2019 WalkMe. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WMFlowNodeObject.h"

NS_ASSUME_NONNULL_BEGIN

@class WMActionFlowNodeLinkObject;

@protocol WMActionFlowNodeObject <WMFlowNodeObject>
@end

@interface WMActionFlowNodeObject : WMFlowNodeObject <WMActionFlowNodeObject>

@property (nonatomic, strong, readonly) NSString *actionType;
@property (nonatomic, strong, readonly) NSDictionary *conditionTrees;
@property (nonatomic, strong, readonly) NSArray<WMActionFlowNodeLinkObject *> *links;

@end

NS_ASSUME_NONNULL_END
