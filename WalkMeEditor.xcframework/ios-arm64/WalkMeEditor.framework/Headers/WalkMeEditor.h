//
//  WalkMeEditor.h
//  WalkMeEditor
//
//  Created by Guy Sharony on 07/06/2022.
//

#import <Foundation/Foundation.h>

//! Project version number for WalkMeEditor.
FOUNDATION_EXPORT double WalkMeEditorVersionNumber;

//! Project version string for WalkMeEditor.
FOUNDATION_EXPORT const unsigned char WalkMeEditorVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <WalkMeEditor/PublicHeader.h>
#import <WalkMeEditor/WalkMeSDKInterface.h>
#import <WalkMeEditor/WMUserDefaultsMgr.h>
#import <WalkMeEditor/WMUDObjects.h>
#import <WalkMeEditor/WMUITracker.h>
#import <WalkMeEditor/WMConfig.h>
#import <WalkMeEditor/ABBUtils.h>
#import <WalkMeEditor/WMHTTPMngr.h>
#import <WalkMeEditor/WMLogger.h>
#import <WalkMeEditor/WMCommonUtils.h>
#import <WalkMeEditor/WMFileEncryptionUtils.h>
#import <WalkMeEditor/WMTouchEventsInspector.h>
#import <WalkMeEditor/WMPromotionsFetcher.h>
#import <WalkMeEditor/WMPMWindowController.h>
#import <WalkMeEditor/WMPowerUserRole.h>
#import <WalkMeEditor/WMViewEventsHandler.h>
#import <WalkMeEditor/WMResources.h>
#import <WalkMeEditor/WMCachedResources.h>
#import <WalkMeEditor/WMLoadingIndicatorViewController.h>
#import <WalkMeEditor/WMPMCaptureAlertController.h>
#import <WalkMeEditor/WMPMCaptureController.h>
#import <WalkMeEditor/WMPMCaptureAlertViewModel.h>
#import <WalkMeEditor/WMPMCaptureViewModel.h>
#import <WalkMeEditor/WMPMWindowViewModel.h>
#import <WalkMeEditor/WMPMUIDefines.h>
#import <WalkMeEditor/WMElementDescription.h>
#import <WalkMeEditor/WMCaptureModeDefines.h>
#import <WalkMeEditor/WMPreciseCaptureSpotlightView.h>
#import <WalkMeEditor/WMSpotlightView.h>
#import <WalkMeEditor/WMBaseAnchorView.h>
#import <WalkMeEditor/WMFEDefines.h>
#import <WalkMeEditor/WalkMeSDKCommonDefines.h>
#import <WalkMeEditor/WMUserData.h>
#import <WalkMeEditor/WMUserAttributes.h>
#import <WalkMeEditor/WMPowerUserListVC.h>
#import <WalkMeEditor/WMPowerUserCapturedItemsVC.h>
#import <WalkMeEditor/WMFEConfiguration.h>
#import <WalkMeEditor/WMFETimerOperation.h>
#import <WalkMeEditor/WMFEBaseOperation.h>
#import <WalkMeEditor/WMFEBlockOperation.h>
#import <WalkMeEditor/WMFEResult.h>
#import <WalkMeEditor/WMPMOptionsController.h>
#import <WalkMeEditor/WMPMWidgetView.h>
#import <WalkMeEditor/WMPMWindow.h>
#import <WalkMeEditor/WMPromotionLoadableInterface.h>
#import <WalkMeEditor/WMPowerUserPromotionsVC.h>
#import <WalkMeEditor/WMConditionTree.h>
#import <WalkMeEditor/WMCommonPlayerModelDefines.h>
#import <WalkMeEditor/WMCapturedItemObject.h>
#import <WalkMeEditor/WMElementObject.h>
#import <WalkMeEditor/WMLanguageObject.h>
#import <WalkMeEditor/WMCapturedElementObject.h>
#import <WalkMeEditor/WMBasicPromotionObject.h>
#import <WalkMeEditor/WMShoutOutObject.h>
#import <WalkMeEditor/WMUIActionHandlerInterface.h>
#import <WalkMeEditor/WMViewActionObject.h>
#import <WalkMeEditor/WMCanvasWidgetView.h>
#import <WalkMeEditor/WMWindow+WMCommonAdditions.h>
#import <WalkMeEditor/WMShapeWidgetObject.h>
#import <WalkMeEditor/WMView+WMUIGenerator.h>
#import <WalkMeEditor/WMXButtonWidgetObject.h>
#import <WalkMeEditor/WMNodeProgressData.h>
#import <WalkMeEditor/WMPopupFlowNodeObject.h>
#import <WalkMeEditor/WMPaddingStyleObject.h>
#import <WalkMeEditor/WMBackgroundLayer.h>
#import <WalkMeEditor/WMViewStyleObject.h>
#import <WalkMeEditor/WMFlexObject.h>
#import <WalkmeEditor/WMTextStyleObject.h>
#import <WalkMeEditor/WMFontStyleObject.h>
#import <WalkMeEditor/WMCornerRadiusStyleObject.h>
#import <WalkMeEditor/WMShadowStyleObject.h>
#import <WalkMeEditor/WMWebViewWidgetObject.h>
#import <WalkMeEditor/WMImageWidgetObject.h>
#import <WalkMeEditor/WMRichTextWidgetObject.h>
#import <WalkMeEditor/WMFlexRichTextWidgetView.h>
#import <WalkMeEditor/WMFlexTextWidgetView.h>
#import <WalkMeEditor/WMFlexContainerObject.h>
#import <WalkMeEditor/WMFlexLottieWidgetObject.h>
#import <WalkMeEditor/WMFullFlexCarouselWidgetObject.h>
#import <WalkMeEditor/WMShapeWidgetView.h>
#import <WalkMeEditor/WMFixedW5GUIGenerator.h>
#import <WalkMeEditor/WMBalloonAnchorView.h>
#import <WalkMeEditor/WMTooltipObject.h>
#import <WalkMeEditor/WMBalloonSettingsObject.h>
#import <WalkMeEditor/WMShoutOutPlayingItem.h>
#import <WalkMeEditor/WMUIElementObject.h>
#import <WalkMeEditor/WMBusinessSolutionObject.h>
#import <WalkMeEditor/WMPMTrackedEventObject.h>
#import <WalkMeEditor/WMCampaignLabelObject.h>
#import <WalkMeEditor/WMFlowNodeObject.h>
#import <WalkMeEditor/WMElementFlowNodeObject.h>
#import <WalkMeEditor/WMPopupFlowNodeObject.h>
#import <WalkMeEditor/WMTriggerObject.h>
#import <WalkMeEditor/WMConnectedPromotionInfoObject.h>
#import <WalkMeEditor/WMFlowObject.h>
#import <WalkMeEditor/WMStack.h>
#import <WalkMeEditor/WMPMBaseOptionsMenuVC.h>
#import <WalkMeEditor/WMPMPreviewOptionsVC.h>
#import <WalkMeEditor/WMPMSWTPreviewOptionsVC.h>
#import <WalkMeEditor/WMGraphNodeViewModel.h>
#import <WalkMeEditor/WMPMSWTOptionsViewModel.h>
#import <WalkMeEditor/WMPromotionPlayer.h>
#import <WalkMeEditor/WMNodeHandler.h>
#import <WalkMeEditor/WMActionFlowNodeObject.h>
#import <WalkMeEditor/WMConnectToFlowNodeObject.h>
#import <WalkMeEditor/WMPromotionLoaderInterface.h>
#import <WalkMeEditor/WMPromotionLoader.h>
#import <WalkMeEditor/WMSWTGraphView.h>
#import <WalkMeEditor/WMSWTGraphMatrixModel.h>

