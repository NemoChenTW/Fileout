/*
 * TimeStamp.cpp
 *
 *  Created on: 2014/11/12
 *      Author: nemo
 */

#include "header/TimeStamp.h"

TimeStamp::TimeStamp() {
}

TimeStamp::~TimeStamp() {
	// TODO Auto-generated destructor stub
}

/**
 * @brief	Get time string.
 *
 * @param 	timeStr		For storing time string.
 *
 * Format: (2014.11.12, 15:51:22.236)
 */
void TimeStamp::getTimeStr(char *timeStr)
{
	string ReturnString;
	gettimeofday(&timep, NULL);
	p = localtime(&timep.tv_sec);
	sprintf(timeStr, "(%04d.%02d.%02d, %02d:%02d:%02d.%03d) ",
			(1900 + p->tm_year), (1 + p->tm_mon), p->tm_mday,
			p->tm_hour, p->tm_min, p->tm_sec, timep.tv_usec/1000);

	ReturnString = timeStr;
}

/**
 * @brief	Get time string.
 *
 * @return	Time string.
 *
 * Format: (2014.11.12, 15:51:22.236)
 */
string TimeStamp::getTimeStr()
{
	char timeStr[256];
	string ReturnString;
	gettimeofday(&timep, NULL);
	p = localtime(&timep.tv_sec);
	sprintf(timeStr, "(%04d.%02d.%02d, %02d:%02d:%02d.%03d) ",
			(1900 + p->tm_year), (1 + p->tm_mon), p->tm_mday,
			p->tm_hour, p->tm_min, p->tm_sec,
			timep.tv_usec / 1000);
	ReturnString = timeStr;
	return ReturnString;
}

/**
 * @brief	Get time string.
 *
 * @return	Time string.
 *
 * Format: 2014.11.12, 15:51:22.236
 */
string TimeStamp::getTimeStrWithoutParentheses()
{
	char timeStr[256];
	string ReturnString;
	gettimeofday(&timep, NULL);
	p = localtime(&timep.tv_sec);
	sprintf(timeStr, "%04d.%02d.%02d, %02d:%02d:%02d.%03d", (1900 + p->tm_year),
			(1 + p->tm_mon), p->tm_mday, p->tm_hour, p->tm_min,
			p->tm_sec, timep.tv_usec/1000);
	ReturnString = timeStr;
	return ReturnString;
}

/**
 * @brief	Get time string as log file name.
 *
 * @return	Log file name with time string.
 *
 * Format: Log20141112
 */
string TimeStamp::getTimeStrAsFileName()
{
	char timeStr[256];
	string ReturnString;
	gettimeofday(&timep, NULL);
	p = localtime(&timep.tv_sec);
	sprintf(timeStr,"Log%04d%02d%02d"
				,(1900+p->tm_year), (1+p->tm_mon),p->tm_mday);
	ReturnString = timeStr;
	return ReturnString;
}
