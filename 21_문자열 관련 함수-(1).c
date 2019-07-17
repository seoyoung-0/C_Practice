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
	//strncpy : 복사 되는 문자열 크기 반환한 수 만큼 복사 
	//-> 복사된 문자에 널 문자 없으므로, 이상한 값 출력 
	puts(str3);


	strncpy(str3, str1, sizeof(str3) - 1);
	str3[sizeof(str3) - 1] = 0;
	puts(str3);
}

*/


/*

******************** 문자열 길이 함수 strlen**************************

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
*/

