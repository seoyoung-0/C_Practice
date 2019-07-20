#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
/*
typedef struct point {
	int xpos;
	int ypos;
}Point;

void OrgSymTrans(Point* ptr) {
	ptr->xpos = (ptr->xpos) * -1;
	ptr->ypos = (ptr->ypos) * -1;

}

void showPosition(Point pos) { //구조체 변수 인자로 전달 받기
	printf("[%d, %d]", pos.xpos, pos.ypos);
}
int main() {

	Point pos = { 7, -5 };
	OrgSymTrans(&pos);
	showPosition(pos);
}

---------------------------------------------------------------------
typedef struct point {
	int xpos;
	int ypos;
}Point;

Point AddPoint(Point pos1, Point pos2) {
		// 구조체 변수 대상으로 연산 -> 함수 정의 
	Point pos = { pos1.xpos + pos2.xpos, pos1.ypos + pos2.ypos };
	return pos;
}

int main() {
	Point pos1 = { 5,6 };
	Point pos2 = { 2,9 };
	Point result;

	result = AddPoint(pos1, pos2);
	//printf("%d", result);
	printf("%d %d", result.xpos, result.ypos);

}
*/

typedef struct point {
	int xpos;
	int ypos;
}Point;

Point SwapPoint(Point pos1, Point pos2) {
	Point temp;
	temp = pos1;
	pos1 = pos2;
	pos2 = temp;
	printf("pos1 : %d, %d", pos1.xpos, pos1.ypos);
	printf("pos2 : %d, %d", pos2.xpos, pos2.ypos);

}

int main() {
	Point pos1 = { 2, 4 };
	Point pos2 = { 5, 7 };

	SwapPoint(pos1, pos2);


}