#import <WalkMeEditor/WMPMMenuOptionObject.h>
#import <WalkMeEditor/WMPMMenuViewModel.h>
#import <WalkMeEditor/WMPMMenuOptionViewModel.h>
#import <WalkMeEditor/WMDefines.h>
#import <WalkMeEditor/WMPMRootOptionsVC.h>
#import <WalkMeEditor/WMAppInfoViewController.h>
#import <WalkMeEditor/WMAppInfoUserAttributesViewController.h>

#import <WalkMeEditor/WMContentObject.h>
#import <WalkMeEditor/WMStorageManager.h>

// Events
#import <WalkMeEditor/WMEventStringManager.h>
#import <WalkMeEditor/WMEventTypes.h>

// States
#import <WalkMeEditor/WMPlayerActiveState.h>
#import <WalkMeEditor/WMEditorStateMachine.h>
#import <WalkMeEditor/WMPMState.h>
#import <WalkMeEditor/WMPMStateContext.h>
#import <WalkMeEditor/WMStateMachineBase.h>
#import <WalkMeEditor/WMPMTokenExpiredState.h>
#import <WalkMeEditor/WMDisabledState.h>

// Visitors
#import <WalkMeEditor/WMPMUIVisitorInterface.h>
#import <WalkMeEditor/WMPMBaseVisitor.h>
#import <WalkMeEditor/WMPMCaptureVisitor.h>
#import <WalkMeEditor/WMPMIdleVisitor.h>
#import <WalkMeEditor/WMPMLoadingVisitor.h>
#import <WalkMeEditor/WMPMCheckmarkVisitor.h>
#import <WalkMeEditor/WMPMElementTroubleshootVisitor.h>
#import <WalkMeEditor/WMPMPreciseCaptureVisitor.h>
#import <WalkMeEditor/WMPMSWTVisitor.h>
#import <WalkMeEditor/WMPMPreviewVisitor.h>


