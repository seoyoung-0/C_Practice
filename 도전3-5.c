#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

	int input, com;
	int win = 0, def = 0, same = 0;

	while (def != 5) {
		printf("input(Rock=1, Scissor=2, Paper=3  :   ");
		scanf_s("%d", &input);

		srand((int)time(NULL));
		com = rand() % 3 + 1;

		if (input == 1) {
			if (com == 2) {
				printf("����� ����, ��ǻ�ʹ� ����, �¸�\n");
				win++;
			}
			else if (com == 3) {
				printf("����� ����, ��ǻ�ʹ� ��, �й�\n");
				def++;
			}
			else {
				printf("�Ѵ� ����, �����ϴ�.\n");
				same++;
			}
		}
		else if (input == 2) {
			if (com == 1) {
				printf("����� ����, ��ǻ�ʹ� ����, �й�\n");
				def++;
			}
			else if (com == 3) {
				printf("����� ����, ��ǻ�ʹ� ��, �¸�\n");
				win++;
			}
			else {
				printf("�Ѵ� ����, �����ϴ�.\n");
				same++;
			}
		}
		else if (input == 3) {
			if (com == 2) {
				printf("����� ��, ��ǻ�ʹ� ����, �й�\n");
				def++;
			}
			else if (com == 1) {
				printf("����� ��, ��ǻ�ʹ� ����, �¸�\n");
				win++;
			}
			else {
				printf("�Ѵ� ��, �����ϴ�.\n");
				same++;
			}
		}
	}
	printf("%d �� %d�� %d�� \n", win, same, def);

}