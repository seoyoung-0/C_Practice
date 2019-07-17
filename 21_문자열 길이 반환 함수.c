#include <stdio.h>
#include <string.h>


void removeBSN(char str[]) {
	int len = strlen(str);
	//문자열의 길이를 계산 
	str[len - 1] = 0;
	//\n 부분에 0 대입 -> 문자열의 널문자 제거 
}
int main() {

	char str[100];
	printf("문자열 입력 :");
	fgets(str, sizeof(str), stdin);
	//str이 문자열로 입력 -> 널문자도 길이에 포함
	printf("길이: %d, 내용: %s \n", strlen(str), str);

	removeBSN(str);
	printf("길이: %d, 내용: %s \n", strlen(str), str);
	return 0;



}

