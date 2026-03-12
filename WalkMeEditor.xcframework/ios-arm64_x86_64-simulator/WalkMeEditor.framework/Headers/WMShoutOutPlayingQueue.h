//
//  WMSOAutoStartQueue.h
//  WalkMeSDK
//
//  Created by Haim Ben Chimol on 18/03/2019.
//  Copyright © 2019 WalkMe. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class WMShoutOutPlayingItem, WMShoutOutObject;

@interface WMShoutOutPlayingQueue : NSObject

@property (nonatomic,readonly) NSMutableArray<WMShoutOutPlayingItem*> *orderedItems;
@property (nonatomic,copy,nullable) void (^nextItemReady)(WMShoutOutPlayingItem *soPlayingItem);

- (void)add:(WMShoutOutPlayingItem*)soPlayingItem;
- (WMShoutOutPlayingItem*)first;
- (void)playNext:(WMShoutOutPlayingItem*)soPlayingItem;
- (void)remove:(WMShoutOutObject*)shoutout;
- (void)removeAll;

@end

NS_ASSUME_NONNULL_END
