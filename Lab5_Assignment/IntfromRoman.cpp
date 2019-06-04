// Serena Gibbons
// BCS230
// Lab 5 Assignment
// IntfromRoman.cpp

#include "IntfromRoman.h"

IntfromRoman::IntfromRoman() {

};

int IntfromRoman::getIntRmn(string rmn) {
	size = rmn.length();
	while (pos < size) {
		if (rmn[pos] == 'I') {
			pos++;
			if (rmn[pos] == 'V') {	// if "I" precedes "V", add 4
				intgr += 4;
				pos++;
			}
			else if (rmn[pos] == 'X') {	// if "I" precedes "X", add 9
				intgr += 9;
				pos++;
			}
			else {
				intgr += 1;
			}
		}
		if (rmn[pos] == 'V') {
			intgr += 5;
			pos++;
		}
		if (rmn[pos] == 'X') {
			pos++;
			if (rmn[pos] == 'L') {	// if "X" precedes "L", add 40
				intgr += 40;
				pos++;
			}
			else {
				intgr += 10;
			}
		}
		if (rmn[pos] == 'L') {
			intgr += 50;
			pos++;
		}
		if (rmn[pos] == 'C') {
			pos++;
			if (rmn[pos] == 'M') {	// if "C" precedes "M", add 900
				intgr += 900;
				pos++;
			}
			else {
				intgr += 100;
			}
		}
		if (rmn[pos] == 'D') {
			intgr += 500;
			pos++;
		}
		if (rmn[pos] == 'M') {
			intgr += 1000;
			pos++;
		}
	}

	return intgr;
}