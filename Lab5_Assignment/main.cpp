// Serena Gibbons
// BCS230
// Lab 5 Assignment
// main.cpp

#include <iostream>
#include <string>
#include "RomanfromInt.h"
#include "IntfromRoman.h"
using namespace std;

int main() {

	string str;	// Roman numeral input
	int menuSelection,
		x = 1;	// integer input: initialized to 1 because no Roman numeral 0

	cout << "This program allows you to convert any number from Roman numeral to Integer or from Integer to Roman Numeral.\n" << endl;

	// Menu to select Roman to Int or Int to Roman
	do {
		cout << "Please select conversion type (or -1 to quit):\n";
		cout << "1. Roman numeral to Integer" << endl;
		cout << "2. Integer to Roman numeral" << endl;
		cin >> menuSelection;

		if (menuSelection == 2) {
			// do while loop to validate integer input 
			RomanfromInt rn;
			do {
				cout << "Enter an integer value: ";
				cin >> x;
				if (x < 1) {
					cout << "Integer must be greater than or equal to 1. Please try again.\n";
				}
			} while (x < 1);
			cout << "The Roman numeral for (" << x << ") is " << rn.getRmnInt(x) << endl;
			cout << endl;
		}
		else if (menuSelection == 1) {
			IntfromRoman nr;
			cout << "Enter a Roman numeral value: ";
			cin >> str;
			nr.setRoman(str);
			cout << "The Int for (" << str << ") is " << nr.getIntRmn(str) << endl;
			cout << endl;
		}
	} while (menuSelection != -1);

	cout << "\nExiting menu.\n";

	system("pause");
	return 0;
}