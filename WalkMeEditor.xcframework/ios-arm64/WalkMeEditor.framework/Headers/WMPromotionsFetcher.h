//
//  WMPromotionsFetcher.h
//  WalkMeSDKCommonPlayer
//
//  Created by Vova Sarkisyan on 20/05/2021.
//  Copyright © 2021 WalkMe. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class WMPromotionsFetcher;

@protocol WMPromotionsFetcherDelegate <NSObject>

@required
- (void)promotionsFetcher:(WMPromotionsFetcher*)fetcher didFetchWalkmeConfigJSON:(nullable NSDictionary*)configJSON isUpdated:(BOOL)isUpdated fromUrl:(NSString*)configURL settingsJSON:(NSDictionary*)settingsJSON;
- (void)promotionsFetcher:(WMPromotionsFetcher*)fetcher didFetchDataFile:(NSDictionary*)dataFile isUpdated:(BOOL)isUpdated fromUrl:(NSString*)dataFileURL settingsJSON:(NSDictionary*)settingsJSON;

@optional
- (void)promotionsFetcher:(WMPromotionsFetcher*)fetcher didFetchSettingsJSON:(NSDictionary*)settingsJSON fromSettingUrl:(NSString*)settingsURL;
- (void)promotionsFetcher:(WMPromotionsFetcher*)fetcher didFailFetchDataFileFromUrl:(NSString*)dataFileURL;
- (void)promotionsFetcher:(WMPromotionsFetcher*)fetcher didFailFetchConfigFileFromUrl:(nullable NSString*)dataFileURL;
- (void)promotionsFetcher:(WMPromotionsFetcher*)fetcher didFailFetchSettingsFileFromUrl:(nullable NSString*)dataFileURL;
- (void)promotionsFetcher:(WMPromotionsFetcher*)fetcher didRecieveInvalidTokenFromUrl:(nullable NSString*)dataFileURL;

@end

@interface WMPromotionsFetcher : NSObject

- (instancetype)initWith:(id<WMPromotionsFetcherDelegate>)delegate;
- (void)fetchWalkmeConfigFrom:(NSString*)settingsURL;
- (void)fetchWalkmeConfigFrom:(NSString*)settingsURL repeatOnFailure:(BOOL)repeat;
- (void)fetchDataFileFrom:(NSDictionary*)settingsJSON;
- (void)fetchAuthDataFileFrom:(NSDictionary*)settingsJSON withToken:(nonnull NSString*)accessToken;

@end

NS_ASSUME_NONNULL_END
