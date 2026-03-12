//
//  WMPromotionLoadableInterface.h
//  WalkMeSDKCommonPlayer
//
//  Created by Vova Sarkisyan on 07/04/2021.
//  Copyright © 2021 WalkMe. All rights reserved.
//

#ifndef WMPromotionLoadableInterface_h
#define WMPromotionLoadableInterface_h

@protocol WMPromotionLoadable <NSObject>

@property (nonatomic, strong, readonly) NSString* loadableName;
@property (nonatomic, strong, readonly) NSArray<NSString *> * imagesURLs;

@end

#endif /* WMPromotionLoadableInterface_h */
