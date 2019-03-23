#include "stdafx.h"
#include "std_lib_facilities.h"
#include<string>
using namespace std;

string invertKey(string key, string str);

int main() {
	string str, key;
	cout << "Letter substitution chiper." << endl;
	while (true) {
		cout << "Enter a 26-letter key: ";
		getline(cin, key);
		if (key == "") break;
		cout << "Enter a message: ";
		getline(cin, str);
		cout << "Encode the message: " << invertKey(key, str) << endl;
		
	}
	return 0;
}

string invertKey(string key, string str)
{
	int pos;
	for (int i = 0; i < str.length(); i++) 
		if (isalpha(str[i])) 
			for (int j = 0; j < 26; j++) 
				if (str[i] == key[j]) {
					pos = int(j + 'A');
					str[i] = (char)pos;
					break;
				}
	return str;
}
