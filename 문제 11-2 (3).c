#include <stdio.h>

int main() {

	char voca[20];
	int i, max, idx;
	printf("영단어 입력:");
	scanf_s("%s", voca, 20);
	
	idx = 0;
	while (voca[idx] != 0) {
		idx++;
	}
	max = voca[0];
	for (i = 0; i < idx; i++) {
		if (voca[i] > max) {
			max = voca[i];
		}
	}
	printf("%c", max);

}