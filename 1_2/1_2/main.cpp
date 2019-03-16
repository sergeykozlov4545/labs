using namespace std;
#include <iostream>
#include <cstdio>
#include <cmath>

const double PI = 3.141592653589793238462643383279502884;

int main() {
	double p, h, r;
	cout << "enter p: "; cin >> p;
	cout << "enter h: "; cin >> h;
	cout << "enter r: "; cin >> r;

	double s = 2 * PI * r;
	double v = PI * r * r * h;
	double m = p * v;

	cout << "s = " << s << endl;
	cout << "v = " << v << endl;
	cout << "m = " << m << endl;

	getchar();
	getchar();
	return 0;
}