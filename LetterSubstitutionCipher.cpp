#include "stdafx.h"
#include "std_lib_facilities.h"
#include<string>
using namespace std;

string letterSubstitutionCipher(string key,string str);

int main() {
	string str, key;
	cout << "Letter substitution chiper." << endl;
	while (true){
		cout << "Enter a 26-letter key: ";
		getline(cin, key);
		if (key == "") break;
		cout << "Enter a message: ";
		getline(cin, str);
		cout << "Encode the message: " << letterSubstitutionCipher(key, str) << endl;
	}
	return 0;
}


string letterSubstitutionCipher(string key, string str)
{
	int pos;
	for (int i = 0; i < str.length() - 1; i++) {
		if (isalpha(str[i])) {
			pos = int(str[i] - 'A');
			cout << pos << endl;
			str[i] = key[pos];
		}
	}
	return str;
}
