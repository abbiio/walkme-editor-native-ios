//
//  WMPMCaptureViewModel.h
//  WalkMeSDK
//
//  Created by Haim Benchimol on 16/01/2018.
//  Copyright © WalkMe Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WMCaptureModeDefines.h"

@interface WMPMCaptureViewModel : NSObject

@property (nonatomic,assign) BOOL  isCaptureElement;
@property (nonatomic,assign) WMCaptureModeType captureModeType;

@end
