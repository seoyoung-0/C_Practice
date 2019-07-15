#include <stdio.h>


int main() {

	int i=0,j=-1,r=1,x;
	int k = 1;
	int aryNum;
	int arr[20][20] = { 0 };
	int limit;

	printf("input Matrix Number :");
	scanf_s("%d", &aryNum);
	limit = aryNum;

	while (limit > 0) {

		for (x = 0; x < limit; x++) {
			j = j + r;
			arr[i][j] = k;
			k++;
	
		}
		limit--;

		for (x = 0; x < limit; x++) {
			i = i + r;
			arr[i][j] = k;
			k++;
			

		}
		r = r * -1;
	}

	//print
	for (i = 0; i < aryNum; i++) {
		for (j = 0; j < aryNum; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}


}

