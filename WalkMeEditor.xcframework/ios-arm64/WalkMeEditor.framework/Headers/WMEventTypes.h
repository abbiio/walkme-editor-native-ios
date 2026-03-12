//
//  WMEventTypes.h
//  WalkMe
//
//  Created by Guy Sharony on 11/02/2026.
//  Copyright © WalkMe. All rights reserved.
//

#ifndef WMEventTypes_h
#define WMEventTypes_h

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, WMEventType) {
    WMEventTypeNA = -1,
    WMEventTypePlay = 0,
    WMEventTypeOpen = 1,
    WMEventTypeSearch = 2,
    WMEventTypeClick = 3,
    WMEventTypeComplete = 4,
    WMEventTypeClose = 5,
    WMEventTypeLoaded = 6,
    WMEventTypeVisible = 7,
    WMEventTypeContentRefresh = 8,
    WMEventTypeChangeLanguage = 9,
    WMEventTypeGoalReach = 10,
    WMEventTypeDesktopLoaded = 11,
    WMEventTypeFocusIn = 12,
    WMEventTypeActivity = 13,
    WMEventTypeFailed = 14,
    WMEventTypeRestarting = 15,
    WMEventTypeDetected = 16,
    WMEventTypeDownloaded = 17,
    WMEventTypeSessionStarted = 18,
    WMEventTypePageChange = 19
};

typedef NS_ENUM(NSInteger, WMEventAppType) {
    WMEventAppTypeNone = -1,
    WMEventAppTypeWT = 0, // old. use WMEventAppTypeBizFlow
    WMEventAppTypeResource=1, // content
    WMEventAppTypeStep=2,
    WMEventAppTypeWidgetSearch=3,
    WMEventAppTypeBizFlow=4, // smart wt
    WMEventAppTypeShuttle=5,
    WMEventAppTypeBizFlowStep=6,
    WMEventAppTypeWalkme=7,
    WMEventAppTypeShoutout=8,
    WMEventAppTypePlayer=9,
    WMEventAppTypeSmarTip=10,
    WMEventAppTypeSmartTipSet=11,
    WMEventAppTypeSmartTipUiComponent=12,
    WMEventAppTypeLauncher=13,
    WMEventAppTypeMenu=14,
    WMEventAppTypeTask=15, // onboarding task
    WMEventAppTypeDesktopApp=16,
    WMEventAppTypeSwUpdate=17,
    WMEventAppTypeUiAction=18
};

typedef NS_ENUM(NSInteger, WMPlayInitiatorType) {
    WMEventPlayInitiatorTypeNA = -1, // on this type, don't sending this param to the server
    WMEventPlayInitiatorTypeNone = 0,
    WMEventPlayInitiatorTypeWidget = 1,
    WMEventPlayInitiatorTypeApi= 2,
    WMEventPlayInitiatorTypeLauncher = 3,
    WMEventPlayInitiatorTypeTask = 4,
    WMEventPlayInitiatorTypeBranching = 5,
    WMEventPlayInitiatorTypeAutostart = 6,
    WMEventPlayInitiatorTypePermalink = 7,
    WMEventPlayInitiatorTypeBbcode = 8,
    WMEventPlayInitiatorTypeChatAgent = 9,
    WMEventPlayInitiatorTypeShoutout = 10,
    WMEventPlayInitiatorTypeWalkthru = 11,
    WMEventPlayInitiatorTypeStep = 12,
    WMEventPlayInitiatorTypeAttentionGrabber = 13,
    WMEventPlayInitiatorTypeFlowStep= 14,
    WMEventPlayInitiatorTypeCourse = 15,
    WMEventPlayInitiatorTypeCustomization = 16,
    WMEventPlayInitiatorTypeRestartSwt = 17,
    WMEventPlayInitiatorTypeKeyboard = 18,
    WMEventPlayInitiatorTypeUnknown = 19,
    WMEventPlayInitiatorTypeNotification = 20
};

// for data.status on WT steps
typedef NS_ENUM(NSUInteger, WMEventWtStepStatus) {
    WMEventWtStepStatusToShow = 0, // Supposed To Show
    WMEventWtStepStatusShown = 1,
    WMEventWtStepStatusPerformed = 2, // action called (click, input text, ...)
    WMEventWtStepStatusSkippedNotFound = 3,
    WMEventWtStepStatusSkippedByCondition = 4,
    WMEventWtStepStatusMovedBack = 5, // user click on back on the flow
    WMEventWtStepStatusExited = 6,
    WMEventWtStepStatusFakeFound = 7,
    WMEventWtStepStatusSkippedByTutorialCondition = 8,
    WMEventWtStepStatusSkippedStartedFromBiggerStep = 9,
    WMEventWtStepStatusNonValidActionStep = 10,
    WMEventWtStepStatusSkippedByActionStep = 11,
    WMEventWtStepStatusFinish = 12
};


// for data.oType on WT steps
typedef NS_ENUM(NSUInteger, WMEventWtStepObjType) {
    WMEventWtStepObjTypeNormal = 0, // tooltip element
    WMEventWtStepObjTypePopup = 1, //
    WMEventWtStepObjTypeAction = 2 // with action. e.g: SetData, Split, Delay, WaitForCondition, ConnectToBizflow
};


// for data.oType on WT steps
typedef NS_ENUM(NSUInteger, WMEventWtStepActionType) {
    WMEventWtStepActionTypeRedirect = 0,
    WMEventWtStepActionTypeWaitForCondition = 2, //
    WMEventWtStepActionTypeConnectToBizFlow = 3,
    WMEventWtStepActionTypeConnectDelay= 5,
    WMEventWtStepActionTypeConnectRefresh = 6,
    WMEventWtStepActionTypeConnectOpen = 7,
    WMEventWtStepActionTypeSetWalkmeData = 8,
    WMEventWtStepActionTypePassOwnership = 9,
    WMEventWtStepActionTypeErrorHandling = 10,
    WMEventWtStepActionTypeSplit = 11,
};

// for data.reason on shoutout close
typedef NS_ENUM(NSUInteger, WMEventCloseReason) {
    WMEventCloseReasonNA = 0,
    WMEventCloseReasonClickedClose = 1,
    WMEventCloseReasonClickedXBttn = 2,
    WMEventCloseReasonRemindMeLater = 3 // currently used both for RemindMeNextDay and RemindMeNextTime
};

typedef NS_ENUM(NSInteger, WMEventWithAction) {
    WMEventWithActionNA = -1,
    WMEventWithActionFalse = 0,
    WMEventWithActionTrue = 1
};

#endif /* WMEventTypes_h */
