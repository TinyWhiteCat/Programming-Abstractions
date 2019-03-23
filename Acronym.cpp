#include "stdafx.h"
#include "std_lib_facilities.h"
using namespace std;

string acronym(string str) {
	char alphabet = toupper(str[0]);
	string acronym;
	acronym += alphabet;

	for (int i = 0; i < str.length(); i++) {
		if ((ispunct(str[i]) || isspace(str[i])) && isalpha(str[i + 1])) {
			alphabet = toupper(str[i + 1]);
			acronym += alphabet;
		}
	}
	return acronym;
}

int main() {
	string wordGroup;

	cout << "Enter the word group:  ";
	getline(cin, wordGroup);
	cout << "The acronym is: " << acronym(wordGroup) << endl;

	return 0;
}