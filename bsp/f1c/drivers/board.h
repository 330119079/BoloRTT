/*
 * File      : board.h
 * This file is part of RT-Thread RTOS
 * COPYRIGHT (C) 2017, RT-Thread Development Team
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License along
 *  with this program; if not, write to the Free Software Foundation, Inc.,
 *  51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 *
 * Change Logs:
 * Date           Author       Notes
 * 2017-5-30      Bernard      the first version
 */

#ifndef _BOARD_H_
#define _BOARD_H_

#include <stdint.h>

extern unsigned char __bss_start;
extern unsigned char __bss_end;
/*
4M:APP       0x80000000-0x803FFFFF
4M:GRAM      0x80400000-0x807FFFFF
24M:HEAP     0x80800000-END
*/
#define RT_HW_HEAP_BEGIN    (void*)&__bss_end
#define RT_HW_HEAP_END      (void*)(0x80000000 + 24 * 1024 * 1024)

// #define RT_HW_HEAP_BEGIN    (void*)0x80800000
// #define RT_HW_HEAP_END      (void*)(0x80800000 + 24 * 1024 * 1024)

void rt_hw_board_init(void);

#endif