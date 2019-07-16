#include <stdio.h>
#include <stdlib.h>

int main() {
	int i;
	printf("random num : 0 ~ %d \n", RAND_MAX);
	for (i = 0; i < 5; i++)
		printf("print randnum : %02d\n", rand()%100);
	return 0;
}

