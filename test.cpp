/*
 * test.cpp
 *
 *  Created on: 2014年11月11日
 *      Author: nemo
 */

#include "src/libFileout.h"

#include <iostream>
using namespace std;

int main()
{
	Fileout fout("file.log");
	fout << "Test Message";

	fout.closeFile();
	fout << "Test Message2";

	fout.openFile();
	fout << "Test Message3";
	return 0;
}
