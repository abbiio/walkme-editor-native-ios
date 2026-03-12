//
//  WMSWTGraphView.h
//  WalkMeSDK
//
//  Created by Guy Sharony on 14/08/2019.
//  Copyright © 2019 WalkMe Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class WMPMSWTOptionsViewModel, WMSWTGraphView;

@protocol WMPMSWTGraphViewDelegate <NSObject>

- (void)graphView:(WMSWTGraphView *)graphView didSelectNodeAtIndex:(NSIndexPath * _Nullable)index;

@end

@interface WMSWTGraphView : UIView

@property (nonatomic, weak) id<WMPMSWTGraphViewDelegate> delegate;

@property (nonatomic, readonly) WMPMSWTOptionsViewModel *viewModel;

- (instancetype)initWithFrame:(CGRect)frame viewModel:(WMPMSWTOptionsViewModel*)viewModel;
- (void)reloadGraphNodesAtIndexes:(NSArray<NSIndexPath*>*)nodesIndexes;

@end


NS_ASSUME_NONNULL_END
