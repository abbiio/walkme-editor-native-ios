//
//  WMPMUIVisitorInterface.h
//  WalkMeSDK
//
//  Created by Haim Benchimol on 10/01/2018.
//  Copyright © WalkMe Ltd. All rights reserved.
//

#ifndef WMPMUIVisitorInterface_h
#define WMPMUIVisitorInterface_h

#import <Foundation/Foundation.h>

@class WMPMStatusBarViewController, WMPMWidgetView, WMPMCaptureController, WMPMWindow, WMPMMinimizedPanelHostView;

@protocol WMPMUIVisitorInterface <NSObject>

@required
- (void)visitWidget:(WMPMWidgetView *)widgetView;
- (void)visitStatusBar:(WMPMStatusBarViewController *)statusBarVC;
- (void)visitCaptureController:(WMPMCaptureController *)captureController;
- (void)visitPmWindow:(WMPMWindow *)pmWindow;

- (void)visitMinimizedPanel:(WMPMMinimizedPanelHostView *)minimizedPanel;

@end

#endif /* WMPMUIVisitorInterface_h */
