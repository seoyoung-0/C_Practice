#include <stdio.h>

int main() {

	int sec;
	int h, m;

	printf("��(second) �Է� :");
	scanf_s("%d", &sec);

	h = sec / 3600;
	m = (sec % 3600) / 60;
	sec = sec % 60;
	printf("h: %d, m: %d, s: %d", h, m, sec);

}