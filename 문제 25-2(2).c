#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int arrlen = 5;
	int idx=0, i;
	int* arr = (int*)malloc(sizeof(int) * arrlen);

	while (1) {
		

		printf("���� �Է� : ");
		scanf("%d", &arr[idx]); //** ������ �迭�� �ٷ� �Է� !!!!!

		if (arr[idx] == -1) { // ������ -1 �̸� while�ݺ��� Ż�� 
			break;
		}

		if(arrlen == idx+1){  //�迭 ���� ũ�� 3 ���� 
			arrlen += 3;
			arr = (int*)realloc(arr, sizeof(int) * arrlen);
		}
		
		idx++;


	}

	for (i = 0; i < idx; i++) {
		printf("%d \n", arr[i]);
	}
	free(arr);
}



