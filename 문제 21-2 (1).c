#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

int charToInt(char c) {

	static int diff = 1 - '1';
	return c + diff;

}

int main() {
	int i,len,sum=0;
	char str[20];

	fgets(str, sizeof(str), stdin);
	len = strlen(str);

	for (i = 0; i < len; i++) {
		if (str[i] >= '1' && str[i] <= '9') {
		
			sum += charToInt(str[i]);
		}
	}
	printf("sum = %d", sum);


}

