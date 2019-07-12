#include <stdio.h>

int odd(int * ptr,int arySize) {
	printf("홀수 출력 :");
	for (int i = 0; i < arySize; i++) {
		if (ptr[i] % 2 != 0)
			printf("%d ", ptr[i]);
	}
}

int even(int* ptr, int arySize) {
	printf("짝수 출력 :");
	for (int i = 0; i < arySize; i++) {
		if (ptr[i] % 2 == 0)
			printf("%d ", ptr[i]);
	}

}

int main(){

	int arr[10];
	int* ptr = arr;
	int i,len;
	
	for (i = 0; i < 10; i++) {
		printf("입력 :");
		scanf_s("%d", &arr[i]);
	}
	len = sizeof(arr) / sizeof(int);

	odd(arr,len);
	even(arr,len);

}