//
//  WMTagLinkedDeployable.h
//  WalkMeSDK
//
//  Created by Vova Sarkisyan on 07/07/2019.
//  Copyright © 2019 WalkMe. All rights reserved.
//

#import "WMObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface WMTagLinkedDeployable : WMObject

@property (nonatomic,strong, readonly) NSNumber* deployableID;
@property (nonatomic,strong, readonly) NSNumber* ID;
@property (nonatomic,strong, readonly) NSNumber* publishStatus;

@end

NS_ASSUME_NONNULL_END
