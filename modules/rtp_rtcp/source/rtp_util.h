/*
 *  Copyright (c) 2021 The WebRTC project authors. All Rights Reserved.
 *
 *  Use of this source code is governed by a BSD-style license
 *  that can be found in the LICENSE file in the root of the source
 *  tree. An additional intellectual property rights grant can be found
 *  in the file PATENTS.  All contributing project authors may
 *  be found in the AUTHORS file in the root of the source tree.
 */

#ifndef MODULES_RTP_RTCP_SOURCE_RTP_UTIL_H_
#define MODULES_RTP_RTCP_SOURCE_RTP_UTIL_H_

#include <cstdint>

#include "api/array_view.h"

namespace webrtc {

bool IsRtcpPacket(rtc::ArrayView<const uint8_t> packet);
bool IsRtpPacket(rtc::ArrayView<const uint8_t> packet);

}  // namespace webrtc

#endif  // MODULES_RTP_RTCP_SOURCE_RTP_UTIL_H_
