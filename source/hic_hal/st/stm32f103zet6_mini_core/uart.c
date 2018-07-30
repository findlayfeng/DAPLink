/**
 * @file    uart.c
 * @brief
 *
 * DAPLink Interface Firmware
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

#include "uart.h"
#include "DAP_config.h"

int32_t uart_initialize(void);
int32_t uart_uninitialize(void);
int32_t uart_reset(void);
int32_t uart_set_configuration(UART_Configuration *config);
int32_t uart_get_configuration(UART_Configuration *config);
int32_t uart_write_free(void);
int32_t uart_write_data(uint8_t *data, uint16_t size);
int32_t uart_read_data(uint8_t *data, uint16_t size);
void uart_set_control_line_state(uint16_t ctrl_bmp);
void uart_software_flow_control(void);
void uart_enable_flow_control(bool enabled);

#define __wait_todo() util_assert(0)

int32_t uart_initialize(void)
{
#if SWO_UART
    __wait_todo();
    return 1;
#else
    return 0;
#endif
}

int32_t uart_uninitialize(void)
{
#if SWO_UART
    __wait_todo();
    return 1;
#else
    return 0;
#endif
}

int32_t uart_reset(void)
{
#if SWO_UART
    __wait_todo();
    return 1;
#else
    return 0;
#endif
}

int32_t uart_set_configuration(UART_Configuration *config)
{
#if SWO_UART
    __wait_todo();
    return 1;
#else
    return 0;
#endif
}

int32_t uart_get_configuration(UART_Configuration *config)
{
#if SWO_UART
    __wait_todo();
    return 1;
#else
    return 0;
#endif
}

int32_t uart_write_free(void)
{
#if SWO_UART
    __wait_todo();
    return 1;
#else
    return 0;
#endif
}

int32_t uart_write_data(uint8_t *data, uint16_t size)
{
#if SWO_UART
    __wait_todo();
    return 1;
#else
    return 0;
#endif
}

int32_t uart_read_data(uint8_t *data, uint16_t size)
{
#if SWO_UART
    __wait_todo();
    return 1;
#else
    return 0;
#endif
}

void uart_set_control_line_state(uint16_t ctrl_bmp)
{
#if SWO_UART
    __wait_todo();
#endif
}

void uart_software_flow_control(void)
{
#if SWO_UART
    __wait_todo();
#endif
}

void uart_enable_flow_control(bool enabled)
{
#if SWO_UART
    __wait_todo();
#endif
}
