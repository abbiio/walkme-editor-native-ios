//
//  WMPMCaptureVisitor.h
//  WalkMeSDK
//
//  Created by Haim Benchimol on 16/01/2018.
//  Copyright © WalkMe Ltd. All rights reserved.
//

#import "WMPMBaseVisitor.h"

typedef NS_ENUM(NSUInteger,WMPMCaptureVisitorState)
{
    WMPMCaptureVisitorStateNone,
    WMPMCaptureVisitorStateCaptureElement,
    WMPMCaptureVisitorStateCaptureElementWithNarrow,
    WMPMCaptureVisitorStateCaptureElementWithExpand,
    WMPMCaptureVisitorStateCaptureElementWithNarrowAndExpand,
    WMPMCaptureVisitorStateCaptureWt,
    WMPMCaptureVisitorStateNavigate,
    WMPMCaptureVisitorStateCaptureWtWithPreciseCapture,
    WMPMCaptureVisitorStateCaptureWtWithExpandAndDone,
    WMPMCaptureVisitorStateCaptureWtWithNarrowAndDone,
    WMPMCaptureVisitorStateCaptureWtWithExpandAndNarrowAndDone,
    WMPMCaptureVisitorStateCaptureWtWithDone    
};

@interface WMPMCaptureVisitor : WMPMBaseVisitor

+ (WMPMCaptureVisitor*)visitorForWT:(BOOL)isWT approveEnabled:(BOOL)approveEnabled state:(WMPMCaptureVisitorState)state;

@end

@interface WMPMNavigateVisitor : WMPMBaseVisitor
@end
