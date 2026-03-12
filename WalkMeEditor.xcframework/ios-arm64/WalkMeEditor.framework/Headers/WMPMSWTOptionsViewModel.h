//
//  WMPMSWTPreviewOptionsViewModel.h
//  WalkMeSDK
//
//  Created by Guy Sharony on 11/08/2019.
//  Copyright © 2019 WalkMe Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WMGraphNodeViewModel.h"
#import "WMSWTGraphView.h"

NS_ASSUME_NONNULL_BEGIN

@protocol WMPMSWTOptionsViewModelDelegate <NSObject>

@optional
- (void)didTapGoToStep:(WMFlowNodeObject *)step;
- (void)didTapRecaptureStep:(WMFlowNodeObject *)step;

@end

@class WMBasicPromotionObject, WMConnectedPromotionInfoObject, WMFlowNodeObject, WMSWTGraphMatrixModel, WMGraphNodeViewModel;

@interface WMPMSWTOptionsViewModel : NSObject <WMPMSWTGraphViewDelegate>

@property (nonatomic,strong,readonly) WMSWTGraphMatrixModel *graph;
@property (nonatomic,strong,readonly) NSDictionary<NSIndexPath*,WMGraphNodeViewModel*> *nodes;

@property (nonatomic,assign,readonly) WMPMSWTOptionsViewType viewType;
@property (nonatomic,readonly) NSString *revisionID;
@property (nonatomic,readonly) NSString *connectedPromotionName;
@property (nonatomic,readonly) NSString *connectingPromotionName;
@property (nonatomic,readonly) NSString *promotionType;
@property (nonatomic,readonly) NSIndexPath *selectedNodeIndex;
@property (nonatomic,readonly) NSIndexPath *currStepIndex;
@property (nonatomic,strong,readonly) NSNumber *currStepId;
@property (nonatomic,strong,readonly) NSNumber *numOfSteps;
@property (nonatomic,assign,readonly) BOOL isConnected;
@property (nonatomic,assign,readonly) BOOL shouldAllowCapture;

@property (nonatomic,strong,readonly) NSString *backgroundImageName;


@property (nonatomic, weak) id<WMPMSWTOptionsViewModelDelegate> delegate;

- (instancetype)initWithPromotion:(WMBasicPromotionObject *)promotion
                         viewType:(WMPMSWTOptionsViewType)viewType
              connectingPromoInfo:(WMConnectedPromotionInfoObject*)connectingPromoInfo
          connectedPromotionTypes:(NSDictionary * _Nullable)connectedPromotionTypes
               shouldAllowCapture:(BOOL)shouldAllowCapture;
     

// State Machine Updates
- (void)updateCurrStep:(WMFlowNodeObject *)currStep;

// View Model Actions (VC -> View Model)
- (void)selectNodeAtIndex:(NSIndexPath* _Nullable)index;

// VC Subscriptions (ViewModel -> VC)
@property (nonatomic,copy) void (^onViewModelChanged)(NSArray<NSIndexPath*>* updatedNodes);

@end

NS_ASSUME_NONNULL_END
