//
//  WMBaseAnchorView.h
//  WalkMeSDK
//
//  Created by Haim Ben Chimol on 15/04/2019.
//  Copyright © 2019 WalkMe. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@protocol WMBaseAnchorViewDelegate <NSObject>

- (void)onAnchorViewInvisible;

@end

@interface WMBaseAnchorView : UIView

@property (nonatomic,readonly,weak) UIView *anchorView;
@property (nonatomic, weak) id<WMBaseAnchorViewDelegate> delegate;

- (instancetype)initWithAnchorView:(UIView*)anchorView;

// Subclassing
- (void)anchorViewDidChange;
- (void)anchorViewNotVisible;

@end

NS_ASSUME_NONNULL_END
