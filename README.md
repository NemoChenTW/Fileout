Fileout
=======

Output the message to the file.

After the log file has been set and open successfuly, your message will output to the log file; otherwise to the screen as usual.


##Example##

###test.cpp###

```
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
```
