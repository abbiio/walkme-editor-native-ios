//
//  WMiOSPromotionsDataObject.h
//  WalkMeSDKiOSCommon
//
//  Created by Guy Sharony on 10/08/2021.
//

#import "WMPromotionsDataObject.h"

@class WMShuttleObject, WMOnBoardingTaskObject, WMTag, WMConditionBlock, WMMainWidgetObject, WMContentObject;

NS_ASSUME_NONNULL_BEGIN

@interface WMiOSPromotionsDataObject : WMPromotionsDataObject

@property (readonly, nonatomic, strong) NSArray<WMShuttleObject *> *shuttles;
@property (readonly, nonatomic, strong) NSArray<WMOnBoardingTaskObject *> *tasks;
@property (readonly, nonatomic, strong) NSArray<WMTag *> *tags;
@property (readonly, nonatomic, strong) NSArray<WMConditionBlock *> *conditionBlocks;
@property (readonly, nonatomic, strong) WMMainWidgetObject *mainWidgetObject;

//@property (readonly, nonatomic, strong) NSArray<WMLauncherObject*> *launchers;
@property (readonly, nonatomic, strong) NSArray<WMContentObject*> *contents;
//@property (readonly, nonatomic, strong) WMAccessibilityData * accessibilityData;

@end

NS_ASSUME_NONNULL_END
