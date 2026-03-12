//
//  WMFlexTextWidgetView.h
//  WalkMeSDKCommonPlayer
//
//  Created by Vova Sarkisyan on 05/01/2022.
//  Copyright © 2022 WalkMe. All rights reserved.
//

#import "WMTextWidgetView.h"

NS_ASSUME_NONNULL_BEGIN

@interface WMFlexTextWidgetView : WMTextWidgetView
- (void)setInnerHorizontalHuggingPriority:(UILayoutPriority)priority;
@end

NS_ASSUME_NONNULL_END
