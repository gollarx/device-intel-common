/*
 * Copyright (C) 2012 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef _BDROID_BUILDCFG_H
#define _BDROID_BUILDCFG_H

/* default name on 1A */
#define BTM_DEF_LOCAL_NAME "lightningpeak-1A"

#define INTEL_CONTROLLER       TRUE
#define INTEL_LNP_UART         TRUE
#define HCI_MAX_SIMUL_CMDS     1
#define PRELOAD_MAX_RETRY_ATTEMPTS 1
#define PRELOAD_START_TIMEOUT_MS 8000

/*To enable WBS */
#define BTM_WBS_INCLUDED              TRUE
#define BTIF_HF_WBS_PREFERRED         TRUE
#define BTM_ESCO_SETUP_CORE_SPEC_4_1  TRUE

#define BLE_VND_INCLUDED TRUE

#endif