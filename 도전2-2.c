#include <stdio.h>

int main(){

	int num;
	printf("10진수 정수 입력:");
	scanf_s("%d", &num);

	int arr[50];
	int i = 0;
	
	while(num >0)
	{
		arr[i] = num % 2;
		num /= 2;
		i++;
	}

	while (i > 0) {
		i--;
		printf("%d", arr[i]);
	}
}