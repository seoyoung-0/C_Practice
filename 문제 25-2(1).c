#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int main() {
	int len,maxlen,i;
	printf("문자열의 길이 : ");
	scanf("%d", &maxlen);
	getchar(); // ?
	char* str = (char*)malloc(sizeof(char) * (maxlen+1)); //길이만큼 크기 할당 
	
	puts("문자열 입력:\n");
	fgets(str, maxlen, stdin); //문자열 입력, fgets-> 널문자 자동 추가 
	str[strlen(str) - 1] = 0; //널문자 
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