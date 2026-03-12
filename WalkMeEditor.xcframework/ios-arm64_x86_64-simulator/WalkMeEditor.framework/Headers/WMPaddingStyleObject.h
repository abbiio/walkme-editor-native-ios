//
//  WMPaddingStyleObject.h
//  WalkMeSDKCommonPlayer
//
//  Created by Vova Sarkisyan on 24/09/2020.
//  Copyright © 2020 WalkMe. All rights reserved.
//

#import "WMObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface WMPaddingStyleObject : WMObject
@property (nonatomic,assign) CGFloat top;
@property (nonatomic,assign) CGFloat left;
@property (nonatomic,assign) CGFloat right;
@property (nonatomic,assign) CGFloat bottom;
@end

NS_ASSUME_NONNULL_END
