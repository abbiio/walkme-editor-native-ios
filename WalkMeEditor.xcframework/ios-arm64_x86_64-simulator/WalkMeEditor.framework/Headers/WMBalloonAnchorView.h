//
//  WMBalloonAnchorView.h
//  WalkMeSDK
//
//  Created by Haim Ben Chimol on 17/04/2019.
//  Copyright © 2019 WalkMe. All rights reserved.
//

#import "WMBaseAnchorView.h"
#import "WMCommonPlayerModelDefines.h"

NS_ASSUME_NONNULL_BEGIN

@interface WMBalloonTipStyle : NSObject

@property (nonatomic,strong) UIColor *color;
@property (nonatomic,assign) CGFloat size;

@end

@interface WMBalloonAnchorView : WMBaseAnchorView

@property (nonatomic,readonly) UIView* content;
@property (nonatomic,readonly) WMPosition position;
@property (nonatomic,readonly) WMBalloonTipStyle *tipStyle;
@property (nonatomic, assign) BOOL innerPosition;
@property (nonatomic, assign) CGSize offsets;
@property (nonatomic, assign) BOOL failedToPosition;
@property (nonatomic, assign) BOOL isFlexUI;

@property (nonatomic,strong,nullable) NSLayoutConstraint* flexCenterVerticalConstraint;
@property (nonatomic,strong,nullable) NSLayoutConstraint* flexCenterHorizontalConstraint;


- (instancetype)initWithSize:(CGSize)size anchorView:(UIView*)anchorView position:(WMPosition)position tipStyle:(nullable WMBalloonTipStyle*)tipStyle;
- (instancetype)initWithSize:(CGSize)size anchorView:(UIView*)anchorView position:(WMPosition)position tipStyle:(nullable WMBalloonTipStyle*)tipStyle isFlex:(BOOL)isFlex; 

- (BOOL)changePosition:(WMPosition)position animate:(BOOL)animate;

@end

NS_ASSUME_NONNULL_END
