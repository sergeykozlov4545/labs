using namespace std;
#include <iostream>
#include <cstdio>

int get_sum_dividers(int n) {
	int sum = 1;
	for (int i = 2; i <= n; i++) {
		if (n % i == 0) {
			sum += i;
		}
	}
	return sum;
}

void check_number(int n) {
	int sum_dividers = get_sum_dividers(n);
	if (sum_dividers == n + 1) {
		cout << n << " is prime number" << endl;
	} else if (sum_dividers == 2 * n) {
		cout << n << " is perfect number" << endl;
	} else {
		cout << n << " is not prime number and is not perfect number" << endl;
	}
}

int main() {
	int n;
	do {
		cout << "enter n: "; cin >> n;
		
		if (n > 0) {
			check_number(n);
		}
	} while (n > 0);

	cout << "stop work" << endl;

	getchar();
	getchar();
	return 0;
}