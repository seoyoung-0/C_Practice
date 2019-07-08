#include <stdio.h>

int recursive(num) {

	if (num == 0) return 1;
	return 2 * recursive(num - 1);
}
int main() {
	int num;
	printf("num :");
	scanf_s("%d", &num);

	printf("2ÀÇ %d½ÂÀº %d", num, recursive(num));

}

