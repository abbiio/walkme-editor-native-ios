//
//  WMPMMenuViewModel.h
//  WalkMeSDK
//
//  Created by Guy Sharony on 21/06/2020.
//  Copyright © 2020 WalkMe Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class WMPMMenuOptionViewModel;

@interface WMPMMenuViewModel : NSObject

@property (nonatomic, assign, readonly) NSUInteger rows;
@property (nonatomic, assign, readonly) NSUInteger columns;
@property (nonatomic, strong, readonly) NSArray<NSArray< WMPMMenuOptionViewModel *> *> *options;

- (instancetype)initWithOptions:(NSArray<NSArray< WMPMMenuOptionViewModel *> *> *)options;
- (WMPMMenuOptionViewModel *)optionForIndexPath:(NSIndexPath *)indexPath;
- (NSUInteger)itemsInSection:(NSUInteger)section;

@end

NS_ASSUME_NONNULL_END
