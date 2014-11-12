/*
 * TimeStamp.h
 *
 *  Created on: 2014/11/12
 *      Author: nemo
 */

#ifndef TIMESTAMP_H_
#define TIMESTAMP_H_

#include <sys/time.h>
#include <string>
#include "stdio.h"

using namespace std;

class TimeStamp {
public:
	TimeStamp();
	virtual ~TimeStamp();

	///		Get time string.
	void getTimeStr(char *timeStr);

	///		Get time string.
	string getTimeStr();

	///		Get time string.
	string getTimeStrWithoutParentheses();

	///		Get time string as log file name.
	string getTimeStrAsFileName();

private:
	string wday[7]={"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};
	struct timeval timep;
	struct tm *p;
};

#endif /* TIMESTAMP_H_ */
