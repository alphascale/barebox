/*
 * (C) Copyright 2007 Juergen Beisert <jbe@pengutronix.de>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston,
 * MA 02111-1307 USA
 */

#ifndef __CONFIG_H
#define __CONFIG_H

#include <asm/mach-types.h>

#define CONFIG_ARCH_NUMBER 1147 /* FIXME */
#define CONFIG_BOOT_PARAMS 0x08000100

/*
 * Definitions related to passing arguments to kernel.
 */

#define CFG_MALLOC_LEN		(4096 << 10)

#define CONFIG_STACKSIZE	(120<<10)      /* stack size		     */

/* #define CONFIG_SYSPLL_CLK_FREQ	26000000 */

/* FIXME */
#define CONFIG_MX31_HCLK_FREQ	26000000
#define CONFIG_MX31_CLK32	32000

#endif

/* nothing to do here yet */