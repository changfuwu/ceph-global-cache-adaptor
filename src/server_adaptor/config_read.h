/*
* Copyright (c) 2021 Huawei Technologies Co., Ltd All rights reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*	http://www.apache.org/licenses/LICENSE-2.0
* 
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/

#ifndef _CONFIG_READ_H_
#define _CONFIG_READ_H_

#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#define MAX_IPV4_ADDR_LEN 16
#define MAX_IOD_CORE 8
#define MAX_PORT_SIZE 128
#define MAX_XNET_CORE 4
#define MAX_DPSHM_CORE 8
#define ZK_SERVER_LIST_STR_LEN 128

class OsaConfigRead {
public:
    uint32_t GetLocalIpv4Addr();
    uint32_t GetLocalPort();
    char *GetLocalIpv4AddrStr();
    char *GetZkServerList();

    uint32_t IsUseOneSideRDMA();
    uint32_t GetGvaSlabObjNum();

    int32_t GetIodCore(uint32_t *cores, uint32_t maxCoreNum);
    int32_t GetXnetCore(uint32_t *cores, uint32_t maxCoreNum);
    int32_t GetDpshmCore(uint32_t *cores, uint32_t maxCoreNum);

    int32_t CacheClusterConfigInit(const char *filepath);

    char *GetListenIp();
    char *GetListenPort();
    char *GetSendIp();
    char *GetSendPort();
    char *GetTestMode();
    char *GetCoreNumber();
    uint32_t GetQueueAmount();
    uint32_t GetMsgrAmount();
    uint32_t GetBindCore();
    uint32_t GetBindQueueCore();
    uint32_t GetPerf();
    uint32_t GetQueueMaxCapacity();
};

#endif
