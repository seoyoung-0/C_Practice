#include <stdio.h>

int main() {

	char* str = "Simple String";

	printf("1. puts test---\n");
	puts(str); // puts 는 바로 개행 //puts 함수는 출력대상 stdout 고정 
	puts("so simple string"); 

	printf("2. puts test---\n");
	fputs(str, stdout); printf("\n"); //출력대상을 stdout으로 고정 
	fputs("so simple string ", stdout); printf("\n");//fputs 는 자동 개행 x

	printf("3. puts test---\n");
	return 0;


}

