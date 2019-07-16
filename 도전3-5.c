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
				printf("당신은 바위, 컴퓨터는 가위, 승리\n");
				win++;
			}
			else if (com == 3) {
				printf("당신은 바위, 컴퓨터는 보, 패배\n");
				def++;
			}
			else {
				printf("둘다 바위, 비겼습니다.\n");
				same++;
			}
		}
		else if (input == 2) {
			if (com == 1) {
				printf("당신은 가위, 컴퓨터는 바위, 패배\n");
				def++;
			}
			else if (com == 3) {
				printf("당신은 가위, 컴퓨터는 보, 승리\n");
				win++;
			}
			else {
				printf("둘다 가위, 비겼습니다.\n");
				same++;
			}
		}
		else if (input == 3) {
			if (com == 2) {
				printf("당신은 보, 컴퓨터는 가위, 패배\n");
				def++;
			}
			else if (com == 1) {
				printf("당신은 보, 컴퓨터는 바위, 승리\n");
				win++;
			}
			else {
				printf("둘다 보, 비겼습니다.\n");
				same++;
			}
		}
	}
	printf("%d 승 %d무 %d패 \n", win, same, def);

}