// Utils
#import <WalkMeEditor/UIApplication+WMCommonPlayerAdditions.h>
#import <WalkMeEditor/UIView+WMCommonAdditions.h>
#import <WalkMeEditor/UIAlertController+WMUtils.h>
#import <WalkMeEditor/NSString+WMResources.h>
#import <WalkMeEditor/NSString+WMAdditions.h>
#import <WalkMeEditor/UIDevice+WMAdditions.h>
#import <WalkMeEditor/UIWindow+WMPMAdditions.h>
#import <WalkMeEditor/WMFlowNodeObject+Utils.h>
#import <WalkMeEditor/UIView+WMToast.h>
#import <WalkMeEditor/WMBasicPromotionObject+Utils.h>
#import <WalkMeEditor/WMElementFlowNodeObject+PMUtils.h>
#import <WalkMeEditor/WMUIElementObject+PMUtils.h>
#import <WalkMeEditor/UIWindow+WMAdditions.h>
#import <WalkMeEditor/UIViewController+WMAdditions.h>
#import <WalkMeEditor/NSDictionary+WMAdditions.h>
#import <WalkMeEditor/NSError+WMDomain.h>

#import <WalkMeEditor/WMConditionNode.h>
#import <WalkMeEditor/WMConditionNodeExecuter.h>
#import <WalkMeEditor/WMUIActionHandlerInterface.h>

// for promo mgr
#import <WalkMeEditor/WMShoutOutPlayingQueue.h>
#import <WalkMeEditor/WMRemoteDataStorageInterface.h>
#import <WalkMeEditor/WMPromotionDataStorageItem.h>
#import <WalkMeEditor/WMConditionEvaluator.h>
#import <WalkMeEditor/WMErrorListener.h>
#import <WalkMeEditor/WMConditionBlock.h>
#import <WalkMeEditor/WMShoutOutPlayingItem.h>
#import <WalkMeEditor/WMiOSPromotionsDataObject.h>
#import <WalkMeEditor/WMPromotionsDataObject.h>
#import <WalkMeEditor/WMTag.h>
#import <WalkMeEditor/WMUserSettings.h>
#import <WalkMeEditor/WMTagLinkedDeployable.h>
#import <WalkMeEditor/WMPromotionManagerInterface.h>


// ESM
#import <WalkMeEditor/WMFEBatchOperation.h>
#import <WalkMeEditor/WMFEFlagsObject.h>
#import <WalkMeEditor/UIView+WMCommonPlayerAdditions.h>

#import <WalkMeEditor/WMElementHandler.h>
#import <WalkMeEditor/WMTriggerObject.h>
#import <WalkMeEditor/WMCustomTriggerObject.h>
#import <WalkMeEditor/WMElementHandlerInterface.h>
#import <WalkMeEditor/WMStepTriggerHandlerInterface.h>

