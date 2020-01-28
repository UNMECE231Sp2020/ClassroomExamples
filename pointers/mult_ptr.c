#include <stdio.h>

int main() {
	float *x, *y;
	float a = 6.7, b = 9.2;
	x=&a, y=&b;

	printf("%.4f\n", (*x) * (*y));

	return 0;
}

