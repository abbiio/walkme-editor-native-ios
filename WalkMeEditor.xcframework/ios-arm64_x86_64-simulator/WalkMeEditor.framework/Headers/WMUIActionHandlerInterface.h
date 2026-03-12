//
//  WMUIActionHandlerInterface.h
//  WalkMeSDK
//
//  Created by Haim Ben Chimol on 08/03/2019.
//  Copyright © 2019 WalkMe. All rights reserved.
//

#import <UIKit/UIKit.h>

#ifndef WMUIActionHandlerInterface_h
#define WMUIActionHandlerInterface_h

@class WMViewActionObject;

@protocol WMUIActionHandlerInterface <NSObject>

@required
- (void)handle:(WMViewActionObject *)action onView:(UIView *)view;

@end

#endif /* WMUIActionHandlerInterface_h */
