#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

int main() {
	/*******************************strcmp, strncmp****************************************/
	char str1[20];
	char str2[20];

	printf("���ڿ� �Է� 1 :");
	scanf("%s", str1);

	printf("���ڿ� �Է� 2 :");
	scanf("%s", str2);


	if (!strcmp(str1, str2)) {
		//strcmp : �����ϸ�, 0��ȯ -> ! ���� : ���ڿ� ������ ������ �� ����(0) ���� �� �ȴ�.
		puts("���ڿ� ����\n");
	}

	else {
		puts("���ڿ� �������� �ʽ��ϴ�\n");

		if (!strncmp(str1, str2, 3))
			puts("�� �����ڴ� �����մϴ�.\n");
	}
	return 0;
	
}

