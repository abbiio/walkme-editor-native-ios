//
//  WMPMMenuOptionViewModel.h
//  WalkMeSDK
//
//  Created by Guy Sharony on 21/06/2020.
//  Copyright © 2020 WalkMe Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class WMPMMenuOptionObject;

@interface WMPMMenuOptionViewModel : NSObject

@property (nonatomic, strong, readonly) WMPMMenuOptionObject *model;

- (instancetype)initWithMenuOption:(WMPMMenuOptionObject *)menuOption;

@end

NS_ASSUME_NONNULL_END
