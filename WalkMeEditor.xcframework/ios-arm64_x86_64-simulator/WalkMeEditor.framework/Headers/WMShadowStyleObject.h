//
//  WMShadowStyleObject.h
//  WalkMeSDK
//
//  Created by Haim Ben Chimol on 12/03/2019.
//  Copyright © 2019 WalkMe. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WMObject.h"

@interface WMShadowStyleObject : WMObject

@property (nonatomic,strong,nullable) NSNumber *offsetX;
@property (nonatomic,strong,nullable) NSNumber *offsetY;
@property (nonatomic,strong,nullable) NSNumber *blurRadius;
@property (nonatomic,strong,nullable) NSNumber *opacity;
@property (nonatomic,strong,nullable) NSNumber *spread;
@property (nonatomic,strong,nullable) UIColor  *color;

@end
