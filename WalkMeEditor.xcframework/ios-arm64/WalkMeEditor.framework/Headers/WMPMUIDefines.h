//
//  WMPMUIDefines.h
//  WalkMeSDK
//
//  Created by Haim Benchimol on 10/01/2018.
//  Copyright © WalkMe Ltd. All rights reserved.
//

#ifndef WMPMUIDefines_h
#define WMPMUIDefines_h

#import "UIDevice+WMAdditions.h"

#define kWMPMEditColor @"#BE6E96"
#define kWMPMPreviewColor @"#00B768"

#define kWMPMBubbleSize 66.0

#define kWMCaptureElementIconWidth 18.0
#define kWMCaptureElementIconHeight 24.0

#define kWMPMPromoDrawerViewHeight 240
#define kWMPMPromoDrawerCloseButtonSize 40
#define kWMPMPromoDrawerCloseButtonMargin 10

#define kWMPMSWTGraphViewNodeWidth 136.0f
#define kWMPMSWTGraphViewNodeHeight 96.0f
#define kWMPMSWTGraphCloseButtonSize 40
#define kWMPMSWTGraphCloseButtonMargin 10
#define kWMPMSWTGraphItemMargin 8.0f
#define kWMPMSWTGraphItemSpacing 16.0f
//#define kWMPMSWTGraphTopHeaderHeight 40.0f
#define kWMPMSWTGraphTopHeaderHeight 0


#define kWMPMMenuPortraitHeaderHeight UIDevice.__wm__safeAreaInsets.top + 64*2+8+1
#define kWMPMMenuLandscapeHeaderHeight 64+16*2+1
#define kWMPMMenuOptionInnerContentWidth 140.0f
#define kWMPMMenuOptionInnerContentHeight 116.0f
#define kWMPMMenuOptionVerticalMargin 12.0f
#define kWMPMMenuOptionHorizontalMargin 24.0f


#define kWMPMAccessoryButtonSize 36.0
#define kWMPMWidgetAccessoryMargin 15.0

#define kWMPMEditsBadgeSize 22.0

#define kWMPMPreciseCaptureMarkerWidth 100.0
#define kWMPMPreciseCaptureMarkerHeight 100.0

#define kWMPMCapturedElementDelayTime 1.1

#define kWMPMAccessoryMargin 10.0

#define kWMPMHighlightColor [UIColor colorWithRed:0.22 green:0.373 blue:0.922 alpha:1]

#define kWMWTGraphMargin 4.0f
#define kWMWTGraphPathColor [UIColor colorWithRed:1.0f green:0.55f blue:0.18f alpha:1.0f]

typedef NS_ENUM(NSUInteger, WMPMSWTOptionsViewType) {
    WMPMSWTOptionsViewTypePreview,
    WMPMSWTOptionsViewTypeEdit
};

typedef NS_ENUM(NSUInteger, WMPMOptionsMenuHeaderStyleType) {
    WMPMOptionsMenuHeaderStyleTypeMain,
    WMPMOptionsMenuHeaderStyleTypeSWTPreview,
    WMPMOptionsMenuHeaderStyleTypeSWTEdit
};

#endif /* WMPMUIDefines_h */
