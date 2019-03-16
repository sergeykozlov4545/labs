using namespace std;
#include <iostream>
#include <cstdio>
#include <cmath>

const double g = 9.81;

int main() {
	double h, l;
	cout << "enter h: "; cin >> h;
	cout << "enter l: "; cin >> l;

	double alpha = atan(4 * h / l);
	double v = sqrt(g * l / sin(2 * alpha));
	cout << "alpha = " << alpha << endl;
	cout << "v = " << v << endl;

	getchar();
	getchar();
	return 0;
}