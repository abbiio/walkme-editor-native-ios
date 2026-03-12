//
//  WalkMeSDKCommonDefines.h
//  WalkMeSDKCommon
//
//  Created by Haim Ben Chimol on 13/02/2019.
//  Copyright © 2019 WalkMe. All rights reserved.
//

#ifndef WalkMeSDKCommonDefines_h
#define WalkMeSDKCommonDefines_h

#define WM_FLEX_TEXT_VIEW_LAYOUT_TIME 0.01
#define WM_FLEX_VISUAL_DESIGN_LAYOUT_DELAY (WM_FLEX_TEXT_VIEW_LAYOUT_TIME + 0.05) // NOTE: shold be at more than WM_FLEX_TEXT_VIEW_LAYOUT_TIME sec, which is the time for textviews layout

extern CGFloat WMRectIntersectionRatio(CGRect aRect, CGRect bRect);

// ERROR NOTIFICATIONS
extern NSString * const ERROR_NOTIFICATION_PROMOTION_READINESS;

// WM ERROR DOMAIN
extern NSErrorDomain const WMErrorDomain;
extern NSInteger const WM_ERROR_UNSPECIFIED;
extern NSInteger const WM_ERROR_WALKME_TURNED_OFF;
extern NSInteger const WM_ERROR_DATA_FILE_LOADING;
extern NSInteger const WM_ERROR_SETTINGS_LOADING;
extern NSInteger const WM_ERROR_KILL_SWITCH;
extern NSInteger const WM_ERROR_PLAYER_STATE_IS_OFF;
#endif /* WalkMeSDKCommonDefines_h */
