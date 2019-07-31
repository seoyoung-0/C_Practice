#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int arrlen = 5;
	int idx=0, i;
	int* arr = (int*)malloc(sizeof(int) * arrlen);

	while (1) {
		

		printf("정수 입력 : ");
		scanf("%d", &arr[idx]); //** 정수를 배열에 바로 입력 !!!!!

		if (arr[idx] == -1) { // 정수가 -1 이면 while반복문 탈출 
			break;
		}

		if(arrlen == idx+1){  //배열 차면 크기 3 증가 
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



