#include <stdio.h>

int add(int x, int y) {
	return x + y;
}

int sub(int x, int y) {
	return x - y;
}

int mult(int x, int y) {
	return x * y;
}

int my_pow(int x, int y) {
	int i, prod=1;
	for(i=0; i<y; i++) {
		prod *= x;
	}
	return prod;
}

int hdlr(int (*fn_hdlr) (int, int), int x, int y) {
	int dummy = x>0 ? x : -x;
	int dummy2 = y>0 ? y : -y;

	/*
	if(y>0) {
		return y;
	}
	else {
		return -y;
	}
	*/

	//printf("%d ", fn_hdlr(dummy, dummy2));
	//printf("%d ", fn_hdlr(x, y));
	return fn_hdlr(dummy, dummy2);
}

int main() {
	int (*int_fn[4])(int, int) = {add, sub, mult, my_pow};
	//void (*void_fn)(double, float);

	/*
	int i;
	for(i=0; i<4; i++) {
		printf("%d ", int_fn[i](2, 5));
	}
	printf("\n");
	*/

	printf("%d \n", hdlr(add, -7, 5));
	printf("%d\n", hdlr(my_pow, 2, -5));

	return 0;
}








