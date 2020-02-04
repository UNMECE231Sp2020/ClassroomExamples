#include <stdio.h>

int main() {
	struct Bleh {
		double f;
		int z;
		char q;
	};

	char c = 'h';
	double d = 3.14159;
	float f = 1.44;
	int i = 42;
	struct Bleh st= {6.2, 4, 'y'};

	void *v;

	v=&c;
	printf("%c ", *( (char *)v ) );

	v=&d;
	printf("%lf ", *( (double *)v ) );

	v=&f;
	printf("%f ", *( (float *)v ) );

	v=&i;
	printf("%d ", *( (int *)v ) );

	v=&st;
	printf("%lf, %d, %c\n", (*( (struct Bleh *)v )).f, (*( (struct Bleh *)v )).z, (*( (struct Bleh *)v )).q);

	float t[3] = {4.5, 6.7, 1.9};

	v=t;
	v=&t;

	//float *u = t;

	for(i=0; i<3; i++) {
		printf("%.1f ", *( (float *)v+i ) );
		//printf("%.1f ", *(u+i));
	}
	printf("\n");

	return 0;
}

