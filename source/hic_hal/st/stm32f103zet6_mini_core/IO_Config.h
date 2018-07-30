/**
 * @file    IO_Config.h
 * @brief
 *
 * DAPLink Interface Firmware
 * Copyright (c) 2009-2016, ARM Limited, All Rights Reserved
 * Copyright (c) 2018, Findlay Feng, All Rights Reserved
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License"); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef __IO_CONFIG_H__
#define __IO_CONFIG_H__

#include "stm32f1xx.h"
#include "compiler.h"
#include "daplink.h"

#define __HAL_RCC_USB_GPIO_CLK_ENABLE __HAL_RCC_GPIOA_CLK_ENABLE

#define HID_LED_PORT GPIOC
#define HID_LED_PIN GPIO_PIN_13

#define CDC_LED_PORT GPIOC
#define CDC_LED_PIN GPIO_PIN_13

#define MSC_LED_PORT GPIOC
#define MSC_LED_PIN GPIO_PIN_13

#define __HAL_RCC_LED_GPIO_CLK_ENABLE __HAL_RCC_GPIOC_CLK_ENABLE

#define LED_CONNECTED_PORT GPIOC
#define LED_CONNECTED_PIN GPIO_PIN_13
#define LED_CONNECTED_OUT(__bit)                          \
    do                                                    \
    {                                                     \
        if (__bit)                                        \
            LED_CONNECTED_PORT->BRR = LED_CONNECTED_PIN;  \
        else                                              \
            LED_CONNECTED_PORT->BSRR = LED_CONNECTED_PIN; \
    } while (0)

#define LED_RUNNING_PORT GPIOC
#define LED_RUNNING_PIN GPIO_PIN_13
#define LED_RUNNING_OUT(__bit)                        \
    do                                                \
    {                                                 \
        if (__bit)                                    \
            LED_RUNNING_PORT->BRR = LED_RUNNING_PIN;  \
        else                                          \
            LED_RUNNING_PORT->BSRR = LED_RUNNING_PIN; \
    } while (0)

#define SWDIO_TMS_PORT GPIOA
#define SWDIO_TMS_PIN GPIO_PIN_7

#define SWCLK_TCK_PORT GPIOA
#define SWCLK_TCK_PIN GPIO_PIN_5

#define nRESET_PORT GPIOA
#define nRESET_PIN GPIO_PIN_4

#define __HAL_RCC_DAP_GPIO_CLK_ENABLE() \
    do                                  \
    {                                   \
        __HAL_RCC_GPIOA_CLK_ENABLE();   \
        __HAL_RCC_GPIOC_CLK_ENABLE();   \
    } while (0)

#endif
