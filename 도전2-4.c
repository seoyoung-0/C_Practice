#include <stdio.h>

void Palindrome(char * ptr, int size) {
	
	int i, j=size-1;

	for (i = 0; i <size/2; i++) {
		if (ptr[i] != ptr[j]) {
			printf("ȸ���� �ƴմϴ�.");
			return; 
		}
		j--;
	}
	printf("ȸ���Դϴ�.\n");

}
int main(){
	char str[50];
	int len = 0;
	printf("���ڿ� �Է� :");
	scanf("%s", str);
	while (str[len] != 0) {
		len++;
	}

	Palindrome(str, len);
	
	return 0;


}