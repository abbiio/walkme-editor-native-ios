//
//  WMShapeWidgetObject.h
//  WalkMeSDK
//
//  Created by Haim Ben Chimol on 02/05/2019.
//  Copyright © 2019 WalkMe. All rights reserved.
//

#import "WMWidgetObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface WMShapeWidgetObject : WMWidgetObject <WMUIInteractionModelInterface>

@property (nonatomic,strong) WMViewActionObject *action;

@end

NS_ASSUME_NONNULL_END
