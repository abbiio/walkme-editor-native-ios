//
//  ABUtils.h
//  WalkMeSDK
//
//  Created by Kobi Stok on 01/12/2015.
//  Copyright © 2015 Kobi Stok. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
//#import "WMElementDescription.h"
//#import "WMPromotionObject.h"
//#import "WMPMLoginResponse.h"

#define UIColorFromRGB(rgbValue) \
[UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 \
green:((float)((rgbValue & 0x00FF00) >>  8))/255.0 \
blue:((float)((rgbValue & 0x0000FF) >>  0))/255.0 \
alpha:1.0]

#define FlutterViewClass NSClassFromString(@"FlutterView")
#define FlutterSemanticsScrollView NSClassFromString(@"FlutterSemanticsScrollView")

@class WMPowerUserRole;

@interface ABBUtils : NSObject

+ (int)getRandomNumber:(int)from to:(int)to;

+ (UIWindow *)getTopWindow;
+ (UIViewController *)getTopVC;
+ (UIViewController *)getTopVCFilteredBlackList;
+ (NSSet<UIViewController *> *)getVisibleVCs;
//+ (UIViewController *)findBestViewController:(UIViewController*)vc;

//+ (BOOL)isBottomRect:(CGRect)rect; // Rect in UIWindow coordinate system
//
//+ (NSString*)getIPAddress;
//+ (NSString*)getSSID;
//
//+ (void)doVibrate;
//
+ (NSString *)hexToString:(NSString *)hexString;
+ (NSString *)getClsBlacklist;

//+ (NSNumber*)getCurrentTimestamp;
//+ (BOOL)createDirWithURL:(NSURL*)url;
//+ (NSString*)getAppsFontsString;
//+ (NSTimeInterval) getSessionDuration;
//+ (NSTimeInterval)getAppDuration;
//+ (void)savePowerModeContextWithToken:(NSString*)token andAppId:(NSNumber*)appId andAccountId:(NSNumber*)accountId andCaptureUrl:(NSString*)captureUrl andIntegrationURL:(NSString *)integrationURL andEditWtUrl:(NSString*)editWtUrl andUserRole:(WMPowerUserRole *)role;
//+ (UIFontTextStyle)fontTextStyleForFontSize:(NSNumber*)fontSizeNumber;
//+ (BOOL)isNextStepIndexValid:(NSString*)index forCampaign:(WMPromotionObject*)campaign;
//+ (BOOL)isValidObject:(id)object;
//+ (BOOL)isValidObject:(id)object withKey:(NSString *)key;
//+ (id)copyObject:(id)object;

@end
