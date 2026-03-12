//
//  WMEventStringManager.h
//  WalkMe
//
//  Created by Vova Sarkisyan on 21/03/2019.
//  Copyright © 2019 WalkMe. All rights reserved.
//

#import "WMUserData.h"
#import "WMEventTypes.h"

NS_ASSUME_NONNULL_BEGIN

@interface WMEventStringManager : NSObject

+ (NSString *)eventStringForEnum:(WMEventType)eventType;
+ (NSString *)appStringForEnum:(WMEventAppType)appType;
+ (NSString *)pInitiatorStringForEnum:(WMPlayInitiatorType)pInitiator;
+ (NSString *)userSourceStringForEnum:(WMUserSourceType)userSourceType;

@end

NS_ASSUME_NONNULL_END
