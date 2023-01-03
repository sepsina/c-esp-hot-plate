/*
 * global.h
 *
 *  Created on: 15. lis 2022.
 *      Author: Sep
 */

#ifndef SRC_GLOBAL_H_
#define SRC_GLOBAL_H_

#include "stdbool.h"

#define CMD_PARAMS_LEN   64
#define HOT_PLATE_ID    0xACDC

#pragma pack(push, 1)

typedef struct {
    uint32_t ip;
    uint16_t port;
    uint16_t pktFunc;
    uint16_t cmdID;
    uint8_t cmd[CMD_PARAMS_LEN];
} idCmd_t;

typedef struct {
    uint16_t pktFunc;
    uint16_t cmdID;
    uint16_t id;
} idRsp_t;

#pragma pack(pop)

extern bool spiFlag;
extern int16_t sleepTime;
extern int16_t tmoTime;

#endif /* SRC_GLOBAL_H_ */
