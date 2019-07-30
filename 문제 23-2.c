#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct point {
	int xpos;
	int ypos;


}Point;

typedef struct rectangle {
	Point one;
	Point two;

}Rectangle;

void calculator(Rectangle* rptr) {
	int width = (rptr->two).xpos - (rptr->one).xpos;
	int height = (rptr->two).ypos - (rptr->one).ypos;

	printf("³ÐÀÌ´Â : %d\n", width * height);
}
void showRectangle(Rectangle* qptr) {
	printf("ÁÂ »ó´Ü: [ %d, %d ]\n", (qptr->one).xpos, (qptr->one).ypos);
	printf("¿ì »ó´Ü: [ %d, %d ]\n", (qptr->two).xpos, (qptr->one).ypos);
	printf("ÁÂ ÇÏ´Ü: [ %d, %d ]\n", (qptr->one).xpos, (qptr->two).ypos);
	printf("¿ì ÇÏ´Ü: [ %d, %d ]\n", (qptr->two).xpos, (qptr->two).ypos);
}
int main() {
	
	Rectangle r1 = { {1, 1}, {8,8} };
	calculator(&r1);
	showRectangle(&r1);
	
}