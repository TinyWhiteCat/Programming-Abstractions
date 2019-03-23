#include "stdafx.h"
#include "std_lib_facilities.h"
#include<string>
using namespace std;

string Obenglobish(string word);
bool isVowel(char ch);

int main() {
	string word;
	while (true){
		cout << "Enter a word: ";
		getline(cin, word);
		if (word == "") break;
		string translation = Obenglobish(word);
		cout << word << "->" << translation << endl;
	}
	return 0;
}


string Obenglobish(string word)
{
	for (int i = word.length() - 1; i >= 0; i--) {
		if (isVowel(word[i])) {
			if (word[i] != 'e' && i == word.length() - 1)
				word.insert(i, "ob");
			else if (i > 0 && i!= word.length() - 1 && !isVowel(word[i - 1]))
				word.insert(i, "ob");
			else if (i == 0)
				word.insert(i, "ob");
     	}
		cout << word << endl;
		
	}
	return word;
}

bool isVowel(char ch)
{
	if (ch == 'a' || ch == 'e' || ch == 'o' || ch == 'u' || ch == 'i')
		return true;
	else
		return false;
}
