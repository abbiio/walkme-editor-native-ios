//
//  WMSpotlightView.h
//  WalkMeSDK
//
//  Created by Haim Ben Chimol on 10/02/2019.
//  Copyright © 2019 WalkMe. All rights reserved.
//

#import "WMBaseAnchorView.h"

NS_ASSUME_NONNULL_BEGIN

@class WMSpotlightView,WMBalloonSettingsObject;

@protocol WMSpotlightViewDelegate <WMBaseAnchorViewDelegate>

@optional
- (void)spotlightView:(WMSpotlightView*)spotlightView didTapAnchorView:(UIView*)anchorView;
- (void)spotlightViewDidTapBackground:(WMSpotlightView*)spotlightView;

@end

@interface WMSpotlightView : WMBaseAnchorView

@property (nonatomic,strong,readonly) WMBalloonSettingsObject *settings;
@property (nonatomic,assign) BOOL clickThrough;

- (instancetype)initWithDefaultModel;
- (void)updateHighlightOnFrame:(CGRect)frame;

- (instancetype)initWithAnchorView:(UIView*)aView settings:(WMBalloonSettingsObject*)settings;

@property (nonatomic,weak) id<WMSpotlightViewDelegate> delegate;

@end

NS_ASSUME_NONNULL_END
