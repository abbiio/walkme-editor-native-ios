//
//  WMTag.h
//  WalkMeSDK
//
//  Created by Vova Sarkisyan on 07/07/2019.
//  Copyright © 2019 WalkMe. All rights reserved.
//

#import "WMBasicPromotionObject.h"

@class WMTagLinkedDeployable, WMTagSettings;

NS_ASSUME_NONNULL_BEGIN

@interface WMTag : WMObject <WMWebMenuContentItemData>

@property (nonatomic, strong, readonly, nullable) NSNumber *Id;
@property (nonatomic, strong, readonly) NSString *name;
@property (nonatomic, strong, readonly) WMTagSettings *settings;
@property (nonatomic, strong, readonly) NSArray<WMTagLinkedDeployable *> *deployables;
@property (nonatomic, strong, readonly) NSNumber *orderNdx;

@end

@interface WMTag (WMCondtion)

@property (nonatomic, readonly) BOOL haveCondition;
@property (nonatomic, readonly, nullable) NSNumber *conditionId;

@end


NS_ASSUME_NONNULL_END
