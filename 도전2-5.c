#include <stdio.h>

void DesSort(int ary[], int len);

int main(void) {

	int arr[7] = { 0 };
	int i;

	for (i = 0; i <7; i++) {
		printf("입력:");
		scanf("%d", &arr[i]);
	}
	DesSort(arr, sizeof(arr) / sizeof(int));

	for (i = 0; i < 7; i++)
		printf("%d ", arr[i]);

	printf("\n");
	return 0;
}

void DesSort(int ary[], int len) {
	int i, j;
	int temp;

	for (i = 0; i < len - 1; i++) {
		for (j = 0; j < (len - i) - 1; j++) {
			if (ary[j] < ary[j + 1]) {
				temp = ary[j];
				ary[j] = ary[j + 1];
				ary[j + 1] = temp;
			}
		}
	}
	/* 뒤에서부터 비교 -> 앞에서부터 내림차순 
	for (i = len - 1; i > 0; i--) {
		for (j = (len - i) - 1; j > 0; j--){
			if (ary[j] > ary[j - 1]) {
				int temp = ary[j];
				ary[j] = ary[j - 1];
				ary[j - 1] = temp;
			}
		}
	}
	*/

}
