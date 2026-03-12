//
//  WMPMWindow.h
//  WalkMeSDK
//
//  Created by Haim Benchimol on 07/01/2018.
//  Copyright © WalkMe Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSUInteger, WMPMWindowState) {
    WMPMWindowStateBlockTouch,
    WMPMWindowStateDoNotBlockTouch
};

@protocol WMPMWindowDelegate <NSObject>

- (void)didAddSubviewToPMWindow:(UIView *)subview;

@end

@interface WMPMWindow : UIView 

@property (nonatomic,weak) id<WMPMWindowDelegate> delegate;

@property (nonatomic,assign) WMPMWindowState state;

+ (WMPMWindow *)getPMWindow; // Get WMPMWindow if available and attached to app's keyWindow

@end
