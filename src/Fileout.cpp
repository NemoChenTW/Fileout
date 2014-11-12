/*
 * Fileout.cpp
 *
 *  Created on: 2014年11月11日
 *      Author: nemo
 */

#include "header/Fileout.h"

#include "header/TimeStamp/header/TimeStamp.h"

Fileout::Fileout()
{

}

Fileout::Fileout(const string& filePath)
{
	setFilePath(filePath);
	openFile();
}

Fileout::~Fileout()
{
	closeFile();
}

/**
 * @brief	Open file.
 */
void Fileout::openFile()
{
    _fout.open(_filePath.c_str(), fstream::out | fstream::app);
}

/**
 * @brief	Close file.
 */
void Fileout::closeFile()
{
	_fout.close();
}

/**
 * @brief	Return time format.
 *
 * @return	Time stamp.
 */
string Fileout::timeFormat()
{
	TimeStamp timeStamp;
	string timeString = timeStamp.getTimeStr() + " ";

	return timeString;
}
