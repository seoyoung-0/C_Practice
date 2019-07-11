#include <stdio.h>

int main(){

	int arr[10] = { 0 };
	int i, num;
	int eCount=9, oCount=0;

	for (i = 0; i < 10; i++) {
		printf("ют╥б :");
		scanf_s("%d", &num);
		switch (num % 2) {
		case 0: 
			arr[eCount] = num;
			eCount--;
			break;

		case 1:
			arr[oCount] = num;
			oCount++;
			break;
		}
	}
	for (i = 0; i < 10; i++) {
		printf("%d", arr[i]);
	}

}