// Serena Gibbons
// BCS230
// Lab 5 assignment
// RomanfromInt.cpp

#include "RomanfromInt.h"

RomanfromInt::RomanfromInt() {
	
}

string RomanfromInt::getRmnInt(int i) {	// get Roman numeral from integer
	string roman[] = { "", "I", "V", "X", "L", "C", "D", "M" };
	while (i > 0) {
		if (i >= 1000) {
			i -= 1000;
			rom += roman[7];
		}
		else if (i >= 500) {
			if (i >= 900) {
				i -= 900;
				rom += (roman[5] + roman[7]);
			}
			else {
				i -= 500;
				rom += roman[6];
			}
		}
		else if (i >= 100) {
			if (i >= 400) {
				i -= 400;
				rom += (roman[5] + roman[6]);
			}
			else {
				i -= 100;
				rom += roman[5];
			}
		}
		else if (i >= 50) {
			if (i >= 90) {
				i -= 90;
				rom += (roman[4] + roman[5]);
			}
			else {
				i -= 50;
				rom += roman[4];
			}
		}
		else if (i >= 10) {
			if (i >= 40) {
				i -= 40;
				rom += (roman[3] + roman[4]);
			}
			else {
				i -= 10;
				rom += roman[3];
			}
		}
		else if (i >= 5) {
			if (i == 9) {
				i -= 9;
				rom += (roman[1] + roman[3]);
			}
			else {
				i -= 5;
				rom += roman[2];
			}
		}
		else if (i >= 1) {
			if (i == 4) {
				i -= 4;
				rom += (roman[1] + roman[2]);
			}
			else {
				i -= 1;
				rom += roman[1];
			}
		}
	}
	return rom;
}