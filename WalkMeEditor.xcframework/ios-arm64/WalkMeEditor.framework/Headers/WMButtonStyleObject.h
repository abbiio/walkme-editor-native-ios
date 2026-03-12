//
//  WMButtonStyleObject.h
//  WalkMeSDK
//
//  Created by Haim Ben Chimol on 12/03/2019.
//  Copyright © 2019 WalkMe. All rights reserved.
//

#import "WMTextStyleObject.h"

@class WMButtonStyleObject, WMIconStyleObject;

@protocol WMButtonStylingInterface <WMTextStylingInterface>

@optional
- (void)acceptButtonStyle:(WMButtonStyleObject*)style;

@end

@interface WMButtonStyleObject : WMTextStyleObject

@property (nonatomic,strong) WMIconStyleObject *icon;

// Subclassing
- (void)applyOnView:(UIView<WMButtonStylingInterface>*)aView;

@end
