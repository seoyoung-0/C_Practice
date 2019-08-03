#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//두 개의 문자열을 비교해서 같으면 1, 다르면 0 반환

int stringComp(char* word1, char* word2);

int main() {

	char word1[] = "abcdefg";

	char word2[] = "abcdefg";
	
	printf("%d\n", stringComp(word1, word2));

}

int stringComp(char* word1, char* word2) {
	int i = 0, j = 0;

	for (i = 0; word1[i] || word2[i]; i++) {
		if (word1[i] != word2[i]) {
			return 0;
		}
		return 1;

	}
}
