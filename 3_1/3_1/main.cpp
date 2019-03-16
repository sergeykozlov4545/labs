using namespace std;
#include <iostream>
#include <cstdio>

double f(double a, double b, double c, double x) {
	if (a < 0 && c != 0) {
		return a * x * x + b * x + c;
	}
	if (a > 0 && c == 0) {
		return -a / (x - c);
	}
	return a * (x + c);
}

int main() {
	double a, b, c;
	cout << "enter a: "; cin >> a;
	cout << "enter b: "; cin >> b;
	cout << "enter c: "; cin >> c;

	double xl, xr, h;
	cout << "enter start value: "; cin >> xl;
	cout << "enter end value: "; cin >> xr;
	cout << "enter step: "; cin >> h;
	
	double x = xl;
	while (x <= xr) {
		cout << "current x: " << x << ", f(x) = " << f(a, b, c, x) << endl;
		x += h;
	}

	getchar();
	getchar();
	return 0;
}