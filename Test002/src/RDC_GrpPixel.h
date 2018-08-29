/*
 * RDC_GrpPixel.h
 *
 *  Created on: 2018/08/29
 *      Author: stelire
 */

#ifndef RDC_GRPPIXEL_H_
#define RDC_GRPPIXEL_H_

#include "RD_graphics_base.h"

class RDC_GrpPixel
{
public:
	RDC_GrpPixel(void);
	RDC_GrpPixel(UI_16 x, UI_16 y, RDT_COLOR color);
	RDC_GrpPixel(RDT_POSITION pos, RDT_COLOR color);
	~RDC_GrpPixel(void);

private:
	RDT_POSITION m_tPos;
	RDT_COLOR m_tColor;

public:
	bool setPos(UI_16 x, UI_16 y);
	bool setPos(RDT_POSITION pos);
	bool setColor(RDT_COLOR color);
	UI_16 getPosX(void);
	UI_16 getPosY(void);
	void getPos(RDT_POSITION *ppos);
	void getColor(RDT_COLOR *pcolor);
};

#endif /* RDC_GRPPIXEL_H_ */
