#include <stdio.h>

int main() {
	int x=9;
	int *y;
	printf("x: %d\n", x);

	y = &x;
	*y = 1;
	printf("x after: %d\n", x);

	printf("y: %p, &x: %p\n", y, &x);
	printf("&y: %p\n", &y);

	return 0;
}
