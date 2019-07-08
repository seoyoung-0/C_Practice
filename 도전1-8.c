#include <stdio.h>

int recursive(num) {

	if (num == 0) return 1;
	return 2 * recursive(num - 1);
}
int main() {
	int num;
	printf("정수 입력 :");
	scanf_s("%d", &num);

	printf("2의 %d승은 %d", num, recursive(num));

}