using namespace std;
#include <iostream>
#include <cstdio>
#include <cmath>

double y1(double x, double y) {
	return pow(cos(x), 4) + pow(sin(y), 2) + pow(sin(2 * x), 2) / 2 - 1;
}

double y2(double x, double y) {
	return sin(y + x) * sin(y - x);
}

int main() {
	double x, y;
	cout << "enter x: "; cin >> x;
	cout << "enter y: "; cin >> y;

	cout << "y1 = " << y1(x, y) << endl;
	cout << "y2 = " << y2(x, y) << endl;

	getchar();
	getchar();
	return 0;
}