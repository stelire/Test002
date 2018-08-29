/*
 * RDC_GrpPixel.cpp
 *
 *  Created on: 2018/08/29
 *      Author: stelire
 */

#include "RDC_GrpPixel.h"

RDC_GrpPixel::RDC_GrpPixel(void)
{
	m_nPosX = 0;
	m_nPosY = 0;
	m_tColor = {0, 0, 0};
}

RDC_GrpPixel::RDC_GrpPixel(UI_16 x, UI_16 y, RDT_COLOR color)
{
	m_nPos.x = x;
	m_nPos.y = y;
	m_tColor = color;
}

RDC_GrpPixel::~RDC_GrpPixel(void)
{
}

bool RDC_GrpPixel::setPos(UI_16 x, UI_16 y)
{
	bool bRslt = true;

	if(1){
		m_nPosX = x;
	} else {
		bRslt = false;
	}
	if(1){
		m_nPosY = y;
	} else {
		bRslt = false;
	}
	return bRslt;
}

bool RDC_GrpPixel::setColor(RDT_COLOR color)
{
	bool bRslt = true;

	if(1){
		m_tColor = color;
	} else {
		bRslt = false;
	}
	return bRslt;
}

void RDC_GrpPixel::getPos(UI_16 *px, UI_16 *py)
{
	*px = m_nPosX;
	*py = m_nPosY;
}

void RDC_GrpPixel::getColor(RDT_COLOR *pcolor)
{
	*pcolor = m_tColor;
}



