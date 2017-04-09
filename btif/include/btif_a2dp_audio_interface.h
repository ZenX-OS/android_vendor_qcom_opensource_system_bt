/******************************************************************************
 * Copyright (C) 2017, The Linux Foundation. All rights reserved.
 *
 *  Not a Contribution
 *****************************************************************************/
/******************************************************************************
 *
 *  Copyright (C) 2016 The Android Open Source Project
 *  Copyright (C) 2009-2012 Broadcom Corporation
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at:
 *
 *  http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 *
 ******************************************************************************/


#ifndef BTIF_A2DP_AUDIO_INTERFACE_H
#define BTIF_A2DP_AUDIO_INTERFACE_H

//#include "audio_a2dp_hw.h"
#include "bta_av_api.h"
typedef enum {
  A2DP_CTRL_GET_CODEC_CONFIG = 15,
  A2DP_CTRL_GET_MULTICAST_STATUS,
  A2DP_CTRL_GET_CONNECTION_STATUS,
  A2DP_CTRL_GET_NUM_CONNECTED_DEVICE,
}tA2DP_CTRL_EXT_CMD;

typedef enum {
  A2DP_CTRL_ACK_PENDING = 5,
}tA2DP_CTRL_ACK_EXT;

void btif_a2dp_audio_on_started(tBTA_AV_STATUS status);
void btif_a2dp_audio_on_stopped(tBTA_AV_STATUS status);
void btif_a2dp_audio_on_suspended(tBTA_AV_STATUS status);
void btif_a2dp_audio_interface_init(void);
void btif_a2dp_audio_interface_deinit(void);

#endif /*BTIF_A2DP_AUDIO_INTERFACE_H*/

