#include <stdio.h>
int turnArray(int(*ptr)[4], int len);

int main() {
	int arr[4][4];
	int i,j, k=1;
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			arr[i][j] = k;
			k++;
		}
	}
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	int arrSize = sizeof(arr) / sizeof(arr[0]);

	/*
	k = 1;
	for (j = 3; j >= 0; j--) {
		for(i=0;i<4;i++) {
			arr1[i][j] = k;
			k++;
		}
	}
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			printf("%d ", arr1[i][j]);
		}
		printf("\n");
	}*/

	for (int i = 1; i < 4; i++) {
		printf("%d 번째 회전\n", i);
		turnArray(arr, arrSize);
		printf("\n");

	}
}

int turnArray(int(*ptrArr)[4],int len) {

	int i, j;
	int temp[4][4];

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			temp[j][(len-1)-i] = ptrArr[i][j];
		}
	}
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			ptrArr[i][j] = temp[i][j];
		}
	}

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			printf("%d ", ptrArr[i][j]);
		}
		printf("\n");
	}

	return 0;
}
