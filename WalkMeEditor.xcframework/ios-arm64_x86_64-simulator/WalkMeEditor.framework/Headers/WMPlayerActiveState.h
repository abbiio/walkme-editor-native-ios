//
//  WMPlayerActiveState.h
//  WalkMeSDK
//
//  Created by Haim Ben Chimol on 19/02/2019.
//  Copyright © 2019 WalkMe. All rights reserved.
//

#import "WMStateBase.h"

NS_ASSUME_NONNULL_BEGIN

@protocol WMPlayerActiveState <NSObject>

- (instancetype)initWithSettingsURL:(NSString*)settingsURL;

@end

@protocol WMPromotionManager;

@interface WMPlayerActiveState : WMStateBase <WMPlayerActiveState>

@property (nonatomic,readonly) NSString *settingsURL;
@property (nonatomic,readonly) BOOL isReady;
@property (nonatomic,readonly, nullable) NSError* isReadyError;

@end

NS_ASSUME_NONNULL_END
