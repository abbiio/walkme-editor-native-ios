//
//  WMButtonStyleObject.h
//  WalkMeSDK
//
//  Created by Haim Ben Chimol on 06/03/2019.
//  Copyright © 2019 WalkMe. All rights reserved.
//

#import "WMViewStyleObject.h"

NS_ASSUME_NONNULL_BEGIN

@class WMTextStyleObject, WMFontStyleObject;

@protocol WMTextStylingInterface <WMViewStylingInterface>

@optional
- (void)acceptTextStyle:(WMTextStyleObject*)style;
                     
@end

@interface WMTextStyleObject : WMViewStyleObject

@property (nonatomic,strong) WMFontStyleObject *font;

// Subclassing
- (void)applyOnView:(UIView<WMTextStylingInterface>*)aView;

@end

NS_ASSUME_NONNULL_END
