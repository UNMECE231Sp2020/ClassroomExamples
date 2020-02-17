#include <stdio.h>
#include <stdlib.h>

double *malloc_double(int size) {
	double *array = (double *) malloc(size * sizeof(double));
	return array;
}

int main() {
	double *something = malloc_double(5);
	if(something == NULL) {
		printf("Failed allocating memory for something\n");
		return -1;
	}
	free(something);
	int *i = (int *) malloc(1 * sizeof(int));
	if(i==NULL) {
		printf("Failed allocating memory for i\n");
		return -2;
	}
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
	if(grades==NULL) {
		printf("Failed allocating memory for grades\n");
		return -3;
	}

	for(j=0; j<4; j++) {
		printf("%f ", *(grades+j));
	}
	printf("\n");

	free(grades);
	return 0;
}









