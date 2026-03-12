//
//  WMCaptureModeDefines.h
//  WalkMeSDK
//
//  Created by Haim Benchimol on 21/08/2017.
//  Copyright © 2017 WalkMe Ltd. All rights reserved.
//

#ifndef WMCaptureModeDefines_h
#define WMCaptureModeDefines_h

#import <Foundation/Foundation.h>

#define kWMMinCaptureViewHeight 20.0
#define kWMMinCaptureViewWidth 20.0

typedef NS_ENUM(NSUInteger,WMCaptureModeType)
{
    WMCaptureModeTypeNative,
    WMCaptureModeTypeHybrid
};

#endif /* WMCaptureModeDefines_h */
