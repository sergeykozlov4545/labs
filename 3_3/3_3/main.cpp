#include <iostream>
#include <cstdio>
using namespace std;

double y(double x, int n) {
	double sum = 1;
	double slog = 1;
	for (int i = 1; i <= n; i++) {
		slog *= x / i;
		sum += slog;
	}
	return sum;
}

int main() {
	double x = 0;
	cout << "enter x: "; cin >> x;

	for (int i = 1; i <= 5; i++) {
		int n = 5 * i;
		printf("y(%.5f, %d) = %.10f\n", x, n, y(x, n));
	}

	getchar();
	getchar();
	return 0;
}