//
//  WMUserData.h
//  WalkMeSDK
//
//  Created by Yair Barak on 11/03/2019.
//  Copyright © 2019 WalkMe. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, WMUserSourceType) {
    WMUserSourceTypeNA = -1,
    WMUserSourceTypeIdentifier = 0,
    WMUserSourceTypeGenerated = 1,
    WMUserSourceTypeCache = 2,
    WMUserSourceTypeDesktopUser = 3,
    WMUserSourceTypeDesktopHash = 4
};

typedef NS_ENUM(NSUInteger, WMPermissionStatus) {
    WMPermissionStatusUnknown,
    WMPermissionStatusGranted,
    WMPermissionStatusDenied
};

typedef NS_ENUM(NSUInteger, WMBiometricStatus) {
    WMBiometricStatusNotSupported,
    WMBiometricStatusEnabled,
    WMBiometricStatusDisabled
};

typedef NS_ENUM(NSUInteger, WMATTrackingAuthorizationStatus) {
    WMATTrackingAuthorizationStatusAuthorized,
    WMATTrackingAuthorizationStatusDenied,
    WMATTrackingAuthorizationStatusNotDetermined,
    WMATTrackingAuthorizationStatusRestricted
};

@interface WMUserData : NSObject

@property (nonatomic, strong) NSString *userId;
@property (nonatomic) WMUserSourceType userIdSource;
@property (nonatomic, strong, nullable) NSString *accessToken;

@property (nonatomic, strong, readonly) NSString *osVersion;
@property (nonatomic, strong, readonly) NSString *appVersion;
@property (nonatomic, strong, readonly) NSString *appName;
@property (nonatomic, strong, readonly) NSString *bundleId;

@property (atomic, strong, readonly) NSString *network;
@property (atomic, strong, readonly) NSString *timezone;
@property (atomic, strong, readonly) NSString *deviceType;
@property (atomic, strong, readonly) NSString *locale;
@property (atomic, strong, readonly) NSString *countryCode;

@property (atomic, assign, readonly) NSInteger neuralEngine;

- (NSString *)checkContactsPermission;
- (NSString *)checkCameraPermission;
- (NSString *)checkLocationPermission;

@end

NS_ASSUME_NONNULL_END
