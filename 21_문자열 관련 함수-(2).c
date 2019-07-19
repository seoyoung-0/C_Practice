#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

int main() {
	/*******************************strcmp, strncmp****************************************/
	char str1[20];
	char str2[20];

	printf("문자열 입력 1 :");
	scanf("%s", str1);

	printf("문자열 입력 2 :");
	scanf("%s", str2);


	if (!strcmp(str1, str2)) {
		//strcmp : 동일하면, 0반환 -> ! 연산 : 문자열 완전히 동일할 때 거짓(0) 에서 참 된다.
		puts("문자열 동일\n");
	}

	else {
		puts("문자열 동일하지 않습니다\n");

		if (!strncmp(str1, str2, 3))
			puts("앞 세글자는 동일합니다.\n");
	}
	return 0;
	
}

