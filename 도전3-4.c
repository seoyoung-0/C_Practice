#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

	int dice1, dice2,i;
	
		
		srand((int)time(NULL));
		dice1 = rand() % 6 + 1;
		dice2 = rand() % 6 + 1;
		printf("dice1 = %d , dice2 = %d \n", dice1, dice2);
	
	
/*
	int i;
	srand((int)time(NULL));
	for (i = 0; i < 5; i++)
		printf("integer print: %d \n", rand()%10);
	return 0;

*/

/*
	int seed, i;
	printf(" seed value : ");
	scanf_s("%d", &seed);
	srand(seed); 

	for (i = 0; i < 5; i++)
		printf("integer : %d\n", rand());
	return 0;
	*/
}

