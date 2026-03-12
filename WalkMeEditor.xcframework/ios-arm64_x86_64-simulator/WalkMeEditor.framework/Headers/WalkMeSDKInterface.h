//
//  WalkMeSDKPrivate.h
//  WalkMeSDK
//
//  Created by Haim Ben Chimol on 18/02/2019.
//  Copyright © 2019 WalkMe. All rights reserved.
//

#ifndef WalkMeSDKInterface_h
#define WalkMeSDKInterface_h

#import "WalkMeStartOptions.h"
#import "WalkMeCallbackTypes.h"

NS_ASSUME_NONNULL_BEGIN

// WalkMe protocol defines the public API
@protocol WalkMeSDK;
@protocol WalkMe <NSObject>

@required
@property (class,nonatomic,strong,nullable) NSObject<WalkMeSDK>* concreteSDK;

+ (void)start:(NSString *)settingsURL options:(nullable WalkMeStartOptions *)options;
+ (void)restart:(nullable WalkMeStartOptions *)options;
+ (void)stop;
+ (BOOL)isRunning;
+ (BOOL)isActive:(NSError**)error;
    
+ (void)changeLanguage:(NSString *)language;

+ (void)setWalkMeData:(NSString *)data forKey:(NSString *)key duration:(NSNumber *)duration;
+ (void)setUserId:(NSString *)userId;

+ (void)setAnalyticsMode:(WMAnalyticMode)mode;
+ (void)setLoggingMode:(WMLoggingMode)mode;
+ (void)setLoggingPath:(NSString*)path;
+ (void)setStorageMode:(WMStorageMode)storageMode;

+ (void)setHttpHeader:(NSString*)value forKey:(NSString*)key;
+ (void)setProxy:(NSString*)url;

+ (void)setRawHttpRequestCallback:(WMHTTPRequestCallback)requestCallback;
+ (void)invokeRawHttpRequest: (NSURLRequest*)request;
@end

// WalkMeSDK protocol defines the internal API for the concrete SDK
@protocol WalkMeSDK <NSObject>

@required
- (void)start:(NSString*)settingsURL options:(nullable WalkMeStartOptions*)options;
- (void)restart:(nullable WalkMeStartOptions*)options;
- (void)stop;
- (BOOL)isRunning;
- (BOOL)isActive:(NSError**)error;

- (void)changeLanguage:(NSString*)language;
- (void)setWalkMeData:(NSString*)data forKey:(NSString*)key duration:(NSNumber*)duration;
- (void)setEndUserId:(NSString*)userId;

- (void)setAnalyticsMode:(WMAnalyticMode)mode;
- (void)setLoggingMode:(WMLoggingMode)mode;
- (void)setLoggingPath:(NSString*)path;
- (void)setStorageMode:(WMStorageMode)storageMode;

- (BOOL)isEditingState;

- (void)setHttpHeader:(NSString*)value forKey:(NSString*)key;
- (void)setProxy:(NSString*)url;

- (void)setRawHttpRequestCallback:(WMHTTPRequestCallback)requestCallback;
- (void)invokeRawHttpRequest: (NSURLRequest*)request;
@end


@protocol WalkMeiOSSDK <WalkMeSDK>

- (void)startWithGUID:(NSString*)guid options:(nullable WalkMeStartOptions *)options;
- (void)stop;

- (void)setUserAttributeWithKey:(NSString *)key andValue:(id)value;
- (void)setUserAttributes:(NSDictionary<NSString*,id> *)attributes;
- (void)setPrivateUserAttributeWithKey:(NSString *)key andValue:(id)value;
- (void)setPrivateUserAttributes:(NSDictionary<NSString*,id> *)attributes;
- (void)clearPrivateUserAttributes;


@end

NS_ASSUME_NONNULL_END

#endif /* WalkMeSDKInterface_h */
