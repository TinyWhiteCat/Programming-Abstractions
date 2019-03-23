#include "stdafx.h"
#include "std_lib_facilities.h"
using namespace std;

string replaceAll(string str, char c1, char c2)
{
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == c1)
			str[i] = c2;
	}

	return str;
}

string replaceAll(string str, string s1, string s2)
{
	int pos = str.find(s1);
	while (pos <= str.length() - s1.length()) {
		str.replace(pos, s1.length(), s2);
		pos = str.find(s1, pos + 1);
	}
	return str;
}

int main() {
	string str, s1, s2;

	cout << "enter the word and the alphabet that you want to replace : ";
	cin >> str >> s1 >> s2;
	cout << replaceAll(str, s1, s2) << endl;

	return 0;
}