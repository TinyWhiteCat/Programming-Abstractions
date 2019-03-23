#include "stdafx.h"
#include "std_lib_facilities.h"
#include<string>
using namespace std;

string addCommas(string digits) {
	int number = digits.length();
	for (int i = number - 3; i > 0; i -= 3) {
		digits.insert(i, ",");
	}
	return digits;
}

int main() {
	while (true) {
		string digits;
		cout << "Enter a number: ";
		getline(cin, digits);
		if (digits == "")break;
		cout << addCommas(digits) << endl;
	}
	return 0;
}