/**
******************************************************************************
* @file    platform.h
* @author  William Xu
* @version V1.0.0
* @date    05-Oct-2016
* @brief   This file provides all MICO Peripherals defined for current platform.
******************************************************************************
*
*  The MIT License
*  Copyright (c) 2014 MXCHIP Inc.
*
*  Permission is hereby granted, free of charge, to any person obtaining a copy
*  of this software and associated documentation files (the "Software"), to deal
*  in the Software without restriction, including without limitation the rights
*  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
*  copies of the Software, and to permit persons to whom the Software is furnished
*  to do so, subject to the following conditions:
*
*  The above copyright notice and this permission notice shall be included in
*  all copies or substantial portions of the Software.
*
*  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
*  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
*  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
*  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
*  WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR
*  IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
******************************************************************************
*/



#ifndef __MICO_BOARD_H__
#define __MICO_BOARD_H__

#include <stdint.h>
#include "board.h"

#ifdef __cplusplus
extern "C"
{
#endif

/******************************************************
 *                      Macros
 ******************************************************/

/******************************************************
 *                    Constants
 ******************************************************/

enum {
    MICO_PARTITION_ERROR = -1,
    MICO_PARTITION_BOOTLOADER,
    MICO_PARTITION_APPLICATION,
    MICO_PARTITION_ATE,
    MICO_PARTITION_OTA_TEMP,
    MICO_PARTITION_RF_FIRMWARE,
    MICO_PARTITION_PARAMETER_1,
    MICO_PARTITION_PARAMETER_2,
    MICO_PARTITION_PARAMETER_3,
    MICO_PARTITION_PARAMETER_4,
    MICO_PARTITION_LINK_KEY,
    MICO_PARTITION_BT_FIRMWARE,
    MICO_PARTITION_SPIFFS,
    MICO_PARTITION_MAX,
    MICO_PARTITION_NONE,
};

/* I/O connection <-> Peripheral Connections */
#define BOOT_SEL        MICO_GPIO_19
#define MFG_SEL         MICO_GPIO_NONE
#define MICO_RF_LED     MICO_GPIO_NONE
#define MICO_SYS_LED    MICO_GPIO_19
#define EasyLink_BUTTON MICO_GPIO_23

   
/******************************************************
 *                   Enumerations
 ******************************************************/

#ifdef __cplusplus
} /*extern "C" */
#endif

#endif
