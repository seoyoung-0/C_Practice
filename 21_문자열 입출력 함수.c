#include <stdio.h>

int main() {

	char* str = "Simple String";

	printf("1. puts test---\n");
	puts(str); // puts �� �ٷ� ���� //puts �Լ��� ��´�� stdout ���� 
	puts("so simple string"); 

	printf("2. puts test---\n");
	fputs(str, stdout); printf("\n"); //��´���� stdout���� ���� 
	fputs("so simple string ", stdout); printf("\n");//fputs �� �ڵ� ���� x

	printf("3. puts test---\n");
	return 0;


}

