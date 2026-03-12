//
//  WMPreciseCaptureSpotlightView.h
//  WalkMeSDK
//
//  Created by Amit Shacham on 19/07/2017.
//  Copyright © 2017 WalkMe Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

@class WMPreciseCaptureSpotlightView;

@protocol WMPreciseCaptureSpotlightViewDelegate <NSObject>

@optional
- (void)didTapOnCapturedView:(WMPreciseCaptureSpotlightView*)spotlightView;

@end

@interface WMPreciseCaptureSpotlightView : UIView

@property (nonatomic, assign) CGRect anchorFrame;
@property (nonatomic, weak) id <WMPreciseCaptureSpotlightViewDelegate> preciseCaptureDelegate;

- (instancetype)initWithAnchorFrame:(CGRect)frame;

@end
