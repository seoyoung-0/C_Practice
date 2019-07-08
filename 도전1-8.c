#include <stdio.h>

int recursive(num) {

	if (num == 0) return 1;
	return 2 * recursive(num - 1);
}
int main() {
	int num;
	printf("Á¤¼ö ÀÔ·Â :");
	scanf_s("%d", &num);

	printf("2의 %d 승: %d", num, recursive(num));

}
