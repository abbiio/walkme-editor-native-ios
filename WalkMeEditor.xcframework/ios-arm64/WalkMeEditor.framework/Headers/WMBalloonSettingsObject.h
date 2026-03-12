//
//  WMBalloonDesignObject.h
//  WalkMeSDK
//
//  Created by Haim Ben Chimol on 14/04/2019.
//  Copyright © 2019 WalkMe. All rights reserved.
//

#import "WMObject.h"
#import "WMCommonPlayerModelDefines.h"

@class WMSpotlightDesignObject,WMHighlighterDesignObject;

@interface WMBalloonSettingsObject : WMObject

@property (nonatomic,readonly,assign) WMPosition position;
@property (nonatomic,readonly,strong) WMSpotlightDesignObject *stepIoObj;
@property (nonatomic,readonly,strong) WMHighlighterDesignObject *stepHlObj;

@end
