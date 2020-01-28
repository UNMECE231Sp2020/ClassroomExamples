#include <stdio.h>

int main() {
	char str1[] = "Hello";
	char *str2 = "hello";
	
	printf("%s, %s\n", str1, str2);
	str2 = str1-30;
	printf("%s, %s\n", str1, str2);

	//printf("str1: %p, &str1: %p, &str1[0]: %p\n", str1, &str1, &str1[0]);

	//printf("str2: %p, &str2: %p, &str2[0]: %p\n", str2, &str2, &str2[0]);

	return 0;
}
