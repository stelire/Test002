/*
 * RD_graphics_base.h
 *
 *  Created on: 2018/08/29
 *      Author: stelire
 */

#ifndef RD_GRAPHICS_BASE_H_
#define RD_GRAPHICS_BASE_H_

#include "RD_common.h"

enum RDE_COLOR_FMT{
	RD_CF_ARGB888 = 0,
	RD_CF_RGBA888,
	RD_CF_RGB565,
	RD_CF_ARGB555,
	RD_CF_YUV422,
	RD_CF_YUV420
};

struct RDT_POSITION{
	UI_16	x;
	UI_16	y;
};

struct RDT_COLOR{
	UI_8	red;
	UI_8	grn;
	UI_8	blu;
};

struct RDT_SCREEN{
	F_32	pxlClk;
	UI_32	adrs;
	UI_16	Hact;
	UI_16	Hfrp;
	UI_16	Hpls;
	UI_16	Hbkp;
	UI_16	Vact;
	UI_16	Vfrp;
	UI_16	Vpls;
	UI_16	Vbkp;
	UI_8	clrDpt;
	UI_8	scrnNo;
};


#endif /* RD_GRAPHICS_BASE_H_ */
