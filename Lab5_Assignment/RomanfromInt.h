// Serena Gibbons
// BCS230
// Lab 5 assignment
// RomanfromInt.h

#include <iostream>
#include <string>
using namespace std;

class RomanfromInt {

private:
	string rom;					// roman accumulator

public:
	RomanfromInt();
	string getRmnInt(int i);	// get Roman numeral from integer

};