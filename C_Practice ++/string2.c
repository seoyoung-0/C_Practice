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

	//char* pstr = "hi"; //" " == 문자열 리터럴
	// 메모리 text segment 에 코드, 상수, 리터럴 정의 -> 읽기만 가능 

	//copy_str(str1, str2);
	//printf("str1 : %s \n", str1);
	//printf("str2: %s \n", str2);

	str_add(str1, str2);
	printf("str1 : %s \n", str1);
	printf("str2: %s ", str2);

	if (compare(str3, str4)) //if문에서 0이 아닌 값들어가면 무조건 참 
		printf("문자열이 동일합니다.\n");
	else {
		printf("문자열이 다릅니다.");
	}
}

int copy_str(char* dest, char* src) { 
	//문자열 복사 하는 함수 

	while (*src) {//*src가 null에 도달할 때 까지 
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';

	return 1;
}

int str_add(char* src, char* dest) { 
	//str1에 str2 붙이기 

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
