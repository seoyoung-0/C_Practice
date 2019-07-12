#include <stdio.h>

void Palindrome(char * ptr, int size) {
	
	int i, j=size-1;

	for (i = 0; i <size/2; i++) {
		if (ptr[i] != ptr[j]) {
			printf("회문이 아닙니다.");
			return; 
		}
		j--;
	}
	printf("회문입니다.\n");

}
int main(){
	char str[50];
	int len = 0;
	printf("문자열 입력 :");
	scanf("%s", str);
	while (str[len] != 0) {
		len++;
	}

	Palindrome(str, len);
	
	return 0;


}