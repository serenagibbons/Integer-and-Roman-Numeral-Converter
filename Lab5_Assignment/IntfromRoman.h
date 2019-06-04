// Serena Gibbons
// BCS230
// Lab 5 Assignment
// IntfromRoman.h

#include <iostream>
#include <string>
using namespace std;

class IntfromRoman {

private:
	string rmn;
	int intgr = 0,				// integer accumulator
		pos = 0;				// position in string
	int size;					// size of string

public:
	IntfromRoman();
	void setRoman(string strng) {
		rmn = strng;
	}
	int getIntRmn(string rmn);	// get integer from Roman numeral

};