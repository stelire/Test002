//============================================================================
// Name        : Test002.cpp
// Author      : Stelire
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

#include "RDC_GrpPixel.h"

int main(int argc, char **argv) {
	for(int i=0; i<argc; i++){
		cout << argv[i] << endl;
	}

	RDT_COLOR col = {0, 0, 0};
	RDC_GrpPixel *pPix;
	pPix = new RDC_GrpPixel[20];

	for(int i=0; i<20; i++){
		pPix[i].setPos(0, 0);
		pPix[i].setColor(col);
	}

	delete [] pPix;

	return 0;
}
