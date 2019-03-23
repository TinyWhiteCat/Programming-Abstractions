#include "stdafx.h"
#include "std_lib_facilities.h"
#include<string>
using namespace std;


bool isSentencePalindrome(string str)
{
	for (int i = 0; i < str.length(); i++) {
		if (!isalpha(str[i])) {
			str.erase(i, 1);
			i--;
		}
		if (isupper(str[i]))
			str[i] = tolower(str[i]);
	}

	string tmp = str;
	reverse(str.begin(), str.end());

	return tmp == str;
}

int main() {
	string str;

	cout << "This Program tests for sentence palindrome." << endl;
	cout << "Indicate the end of the input with a '*'." << endl;
	cout << "Enter a sentence: ";
	getline(cin, str);

	for (; str != "*";) {
		if (isSentencePalindrome(str))
			cout << "That sentence is a palindrome." << endl;
		else
			cout << "That sentence is not a palindrome." << endl;
		cout << "Enter a sentence: ";
		getline(cin, str);
	}

	return 0;
}



