//
//  WMPMReadyStateContext.h
//  WalkMeSDK
//
//  Created by Haim Benchimol on 14/01/2018.
//  Copyright © WalkMe Ltd. All rights reserved.
//

#import "WMPMStateContext.h"
#import "WMPowerUserRole.h"

@class WMPMWindowController;
@class WMPMMenuCoordinator;
@protocol WMNetworkMonitoring;

@interface WMPMStateContext : NSObject
@end

@interface WMPMActiveStateContext : WMPMStateContext

@property (nonatomic,strong) NSString *powerUserToken;
@property (nonatomic,strong) NSNumber *appID;
@property (nonatomic,strong) NSNumber *accountID;
@property (nonatomic,strong) NSString *powerUserCaptureURL;
@property (nonatomic,strong) NSString *powerUserEditWTURL;
@property (nonatomic,strong) NSString *powerUserIntegrationURL;
@property (nonatomic,strong) WMPowerUserRole *powerUserRole;


@property (nonatomic,strong) WMPMWindowController *pmWindowController;
@property (nonatomic,strong) WMPMMenuCoordinator *menuCoordinator;
@property (nonatomic,strong) id<WMNetworkMonitoring> networkMonitor;

@end
