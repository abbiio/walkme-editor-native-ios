//
//  WMTriggerObject.h
//  WalkMeSDK
//
//  Created by Yair Barak on 17/03/2019.
//  Copyright © 2019 WalkMe. All rights reserved.
//

#import "WMObject.h"

NS_ASSUME_NONNULL_BEGIN

typedef enum : NSInteger
{
    Next = 1,
    Click = 2,
    Text = 5,
    Custom /* Special number ?*/
} WMStepTrigger;

@interface WMTriggerObject : WMObject

@property (nonatomic, assign) WMStepTrigger triggerType;
@property (nonatomic, strong, readonly) NSNumber *nextNodeId;
@property (nonatomic, strong, readonly) NSDictionary *settings;

@end

NS_ASSUME_NONNULL_END
