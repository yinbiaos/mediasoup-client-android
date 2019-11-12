/*
 *  Copyright 2017 The WebRTC project authors. All Rights Reserved.
 *
 *  Use of this source code is governed by a BSD-style license
 *  that can be found in the LICENSE file in the root of the source
 *  tree. An additional intellectual property rights grant can be found
 *  in the file PATENTS.  All contributing project authors may
 *  be found in the AUTHORS file in the root of the source tree.
 */

#import <Cocoa/Cocoa.h>

#import "RTCVideoRenderer.h"

NS_AVAILABLE_MAC(10.11)

RTC_OBJC_EXPORT
@interface RTCMTLNSVideoView : NSView <RTCVideoRenderer>

@property(nonatomic, weak) id<RTCVideoViewDelegate> delegate;

+ (BOOL)isMetalAvailable;

@end
