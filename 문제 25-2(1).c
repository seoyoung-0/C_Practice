#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int main() {
	int len,maxlen,i;
	printf("���ڿ��� ���� : ");
	scanf("%d", &maxlen);
	getchar(); // ?
	char* str = (char*)malloc(sizeof(char) * (maxlen+1)); //���̸�ŭ ũ�� �Ҵ� 
	
	puts("���ڿ� �Է�:\n");
	fgets(str, maxlen, stdin); //���ڿ� �Է�, fgets-> �ι��� �ڵ� �߰� 
	str[strlen(str) - 1] = 0; //�ι��� 
	len = strlen(str);

	for (i = len-1; i > 0; i--) {
		if (str[i] == ' ') {
			printf("%s ", &str[i]);
			str[i] = 0; 
		}

	}

	printf("%s", &str[0]); //for 'i'
	free(str);
	return 0;

}