#include <stdio.h>

int main() {

	int arr[6] = { 1,2,3,4,5,6 };
	int* head = &arr[0];
	int* tail = &arr[5];
	int i, temp;

	for (i = 0; i < 3; i++) {
		temp = *head;
		*head = *tail;
		*tail = temp;
		head += 1;
		tail -= 1;
	}
	for (i = 0; i < 6; i++)
		printf("%d", arr[i]);

}