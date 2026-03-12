//
//  WMCornerRadiusStyleObject.h
//  WalkMeSDK
//
//  Created by Haim Ben Chimol on 05/03/2019.
//  Copyright © 2019 WalkMe. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WMObject.h"

@interface WMCornerRadiusStyleObject : WMObject

@property (nonatomic,strong) NSNumber *tl;
@property (nonatomic,strong) NSNumber *tr;
@property (nonatomic,strong) NSNumber *bl;
@property (nonatomic,strong) NSNumber *br;

@end

@interface WMCornerRadiusStyleObject (WMAdditions)

- (instancetype)initWithRadius:(CGFloat)radius;
//- (UIBezierPath*)pathForRect:(CGRect)rect;
- (BOOL)areCornersEqual;
- (CACornerMask)activeCorners;

@end
