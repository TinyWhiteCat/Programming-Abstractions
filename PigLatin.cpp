#include "stdafx.h"
#include "std_lib_facilities.h"
#include<string>
using namespace std;

string lineToPigLatin(string line);
string wordToPigLatin(string word);
int findFirstVowel(string word);
bool isVowel(char ch);

int main() {
	cout << "This program translates English to Pig Latin." << endl;
	string line;
	while (true) {
		cout << "Enter the text: ";
		getline(cin, line);
		if (line == "") break;
		string translation = lineToPigLatin(line);
		cout << "Pig Latin output: " << translation << endl;
	}
	return 0;
}


string lineToPigLatin(string line)
{
	string result;
	int start = -1;
	for (int i = 0; i < line.length(); i++) {
		char ch = line[i];
		if (isalpha(ch)) {
			if (start == -1) start = i;
		}
		else {
			if (start >= 0) {
				result += wordToPigLatin(line.substr(start, i - start));
				start = -1;
			}
			result += ch;
		}
	}
	if(start >=0) result+= wordToPigLatin(line.substr(start));
	return result;
}

string wordToPigLatin(string word)
{
	int vp = findFirstVowel(word);
	if (vp == -1) {
		return word;
	}else if (vp == 0) {
		return word + "way";
	}else{
		string head = word.substr(0, vp);
		string tail = word.substr(vp);
		if (isupper(word[0])) tail[0] = toupper(tail[0]);
		return tail + head + "ay";
	}
}

int findFirstVowel(string word)
{
	for (int i = 0; i < word.length(); i++) {
		if (isVowel(word[i]))
			return i;
	}
	return -1;
}

bool isVowel(char ch)
{
	if (ch == 'a' || ch == 'e' || ch == 'o' || ch == 'u' || ch == 'i')
		return true;
	else
		return false;
}


