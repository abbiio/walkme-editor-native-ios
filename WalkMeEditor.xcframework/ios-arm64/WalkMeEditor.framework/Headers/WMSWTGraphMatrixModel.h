//
//  WMSWTGraphMatrixModel.h
//  WalkMeSDK
//
//  Created by Haim Ben Chimol on 25/08/2019.
//  Copyright © 2019 WalkMe Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

#define IP(x,y) [NSIndexPath indexPathForItem:x inSection:y]

@class WMBusinessSolutionObject, WMFlowNodeObject;

@interface WMSWTGraphMatrixNodeModel : NSObject

@property (nonatomic, strong) WMFlowNodeObject *step; // May be nil for empty nodes
@property (nonatomic, strong) NSNumber *index; // May be nil for empty nodes

@property (nonatomic, strong) NSIndexPath *indexPath;
@property (nonatomic, strong) NSIndexPath *yesNodeIndexPath;
@property (nonatomic, strong) NSIndexPath *noNodeIndexPath;
@property (nonatomic, strong) NSIndexPath *nextNodeIndexPath;

@end

@interface WMSWTGraphMatrixModel : NSObject

@property (nonatomic, strong, readonly) NSDictionary<NSIndexPath *, WMSWTGraphMatrixNodeModel *> *nodes;

@property (nonatomic, assign, readonly) NSUInteger numOfSections;
@property (nonatomic, assign, readonly) NSUInteger numOfColumns;

- (instancetype)initWithSWTPromotion:(WMBusinessSolutionObject *)swtPromo;
- (NSIndexPath *)indexPathForStep:(NSNumber *)stepID;

@end

NS_ASSUME_NONNULL_END
