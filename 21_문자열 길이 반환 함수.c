#include <stdio.h>
#include <string.h>


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

