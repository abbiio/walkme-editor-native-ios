//
//  WMTextWidgetObject.h
//  WalkMeSDK
//
//  Created by Haim Ben Chimol on 11/03/2019.
//  Copyright © 2019 WalkMe. All rights reserved.
//

#import "WMWidgetObject.h"
#import "WMTextStyleObject.h"

@class WMTextStyleObject;

@interface WMTextWidgetObject : WMWidgetObject

@property (nonatomic,strong) NSAttributedString *attributedTitle;

// WMUIGenerationInterface
@property (nonatomic,strong) WMTextStyleObject *style;

@end
