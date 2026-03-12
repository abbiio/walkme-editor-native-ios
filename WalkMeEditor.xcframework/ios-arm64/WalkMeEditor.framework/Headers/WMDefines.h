//
//  WMDefines.h
//  WalkMeSDK
//
//  Created by Yair Barak on 16/04/2019.
//  Copyright © 2019 WalkMe. All rights reserved.
//

#import <Foundation/Foundation.h>

#ifndef WMDefines_h
#define WMDefines_h

#define WM_RESOURCES_KEY @"WM_RESOURCES"

#define FlutterViewClass NSClassFromString(@"FlutterView")
#define FlutterSemanticsScrollView NSClassFromString(@"FlutterSemanticsScrollView")

extern NSString * const OPEN_MENU_NOTIFICATION;
extern NSString * const CLOSE_MENU_NOTIFICATION;
extern NSString * const TOGGLE_MENU_NOTIFICATION;
extern NSString * const MENU_DID_OPEN_NOTIFICATION;
extern NSString * const MENU_DID_CLOSE_NOTIFICATION;
extern NSString * const WIDGET_VISIBILITY_NOTIFICATION;

extern NSString * const DARK_MODE_COLOR;

// widget theme
// ------------
extern NSString * const WIDGET_THEME_NOTIFICATION;
// normal
extern NSString * const ICON_OUTER_BACKGROUND_COLOR;
extern NSString * const ICON_INNER_BACKGROUND_COLOR;
extern NSString * const ICON_COLOR;
extern NSString * const ICON_BORDER_COLOR;
// hover - closed widget
extern NSString * const ICON_HOVER_OUTER_BACKGROUND_COLOR;
extern NSString * const ICON_HOVER_INNER_BACKGROUND_COLOR;
extern NSString * const ICON_HOVER_COLOR;
extern NSString * const ICON_HOVER_BORDER_COLOR;
// opened widget
extern NSString * const ICON_CLICKED_OUTER_BACKGROUND_COLOR;
extern NSString * const ICON_CLICKED_INNER_BACKGROUND_COLOR;
extern NSString * const ICON_CLICKED_COLOR;
extern NSString * const ICON_CLICKED_BORDER_COLOR;
// menu
extern NSString * const WIDGET_BACKGROUND_COLOR;
extern NSString * const MAIN_TITLE_COLOR;
extern NSString * const SECOND_TITLE_COLOR;
extern NSString * const CLOSE_ICON_COLOR;
extern NSString * const ARROW_ICON_COLOR;
extern NSString * const SEPARATOR_LINE_COLOR;
extern NSString * const TASK_ICON_BACKGROUND_COLOR;
extern NSString * const TASK_ICON_COLOR;
extern NSString * const TASK_ICON_COMPLETED_BACKGROUND_COLOR;
extern NSString * const TASK_ICON_COMPLETED_COLOR;
extern NSString * const TASK_TEXT_COLOR;
extern NSString * const TASK_COMPLETED_TEXT_COLOR;
extern NSString * const TASK_HIGHLIGHT_TEXT_COLOR;
// size
extern NSString * const WIDGET_WIDTH;
extern NSString * const WIDGET_HEIGHT;


// old SDK LifeCycle Notifications

// Notifications
extern NSString * const WMWebViewBridgeLoadedNotification;
extern NSString * const WMWebViewBridgeWillDealloc;
extern NSString * const WMWebViewDidChangeElementsVisibility;
extern NSString * const WMPromotionManagerAllPromotionsLoaded;
extern NSString * const WMPromotionControllerViewWillLayoutSubviews;
extern NSString * const WMDidChangeDeviceOrientationNotification;
extern NSString * const WMGoalEventSent;
extern NSString * const WMDidChangeScreen;
extern NSString * const WMVCViewDidAppear;
extern NSString * const WMVCViewDidDisappear;
extern NSString * const WMVCViewWillDisappear;
extern NSString * const WMPowerModeTokenExpired;
extern NSString * const WMWillStartNewSession;
extern NSString * const WMSDKDidBecomeDeactivated;
extern NSString * const WMSDKWillEnterFG;
extern NSString * const WMSDKWillTerminate;
extern NSString * const WMSDKDidEnterBG;
extern NSString * const WMSDKDidBecomeActive;
extern NSString * const WMSDKDidBecomeEnabled;
extern NSString * const WMSDKDidEnterPowerMode;


extern NSString * const WMViewDidAddSubView;

// KEYS CODE
#define WM_KEY_CODE_TAB 48
#define WM_KEY_CODE_ESC 53
#define WM_KEY_CODE_F1 122

#endif
