//
//  WMUserDefaultsMgr.h
//  WalkMeSDK
//
//  Created by Amit Shacham on 22/08/2017.
//  Copyright © 2017 WalkMe Ltd. All rights reserved.
//

#import "WMUDObjects.h"

#warning guy Remove!!!
extern NSString *STATS_URL;
extern NSString *RT_URL;
extern NSString *DT_URL;
extern NSString *PM_URL;
extern NSString *ASSETS_URL;
extern NSString *PM_ASSETS_URL;



extern NSString* const USER_DEFAULTS_KEY_WM_RESOURCES;
extern NSString* const USER_DEFAULTS_KEY_FIRST_SESSION;
extern NSString* const USER_DEFAULTS_KEY_USER_ATTRIBUTES;
extern NSString* const USER_DEFAULTS_KEY_LOC;
extern NSString* const USER_DEFAULTS_KEY_DAY;
extern NSString* const USER_DEFAULTS_KEY_PU_MODE_CRED;
extern NSString* const USER_DEFAULTS_KEY_PU_MODE_SIMULATE_CAMPAIGNS;
extern NSString* const USER_DEFAULTS_KEY_PU_MODE_SIMULATE_RULE_BASED_GOALS;
extern NSString* const USER_DEFAULTS_KEY_PU_MODE_SIMULATE_GOALS_IDS;
extern NSString* const USER_DEFAULTS_KEY_PU_MODE_SIMULATE_DEVICE_ID;
extern NSString* const USER_DEFAULTS_KEY_PU_MODE_LOGIN_TIMESTAMP;
extern NSString* const USER_DEFAULTS_KEY_PLAYGROUND_KEY;
extern NSString* const USER_DEFAULTS_KEY_PLAYGROUND_SECRET;
extern NSString* const USER_DEFAULTS_KEY_PLAYGROUND_ENV;
extern NSString* const USER_DEFAULTS_KEY_USER_CREATION_TIMESTAMP;
extern NSString* const USER_DEFAULTS_KEY_INSTALLATION_ID;
extern NSString* const USER_DEFAULTS_KEY_GOAL_DATA_PREFIX;
extern NSString* const USER_DEFAULTS_KEY_OB_LIST_COMPLETED_GOAL_PREFIX;
extern NSString* const USER_DEFAULTS_KEY_DEBUG_MODE_FLAG;
extern NSString* const USER_DEFAULTS_KEY_SESSION_COUNT;

@interface WMUserDefaultsMgr : NSObject

+ (WMUserDefaultsMgr *)shared;

- (id)getForKey:(NSString *)key validateType:(Class)type;
- (id)getForKey:(NSString *)key;
- (void)setObject:(id)object forKey:(NSString *)key;
- (void)removeObjectForKey:(NSString *)key;
- (void)resetPromotionsFootprints;
- (void)setUserId:(NSString *)userId;
- (NSString *)getAppUserId;

- (id)getFromMainStorageForKey:(NSString *)key;
- (void)setToMainStorage:(id)object forKey:(NSString *)key;
- (void)removeFromMainStorageForKey:(NSString *)key;
- (void)removeNewUserSimulationStorage;
- (void)cacheUserStorageWithForceSync:(BOOL)forceSync;
- (void)resetStorage;
- (void)createStorage;

@end
