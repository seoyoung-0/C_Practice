#include <stdio.h>
#include <string.h>

/*
int main() {

********************strcpy, strncpy**************************

	char str1[20] = "1234567890";
	char str2[20];
	char str3[5];

	strcpy(str2, str1); 
	puts(str2);


	strncpy(str3, str1, sizeof(str3)); 
	//strncpy : ���� �Ǵ� ���ڿ� ũ�� ��ȯ�� �� ��ŭ ���� 
	//-> ����� ���ڿ� �� ���� �����Ƿ�, �̻��� �� ��� 
	puts(str3);


	strncpy(str3, str1, sizeof(str3) - 1);
	str3[sizeof(str3) - 1] = 0;
	puts(str3);
}

*/


/*

******************** ���ڿ� ���� �Լ� strlen**************************

void removeBSN(char str[]) {
	int len = strlen(str);
	//���ڿ��� ���̸� ��� 
	str[len - 1] = 0;
	//\n �κп� 0 ���� -> ���ڿ��� �ι��� ���� 
}
int main() {

	char str[100];
	printf("���ڿ� �Է� :");
	fgets(str, sizeof(str), stdin);
	//str�� ���ڿ��� �Է� -> �ι��ڵ� ���̿� ����
	printf("����: %d, ����: %s \n", strlen(str), str);

	removeBSN(str);
	printf("����: %d, ����: %s \n", strlen(str), str);
	return 0;
}
*/

