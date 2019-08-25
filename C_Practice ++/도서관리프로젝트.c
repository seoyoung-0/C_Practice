#include <stdio.h>
#include<stdlib.h>
#define _CRT_SECURE_NO_WARNINGS
/*
1.책을 추가
	- 책 총 개수 :100개, 제목/저자/출판사
2. 책 검색
	-제목 검색 / 저자 검색 / 출판사 검색
3. 책 빌리는 기능
4. 책 반납 기능
*/
char add_function(char(*padd)[100], int cnt);
char search_function(char(*padd)[100]);
char borrow_function(char(*padd)[100]);
char return_function(char(*padd)[100]);

int main(void) {
	char add[300][100]; //세로 100개 
	int cnt = 0;
	int menu;
	printf("1.새로운 책 추가\n2. 책 검색\n3.책 빌리기\n4.책 반납하기\n");
	scanf_s("%d", &menu);

	switch (menu) {
	case 1:
		add_function(add, cnt);
		cnt++;
		break;
	case 2:
		search_function(add);
		cnt++;
		break;
	case 3:
		borrow_function(add);
		cnt++;
		break;
	case 4:
		return_function(add);
		cnt++;
		break;
	default: return 0;
	}
	return 0;
}

char add_function(char(*padd)[100], int cnt) {
	printf("책 제목:");
	scanf_s("%s", padd[cnt * 3], sizeof(padd[cnt]));
	// 문자열 입력 -> scnaf_s("%s", str, sizeof(str));
	printf("저자:");
	scanf_s("%s", padd[(cnt * 3) + 1], sizeof(padd[cnt + 1]));
	printf("출판사:");
	scanf_s("%s", padd[(cnt * 3) + 2], sizeof(padd[cnt + 2]));

	return 0;
}
char search_function(char(*padd)[100]) {
	int input, cnt=0;
	int i = 0, j;
	char arr[300];
	char* parr = arr; //char 씩 증감 

	printf("1.책 제목 검색\n2.책 저자 검색\n3.책 출판사 검색\n");
	scanf_s("%d", &input);

	if (input == 1) {
		printf("책 제목:");
		scnaf_s("%s", arr, sizeof(arr));

		while (*parr) { //*parr이 널문자 만날때까지
			parr++;
			cnt++;
		}

		while (arr[i]) {
			if(arr[i] == padd[i][j]){
				i++;
				if (i == cnt && padd[i][j] == '0') {
					for (int i = j; i < j + 3; i++) {
						printf("%s", padd[i]);
					}
				}
				else if (i == cnt && padd[i][j] != '0') {
					printf("검색 결과가 없습니다.\n");
				}
			}
			else {
				i = 0; 
				j += 3;
			}
		}

	}
	else if (input == 2) {

	}
	else if (input == 3) {

	}
	else {
		printf("조회할 수 없습니다.\n");
	}
}
char borrow_function(char(*padd)[100]);
char return_function(char(*padd)[100]);