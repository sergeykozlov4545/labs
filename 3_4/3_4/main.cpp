using namespace std;
#include <iostream>
#include <cstdio>

int main() {
	double sum = 5;
	for (int i = 0; i < 18; i++) {
		sum = sum * 112 / 100 + 5;
	}
	printf("total sum: %.10f\n", sum);
	getchar();
	return 0;
}