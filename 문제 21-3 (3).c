#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>


int getSpace(char str[]) {

	int len, i;
	len = strlen(str);

	for (i = 0; i < len; i++) {
		if (str[i] == ' ')
			return i;
	}

}

int compName(char str1[], char str2[]) {
	int sp1 = getSpace(str1);
	int sp2 = getSpace(str2);

	if (sp1 != sp2) {
		return 0;
	}
	else {
		return !strncmp(str1, str2, sp1 + 1);
	}
}
int compAge(char str1[], char str2[]) {

	int sp1 = getSpace(str1);
	int sp2 = getSpace(str2);

	int age1, age2;

	age1 = atoi(&str1[sp1]);

	age2 = atoi(&str2[sp2]);

	if (age1 == age2) {
		return 1;
	}
	else {
		return 0;
	}
}


int main() {
	int i;
	char str1[20];
	char str2[20];

	printf("1. 이름과 나이 입력 : ");
	fgets(str1, strlen(str1), stdin);
	str1[strlen(str1) - 1] = 0;

	printf("2. 이름과 나이 입력 : ");
	fgets(str2, strlen(str2), stdin);
	str2[strlen(str2) - 1] = 0;

	if (compName(str1, str2)) {
		printf("이름이 동일합니다.\n");
	}
	else {
		printf("이름이 동일하지 않습니다.\n");
	}


	if (compAge(str1, str2)) {
		printf("나이가 동일합니다.\n");
	}
	else {
		printf("나이가 동일하지 않습니다.\n");
	}

}

