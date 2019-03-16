using namespace std;
#include <iostream>
#include <cstdio>

double f(double x) {
	if (x <= -4 || x >= 5) return 0;
	if (-4 < x && x <= -3) return x + 5;
	if (-3 < x && x <= -2) return -x - 1;
	if (-2 < x && x <= -1) return 1;
	if (-1 < x && x <= 1) return -x;
	if (1 < x && x <= 2) return x - 2;
	if (2 < x && x <= 3) return -2 * x + 4;
	if (3 < x && x <= 4) return x - 5;
	return -1;
}

bool inG(double x, double y) {
	if (y < 0) {
		return y >= x - 2 || y >= -x - 2;
	}
	if (y == 0) {
		return -2 <= x && x <= 2;
	}
	return x * x + y * y <= 1;
}

int main() {
	double x, y;
	cout << "enter x: "; cin >> x;
	cout << "enter y: "; cin >> y;

	cout << "f(x) = " << f(x) << endl;
	
	cout << "(" << x << "," << y <<") is in G: ";
	if (inG(x, y)) {
		cout << "yes" << endl;
	} else {
		cout << "no" << endl;
	}

	getchar();
	getchar();
	return 0;
}