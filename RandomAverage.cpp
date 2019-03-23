#include "stdafx.h"
#include "std_lib_facilities.h"
using namespace std;

void initRandomSeed() {
	static bool initialized = false;
	if (!initialized) {
		srand(int(time(NULL)));
		initialized = true;
	}
}

/*
int randomInteger(int low, int high) {
	initRandomSeed();
	double d = rand() / (double(RAND_MAX) + 1);
	double s = d * (double(high) - low + 1);
	return int(floor(low) + s);
}
*/

double randomReal(double low, double high) {
	initRandomSeed();
	double d = rand() / (double(RAND_MAX) + 1);
	double s = d * (high - low);
	return low + s;
}

bool randomChance(double p) {
	initRandomSeed();
	return randomReal(0, 1) < p;
}

void setRandomSeed(int seed) {
	initRandomSeed();
	srand(seed);
}

int main() {
	int n;
	double sum = 0;
	
	randomChance(1);
	cout << "Enter the time: ";
	cin >> n;

	for (int i = 0; i < n; i++) {
		double m = randomReal(0, 1);
		cout << m << endl;
		sum += m;
	}
	cout << "The  random averagem number is " << sum / n << endl;

	return 0;
}



