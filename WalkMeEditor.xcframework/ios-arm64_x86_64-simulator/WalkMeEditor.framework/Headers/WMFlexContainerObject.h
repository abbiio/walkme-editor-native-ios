//
//  WMFlexContainerObject.h
//  WalkMeSDKCommonPlayer
//
//  Created by Vova Sarkisyan on 08/09/2020.
//  Copyright © 2020 WalkMe. All rights reserved.
//

#import "WMWidgetObject.h"
#import "WMFlexObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface WMFlexContainerObject : WMWidgetObject
@property (nonatomic,assign, readonly) WMFlexStyleDirection directionType;
@end

NS_ASSUME_NONNULL_END
