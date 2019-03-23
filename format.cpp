#include "stdafx.h"
#include "std_lib_facilities.h"
#include<string>
using namespace std;


int main() {
	cout << " theta | sin(theta) | cos(theta) |" << endl;
	cout << "-------+------------+------------+" << endl;
	for (int theta = -90; theta <= 90; theta += 15) {
		cout << setw(6) << theta << " |" << fixed;
		cout << " " << setw(10) << sin(theta) << " |";
		cout << " " << setw(10) << cos(theta) << " |" << endl;	
	}
	return 0;
}

