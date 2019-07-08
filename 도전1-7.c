#include <stdio.h>

int main() {

	int n, k;
	int result = 2;

	printf(" n :");
	scanf_s("%d", &n);

	k = 0;
	while (result <= n) {
		result = result * 2;
		k++;
	}
	printf("k의 최대값: %d", k);
}
