//
//  WMUITracker.h
//  WalkMeSDK
//
//  Created by Haim Ben Chimol on 27/08/2020.
//  Copyright © 2020 WalkMe Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class WMUITree;

extern NSString * const kWMUITrackerUpdate;
extern NSString * const kWMUITrackerFinishedCollectingTexts;

@interface WMUITracker : NSObject

+ (WMUITracker*)shared;

- (void)start;
- (void)stop;

@property (atomic, readonly) WMUITree *uiTree;

@end

NS_ASSUME_NONNULL_END
