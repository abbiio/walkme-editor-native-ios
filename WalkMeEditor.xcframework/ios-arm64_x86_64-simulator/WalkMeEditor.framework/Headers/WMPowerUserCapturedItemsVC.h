//
//  WMPowerUserCapturedItemsVC.h
//  WalkMeSDK
//
//  Created by Amit Shacham on 06/05/2018.
//  Copyright © 2018 WalkMe Ltd. All rights reserved.
//

#import "WMPowerUserListVC.h"

@class WMCapturedItemObject, WMPowerUserCapturedItemsVC, WMCapturedElementObject;

@protocol WMPowerUserCapturedItemsVCDelegate <NSObject>

@optional
- (void)wmPowerUserCapturedItemsVC:(WMPowerUserCapturedItemsVC *)wmPowerUserCapturedItemsVC didSelectShowElement:(WMCapturedElementObject *)element;
- (void)wmPowerUserCapturedItemsVCDidCancel:(WMPowerUserCapturedItemsVC *)wmPowerUserCapturedItemsVC;

@end

@interface WMPowerUserCapturedItemsVC : WMPowerUserListVC

@property (nonatomic, readonly, weak) id<WMPowerUserCapturedItemsVCDelegate> delegate;

- (instancetype)initWithDelegate:(id<WMPowerUserCapturedItemsVCDelegate>)delegate andCapturePermission:(BOOL)shouldAllowRecapture;
- (void)setElements:(NSArray<WMCapturedElementObject *> *)elements;

@end
