#include "stdafx.h"
#include "std_lib_facilities.h"
#include<string>
using namespace std;

string encodeCaesarCipher(string str, int shift);

int main() {
	string str;
	int shift;
	
	cout << "This program encodes a message using a Caesar chiper." << endl;
	while (!cin.eof()) {
		cout << "Enter the number of character position to shift: ";
		cin >> shift;
		if (shift == 0) break;
		cout << "Enter a message: ";
		getline(cin, str);
		cout << "Encode the message: " << encodeCaesarCipher(str, shift) << endl;
	}
	return 0;
}



string encodeCaesarCipher(string str, int shift)
{
	for (int i = 0; i < str.length(); i++) {
		if (isalpha(str[i])) {
			if (islower(str[i]))
				str[i] = (char)((str[i] - 'a' + shift) % 26 + 'a');
			else
				str[i] = (char)((str[i] - 'A' + shift) % 26 + 'A');
		}
	}
	return str;
}
