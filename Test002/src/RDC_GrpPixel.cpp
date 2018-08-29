/*
 * RDC_GrpPixel.cpp
 *
 *  Created on: 2018/08/29
 *      Author: stelire
 */

#include "RDC_GrpPixel.h"

RDC_GrpPixel::RDC_GrpPixel(void)
{
	m_nPos = {0, 0};
	m_tColor = {0, 0, 0};
}

RDC_GrpPixel::RDC_GrpPixel(UI_16 x, UI_16 y, RDT_COLOR color)
{
	m_nPos.x = x;
	m_nPos.y = y;
	m_tColor = color;
}

RDC_GrpPixel::RDC_GrpPixel(RDT_POSITION pos, RDT_COLOR color)
{
	m_nPos = pos;
	m_tColor = color;
}

RDC_GrpPixel::~RDC_GrpPixel(void)
{
}

bool RDC_GrpPixel::setPos(UI_16 x, UI_16 y)
{
	bool bRslt = true;

	if(1){
		m_nPos.x = x;
	} else {
		bRslt = false;
	}
	if(1){
		m_nPos.y = y;
	} else {
		bRslt = false;
	}
	return bRslt;
}

bool RDC_GrpPixel::setPos(RDT_POSITION pos)
{
	bool bRslt = true;

	if(1){
		m_nPos = pos;
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

UI_16 RDC_GrpPixel::getPosX(void)
{
	return m_nPos.x;
}

UI_16 RDC_GrpPixel::getPosY(void)
{
	return m_nPos.y;
}

void RDC_GrpPixel::getPos(RDT_POSITION *ppos)
{
	*ppos = m_nPos;
}

void RDC_GrpPixel::getColor(RDT_COLOR *pcolor)
{
	*pcolor = m_tColor;
}



