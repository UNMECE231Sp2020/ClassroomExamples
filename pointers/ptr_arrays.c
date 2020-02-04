#include <stdio.h>

int main() {
	double z[4] = {9.2, 0.7, 3.5, 2.1};
	printf("z: %p, &z: %p, &z[0]: %p\n", z, &z, &z[0]);

	int i;
	for(i=0; i<4; i++) {
		*(z+i) = *(z+i) + 1;
	}

	for(i=0; i<4; i++) {
		printf("%.2lf ", *(z+i));
	}
	printf("\n");

	return 0;
}
