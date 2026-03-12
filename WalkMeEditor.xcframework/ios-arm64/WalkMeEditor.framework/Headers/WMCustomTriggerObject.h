//
//  WMCustomTriggerObject.h
//  WalkMeSDK
//
//  Created by Haim Ben Chimol on 14/05/2019.
//  Copyright © 2019 WalkMe. All rights reserved.
//

#import "WMTriggerObject.h"

@interface WMCustomTriggerObject : WMTriggerObject

@property (nonatomic,strong,readonly) NSDictionary *conditionTree;

@end
