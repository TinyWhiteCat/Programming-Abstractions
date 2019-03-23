#include "stdafx.h"
#include "std_lib_facilities.h"
using namespace std;

int permutations(int n, int k);

int main() {
	int n, k;
	cout << "enter the parameters: ";
	cin >> n >> k;
	cout << permutations(n, k) << endl;

	return 0;
}

int permutations(int n, int k)
{
	int p = 1;
	for (int i = 0; i < k; i++) {
		p *= n;
		n -= 1;
	}
	return p;
}