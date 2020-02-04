#include <stdio.h>
#include <stdlib.h>

int main() {
	int *i = (int *) malloc(1 * sizeof(int));
	free(i);

	int j;
	/*
	double *scores = (double *) malloc(5 * sizeof(double));

	printf("Please enter 5 values: ");
	for(j=0; j<5; j++) {
		scanf("%lf", scores+j);
	}

	for(j=0; j<5; j++) {
		printf("%lf ", *(scores+j));
	}

	free(scores);
	*/

	float *grades = (float *) calloc(4, sizeof(float));

	for(j=0; j<4; j++) {
		printf("%f ", *(grades+j));
	}
	printf("\n");

	free(grades);
	return 0;
}









