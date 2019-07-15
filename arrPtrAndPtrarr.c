
#include <stdio.h>
// int (*ptr)[4] : int형 변수를 가리키는 포인터, 포인터 연산시, 4칸씩
// -> 2차원 배열 가리키는 용도로만 사용 == 배열 포인터 변수 

// int * whoA[4] -> 포인터 배열 : 포인터들의 배열 
// int (*whoB) [4] -> 배열 포인터 변수 : 가로길이 4인 2차원 배열 가리키는 포인터

int main(void) {
	int num1 = 10, num2 = 20, num3 = 30, num4 = 40;

	int arr2d[2][4] = { 1,2,3,4,5,6,7,8 };
	int i, j;

	int* whoA[4] = { &num1, &num2, &num3, &num4 }; //포인터 배열 
	int(*whoB)[4] = arr2d; //배열 포인터 변수 

	printf("%d %d %d %d \n", *whoA[0], *whoA[1], *whoA[2], *whoA[3]);
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 4; j++) {
			printf("%d ", whoB[i][j]);
		}
	}


}