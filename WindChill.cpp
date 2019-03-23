#include "stdafx.h"
#include "std_lib_facilities.h"
#include<string>
using namespace std;

int getInterger(double x);

double windChill(double v, double t);

int main() {
	double v = 5;
	cout << "Calm |  40   35   30   25   20   15   10    5    0   -5  -10  -15  -20  -25  -30  -35  -40  -45" << endl;
	cout << "-----+------------------------------------------------------------------------------------------" << endl;
	for (int i = 0; i < 12; i++) {
		double t = 40;
		cout << setw(4) << v << " |";
		for (int j = 0; j < 18; j++) {
			cout << setw(4) << windChill(v, t) << " ";
			t -= 5;
		}
		cout << endl;
		v += 5;
	}

	return 0;
}

int getInterger(double x) {
	if (x < 0)
		return int(x - 0.5);
	else
		return int(x + 0.5);
}

double windChill(double v, double t) {
	double index;

	if (v == 0)
		return t;
	if (t > 40)
		error("The wind-chill index is undifined!");

	index = 35.74 + 0.6215*t - 35.75*pow(v, 0.16) + 0.4275*t*pow(v, 0.16);

	return getInterger(index);
}

