//
//  WMConditionBlock.h
//  WalkMeSDK
//
//  Created by Vova Sarkisyan on 16/07/2019.
//  Copyright © 2019 WalkMe. All rights reserved.
//

#import "WMObject.h"

NS_ASSUME_NONNULL_BEGIN

@class WMConditionTree;

@interface WMConditionBlock : WMObject

@property (nonatomic,strong, readonly) NSNumber* Id;
@property (nonatomic,strong, readonly) NSString* name;
@property (nonatomic,strong, readonly) WMConditionTree *conditionTree;

@end

NS_ASSUME_NONNULL_END
