#include <stdio.h>

int odd(int * ptr,int arySize) {
	printf("Ȧ�� ��� :");
	for (int i = 0; i < arySize; i++) {
		if (ptr[i] % 2 != 0)
			printf("%d ", ptr[i]);
	}
}

int even(int* ptr, int arySize) {
	printf("¦�� ��� :");
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
		printf("�Է� :");
		scanf_s("%d", &arr[i]);
	}
	len = sizeof(arr) / sizeof(int);

	odd(arr,len);
	even(arr,len);

}