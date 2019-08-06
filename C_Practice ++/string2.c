#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int copy_str(char* dest, char* src);
int str_add(char* src, char* dest);
int compare(char* str1, char* str2);

int main() {

	char str1[] = "hello";
	char str2[] = "hi";
	char str3[] = "hello everyone";
	char str4[] = "hello every";

	//char* pstr = "hi"; //" " == ���ڿ� ���ͷ�
	// �޸� text segment �� �ڵ�, ���, ���ͷ� ���� -> �б⸸ ���� 

	//copy_str(str1, str2);
	//printf("str1 : %s \n", str1);
	//printf("str2: %s \n", str2);

	str_add(str1, str2);
	printf("str1 : %s \n", str1);
	printf("str2: %s ", str2);

	if (compare(str3, str4)) //if������ 0�� �ƴ� ������ ������ �� 
		printf("���ڿ��� �����մϴ�.\n");
	else {
		printf("���ڿ��� �ٸ��ϴ�.");
	}
}

int copy_str(char* dest, char* src) { 
	//���ڿ� ���� �ϴ� �Լ� 

	while (*src) {//*src�� null�� ������ �� ���� 
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';

	return 1;
}

int str_add(char* src, char* dest) { 
	//str1�� str2 ���̱� 

	while (*src) {
		src++;
	}
	while (*dest) {
		*src = *dest;
		src++;
		dest++;

	}

	*src = '\0';

	return 1;
}

int compare(char* str1, char* str2) {

	while (*str1) {
		if (*str1 != *str2) {
			return 0;
		}
		str1++;
		str2++;
	}
		if (*str2 == '\0')
			return 1;
	
		return 0;
}
