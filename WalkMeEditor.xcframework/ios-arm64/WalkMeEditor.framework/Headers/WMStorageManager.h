//
//  WMStorageManager.h
//  WalkMeSDK
//
//  Created by Yair Barak on 21/02/2019.
//  Copyright © 2019 WalkMe. All rights reserved.
//

#import "WalkMeStartOptions.h"

NS_ASSUME_NONNULL_BEGIN

extern NSString * const WM_DEFAULT_ID_KEY;
extern double const WM_STORAGE_MAX_DURATION;

@class WMUserStorageData, WMLocalStorageHandler, WMCachedResources, WMPromotionDataStorageItem, WMUserAttributes;

@protocol WMStorageManagerProtocol <NSObject>

// WalkMe Promotions data
- (void)savePromotionData:(WMPromotionDataStorageItem*)data forID:(NSNumber*)promoId update:(BOOL)update;
- (nullable WMPromotionDataStorageItem*)promotionDataForID:(NSNumber*)promoId;

@end

@interface WMStorageManager : NSObject <WMStorageManagerProtocol>

@property (nonatomic, readonly) WMCachedResources *resources;
@property (nonatomic, strong, readonly) WMUserStorageData* remoteUserStorageData;
@property (nonatomic, strong, readonly) WMUserStorageData* localCurrentUserStorageData;
@property (nonatomic, strong, readonly) WMLocalStorageHandler* localStorageHandler;
@property (nonatomic, strong, readonly) NSArray<NSString*>* localUserIds;
@property (nonatomic, strong, readonly) WMUserAttributes *userAttributes;

+ (WMStorageManager*)shared;
+ (NSURL*)walkmeStoragePath;
+ (NSString*)storageModeStringForEnum:(WMStorageMode)storageMode;

// WalkeMe Data setter / getter (works on current user data storage)
- (NSString*)walkmeDataForKey:(NSString*)key;
- (void)saveWalkmeData:(NSString* _Nullable)data forKey:(NSString*)key duration:(double)duration;
- (void)removeWalkmeDataForKey:(NSString*)key;

// global data locally (not for specific end user)
- (void)saveGlobalData:(NSObject* _Nullable)data forKey:(NSString*)key;
- (NSObject* _Nullable)globalDataForKey:(NSString*)key;

// User attributes
- (void)saveUserAttribute:(id)value forKey:(NSString *)key;
- (nullable id)userAttributeForKey:(NSString *)key;
- (void)removeUserAttributeForKey:(NSString *)key;
- (void)saveUserAttributesFromDictionary:(NSDictionary *)attributes;
- (void)clearUserAttributes;
- (NSDictionary *)allUserAttributes;

// WalkMe Incoming Integration Conditions
- (void)setIIConditions:(NSDictionary*)iiConditions;
- (NSDictionary*)IIConditions;
- (void)clearIIConditions;

// on boarding tasks
- (void)addTask: (NSNumber*)taskId deployableId: (NSNumber*)deployableId;
- (BOOL)isTaskDone: (NSNumber*)taskId;

- (void)clearUserDefaults;
- (void)clearDefaultsForUserId:(NSString *)endUserId;
- (void)loadLocalCurrentUserData;
- (void)loadRemoteUserData;
- (void)loadRemoteUserDataWithCompletionHandler:(nullable void(^)(NSError* _Nullable error))completionHandler;
- (NSDictionary *)loadIdpInfoData;

- (NSData*)promotionDataForURL: (NSString*)url;
- (NSData*)lastPromotionData;
- (void)savePromotionData:(NSData*)data forURL:(NSString*)url;
- (NSData*)settingFileCachedData;
- (void)saveSettingsData:(NSData*)data;
- (NSArray*)cachedEvents;
- (void)saveEvents:(NSArray*)events;
- (void)saveIdpInfo:(NSDictionary *)data;
- (NSData *)loadDataFromPathWithLastComponent:(NSString *)lastPathComponent;
- (void)saveData:(NSData *)data toPathWithLastComponent:(NSString *)lastPathComponent;

@end

NS_ASSUME_NONNULL_END
