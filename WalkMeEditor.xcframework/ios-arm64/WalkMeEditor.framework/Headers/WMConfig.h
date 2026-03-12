//
//  WMConfig.h
//  WalkMeSDK
//
//  Created by Yair Barak on 17/04/2019.
//  Copyright © 2019 WalkMe. All rights reserved.
//

#import "WalkMeStartOptions.h"
#import "WMSDKOptions.h"

NS_ASSUME_NONNULL_BEGIN

@class WMEnvironmentSettings, WMUserData;

@protocol WMConfig <NSObject>
@end

@interface WMConfig : NSObject <WMConfig>

+ (__kindof WMConfig*)shared;

@property (nonatomic,strong) NSString* userGUID;
@property (nonatomic,strong) NSString* eventsURL;
@property (nonatomic,strong) NSString* storageURL;
@property (nonatomic,strong) NSArray* languages;
@property (nonatomic,strong) NSString *wmCurrentLanguageShortName; // empty string if there are no languages
@property (nonatomic,strong) NSString* settingsURL;
@property (nonatomic,strong) NSString* locale;
@property (nonatomic,strong) NSString* apiServerURL;
@property (nonatomic,strong) NSDictionary *settingsData; // Settings file as received from server
@property (nonatomic,strong) NSDictionary *customJSONSettingsData; // Custom JSON settings
@property (nonatomic,strong) NSDictionary *siteConfigData; // Site config data
@property (nonatomic,strong) NSString *dataCenter;

@property (nonatomic,assign) NSInteger env; // 0 is prod, 3 is test.
@property (nonatomic,strong) NSString *environment;

@property (nonatomic,readonly) NSString *endUserFetchSettings;

@property (nonatomic,assign) BOOL killSwitched; // When was switched to off from remote
@property (nonatomic,assign) BOOL isActive; // true - when start is called. false - before start called or after stop
@property (nonatomic,assign) BOOL supportOfflineMode;
@property (nonatomic,assign) BOOL supportExceptionHandler;

@property (nonatomic, strong, readonly) WMUserData *userData;
@property (nonatomic,readonly) WalkMeStartOptions* options; // global options, that are used in each SDK start and restart

@property (nonatomic,readonly) NSString *loggingPath;
@property (nonatomic,assign) WMLoggingMode loggingMode;
@property (nonatomic,assign) WMAnalyticMode analyticMode;
@property (nonatomic,assign) WMStorageMode storageMode;

@property (nonatomic, strong, readonly) NSString *appType;
@property (nonatomic, assign, readonly) NSInteger appCapping;
@property (nonatomic, assign, readonly) BOOL offlineModeEnabled;
@property (nonatomic, assign, readonly) NSInteger offlineModeNumberOfDays;
@property (nonatomic, assign, readonly) NSInteger sessionTimeout;

@property (nonatomic,strong, nullable) NSString *selfHostingPath;
@property (nonatomic,readonly) BOOL isSelfHosting;

@property (nonatomic,readonly) NSString* platform;
@property (nonatomic,strong) WMEnvironmentSettings* environmentSettings; // used for web menu to change env
@property (nonatomic,assign) BOOL isRemoteTestingMode;

- (void)setOptions:(WalkMeStartOptions*)options;
- (void)setLoggingPath:(NSString*)path;
- (void)clear;
- (void)parseAndSaveConfigSettings:(NSDictionary*)configJSON;

@end

// Conversion utils between WalkMeStartOptions public class and WMSDKOptions inner class
@interface WalkMeStartOptions (WMConfig)

- (WMSDKOptions*)toSDKOptions;

@end

@interface WMSDKOptions (WMConfig)

- (WalkMeStartOptions*)toStartOptions;

@end

NS_ASSUME_NONNULL_END
