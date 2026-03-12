//
//  WMState.h
//  WalkMe
//
//  Created by Haim Ben Chimol on 2/11/16.
//  Copyright © 2016 WalkMe. All rights reserved.
//

#import "WMStateBase.h"

//#import "WMPowerModeTouchHandler.h"
//
//@class WMPMState,WMGetPromotionsResponseObject;
//
//@protocol WMGetPromotionsDelegate <NSObject>
//
//- (void)wmGetPromotionsForState:(WMPMState*)state completion:(void (^)(WMGetPromotionsResponseObject *getPromotionsResponse))completion;
//
//@end

@interface WMPMState : WMStateBase

- (void)isValidTokenWithCompletion:(void (^)(BOOL success))completion;

@end

