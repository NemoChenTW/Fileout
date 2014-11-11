/*
 * Fileout.h
 *
 *  Created on: 2014年11月11日
 *      Author: nemo
 */

#ifndef FILEOUT_H_
#define FILEOUT_H_

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Fileout {
public:
	Fileout();
	Fileout(const string& filePath);
	virtual ~Fileout();

	///		Return file path.
	const string& filePath() const {return _filePath;}

	///		Set file path
	void setFilePath(const string& filePath){_filePath = filePath;}

	///		Open file.
	void openFile();

	///		Close file.
	void closeFile();

    template<typename T>
    Fileout& operator<<(const T& t)
    {
    	if(_fout.is_open())
    		_fout << timeFormat() << t << endl;
    	else
    		cout << timeFormat() << t << endl;
        return *this;
    }

private:
    string _filePath;	///<	Output file path
    fstream _fout;		///<	Output file pointer

    ///		Return time format.
    string timeFormat();
};

#endif /* FILEOUT_H_ */
