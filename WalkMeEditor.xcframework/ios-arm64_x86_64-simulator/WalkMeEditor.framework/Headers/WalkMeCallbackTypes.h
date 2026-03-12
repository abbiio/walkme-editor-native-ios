//
//  WMCallbackTypes.h
//  WalkMeSDKCommonPlayer
//
//  Created by Yair Barak on 06/05/2020.
//  Copyright © 2020 WalkMe. All rights reserved.
//

#ifndef WalkMeCallbackTypes_h
#define WalkMeCallbackTypes_h

typedef void (^WMHTTPHeadersReady) (NSURLRequest * _Nonnull request, NSURLResponse * _Nullable response);
typedef void (^WMHTTPProgress) (NSURLRequest * _Nonnull request, NSInteger progressValue, BOOL isFinished, NSData * _Nullable data);
typedef void (^WMHTTPRequestCallback) (NSURLRequest * _Nonnull request, WMHTTPHeadersReady _Nullable headersReadyCallback, WMHTTPProgress _Nullable progressCallback);

#endif /* WalkMeCallbackTypes_h */
