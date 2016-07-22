/******************************************************************************
* header file of lowlevel cpu arch functions
* Copyright (C) 2015-2016 jiangxiaogang <kerndev@foxmail.com>
*
* This file is part of klite.
* 
* klite is free software; you can redistribute it and/or modify it under the 
* terms of the GNU Lesser General Public License as published by the Free 
* Software Foundation; either version 2.1 of the License, or (at your option) 
* any later version.
*
* klite is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
* Lesser General Public License for more details.
*
* You should have received a copy of the GNU Lesser General Public
* License along with klite; if not, write to the Free Software
* Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
******************************************************************************/
#ifndef __CPU_H
#define __CPU_H

void cpu_init(void);
void cpu_idle(void);
void cpu_core_init(void);
void cpu_tick_init(void);
void cpu_irq_disable(void);
void cpu_irq_enable(void);
void cpu_tcb_switch(void);
void cpu_tcb_init(struct tcb* tcb, uint32_t sp_min, uint32_t sp_max);

#endif
