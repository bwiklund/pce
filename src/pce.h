/*****************************************************************************
 * pce                                                                       *
 *****************************************************************************/

/*****************************************************************************
 * File name:     pce.h                                                      *
 * Created:       2001-05-01 by Hampa Hug <hampa@hampa.ch>                   *
 * Last modified: 2003-04-18 by Hampa Hug <hampa@hampa.ch>                   *
 * Copyright:     (C) 1996-2003 by Hampa Hug <hampa@hampa.ch>                *
 *****************************************************************************/

/*****************************************************************************
 * This program is free software. You can redistribute it and / or modify it *
 * under the terms of the GNU General Public License version 2 as  published *
 * by the Free Software Foundation.                                          *
 *                                                                           *
 * This program is distributed in the hope  that  it  will  be  useful,  but *
 * WITHOUT  ANY   WARRANTY,   without   even   the   implied   warranty   of *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU  General *
 * Public License for more details.                                          *
 *****************************************************************************/

/* $Id: pce.h,v 1.3 2003/04/18 20:08:26 hampa Exp $ */


#ifndef PCE_H
#define PCE_H 1


#include "config.h"

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#ifdef HAVE_LIMITS_H
#include <limits.h>
#endif


typedef void (*seta_uint8_f) (void *ext, unsigned long addr, unsigned char val);
typedef void (*seta_uint16_f) (void *ext, unsigned long addr, unsigned short val);
typedef unsigned char (*geta_uint8_f) (void *ext, unsigned long addr);
typedef unsigned short (*geta_uint16_f) (void *ext, unsigned long addr);

typedef void (*set_uint8_f) (void *ext, unsigned char val);
typedef void (*set_uint16_f) (void *ext, unsigned short val);
typedef unsigned char (*get_uint8_f) (void *ext);
typedef unsigned short (*get_uint16_f) (void *ext);


#include <e8086/e8086.h>
#include <e8255/e8255.h>

#include <term.h>
#include <memory.h>
#include <keyboard.h>
#include <floppy.h>
#include <mda.h>
#include <cga.h>
#include <ibmpc.h>


#endif
