//
//  WMFlowNodeObject+Utils.h
//  WalkMe
//
//  Created by Sharony, Guy on 17/12/2025.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface WMFlowNodeObject (Utils)

- (BOOL)isAutomatedNode;
- (BOOL)isActionNode;
- (BOOL)isPopUpNode;
- (BOOL)isWaitForNode;
- (BOOL)isDataNode;
- (BOOL)isSplitNode;
- (BOOL)isElementBasedNode;

@end

NS_ASSUME_NONNULL_END
