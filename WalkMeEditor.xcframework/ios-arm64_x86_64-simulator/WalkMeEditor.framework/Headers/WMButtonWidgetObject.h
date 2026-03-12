//
//  WMButtonWidgetObject.h
//  WalkMeSDK
//
//  Created by Haim Ben Chimol on 11/03/2019.
//  Copyright © 2019 WalkMe. All rights reserved.
//

#import "WMWidgetObject.h"

NS_ASSUME_NONNULL_BEGIN

@class WMButtonStyleObject;

@interface WMButtonWidgetObject : WMWidgetObject <WMUIInteractionModelInterface>

// WMUIModelInterface
@property (nonatomic,strong,nullable) WMButtonStyleObject *style;

// WMUIInteractionModelInterface
@property (nonatomic,strong,nullable) WMViewActionObject *action;

@end

NS_ASSUME_NONNULL_END
