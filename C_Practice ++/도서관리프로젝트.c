#include <stdio.h>
#include<stdlib.h>
#define _CRT_SECURE_NO_WARNINGS
/*
1.å�� �߰�
	- å �� ���� :100��, ����/����/���ǻ�
2. å �˻�
	-���� �˻� / ���� �˻� / ���ǻ� �˻�
3. å ������ ���
4. å �ݳ� ���
*/
char add_function(char(*padd)[100], int cnt);
char search_function(char(*padd)[100]);
char borrow_function(char(*padd)[100]);
char return_function(char(*padd)[100]);

int main(void) {
	char add[300][100]; //���� 100�� 
	int cnt = 0;
	int menu;
	printf("1.���ο� å �߰�\n2. å �˻�\n3.å ������\n4.å �ݳ��ϱ�\n");
	scanf_s("%d", &menu);

	switch (menu) {
	case 1:
		add_function(add, cnt);
		cnt++;
		break;
	case 2:
		search_function(add);
		cnt++;
		break;
	case 3:
		borrow_function(add);
		cnt++;
		break;
	case 4:
		return_function(add);
		cnt++;
		break;
	default: return 0;
	}
	return 0;
}

char add_function(char(*padd)[100], int cnt) {
	printf("å ����:");
	scanf_s("%s", padd[cnt * 3], sizeof(padd[cnt]));
	// ���ڿ� �Է� -> scnaf_s("%s", str, sizeof(str));
	printf("����:");
	scanf_s("%s", padd[(cnt * 3) + 1], sizeof(padd[cnt + 1]));
	printf("���ǻ�:");
	scanf_s("%s", padd[(cnt * 3) + 2], sizeof(padd[cnt + 2]));

	return 0;
}
char search_function(char(*padd)[100]) {
	int input, cnt=0;
	int i = 0, j;
	char arr[300];
	char* parr = arr; //char �� ���� 

	printf("1.å ���� �˻�\n2.å ���� �˻�\n3.å ���ǻ� �˻�\n");
	scanf_s("%d", &input);

	if (input == 1) {
		printf("å ����:");
		scnaf_s("%s", arr, sizeof(arr));

		while (*parr) { //*parr�� �ι��� ����������
			parr++;
			cnt++;
		}

		while (arr[i]) {
			if(arr[i] == padd[i][j]){
				i++;
				if (i == cnt && padd[i][j] == '0') {
					for (int i = j; i < j + 3; i++) {
						printf("%s", padd[i]);
					}
				}
				else if (i == cnt && padd[i][j] != '0') {
					printf("�˻� ����� �����ϴ�.\n");
				}
			}
			else {
				i = 0; 
				j += 3;
			}
		}

	}
	else if (input == 2) {

	}
	else if (input == 3) {

	}
	else {
		printf("��ȸ�� �� �����ϴ�.\n");
	}
}
char borrow_function(char(*padd)[100]);
char return_function(char(*padd)[100]);