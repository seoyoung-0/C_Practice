#include <stdio.h>
int main() {

	int ch1;
	ch1 = getchar();

	if (ch1 >= 65 && ch1 <= 95) {
		ch1 += 32;
		putchar(ch1);
	}
	else if (ch1 >= 97 && ch1 <= 127) {
		ch1 -= 32;
		putchar(ch1);
	}
	else {
		puts("������ ��� �Է��Դϴ�. ");
	}


}

