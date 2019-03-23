#include "stdafx.h"
#include "std_lib_facilities.h"
using namespace std;

int scrabble(string str) {
	int sore = 0;
	int sum = 0;
	char word;
	
	for(int i=0;i<str.length();i++){
		word = str[i];

		switch (word)
		{
		case 'A': case 'E': case 'I': case 'L': case 'N': case 'O': case 'R': case 'S': case 'T': case 'U':
			sore = 1;
			break;
		case 'D': case 'G':
			sore = 2;
			break;
		case 'B': case 'C': case 'M': case 'P':
			sore = 3;
			break;
		case 'F': case 'H': case 'V': case 'W': case 'Y':
			sore = 4;
			break;
		case 'K':
			sore = 5;
			break;
		case 'J': case 'X':
			sore = 8;
			break;
		case 'Q': case 'Z':
			sore = 10;
			break;
		}

		sum += sore;
		sore = 0;

	}
	return sum;
}

int main() {
	int sore;
	string str;

	cout << "enter a word: ";
	cin >> str;
	cout << scrabble(str) << endl;

	return 0;
}
