#include "Polynomial.h"
#include "Birthday.h"
#include "rectangle.h"

void swap(int& x, int& y)
{
	int tmp;
	tmp = x;
	x = y;
	y = tmp;
}

int main() {
/*
	Polynomial a, b, c;
	
	a.read();
	b.read();
	c.add(a, b);

	a.display("A = ");
	b.display("B = ");
	c.display("C = A + B = ");
*/
/*
	// 71p. 객체 배열
	Student eei[10];
	strcpy_s(eei[2].name, "HyungGi Jo");
	eei[2].bDay.month = 2;
	eei[2].bDay.date = 15;
	printf("이름은 : %s, %d월 %d일 생입니다. \n", eei[2].name, eei[2].bDay.month, eei[2].bDay.date);
*/
	/*
	// 72p. 참조형 또는 레퍼런스형
	int a = 1, b = 2;
	printf("a = %d, b = %d\n", a, b);
	swap(a, b);
	printf("swap 호출 후 , a = %d, b = %d", a, b);
	return 0;
	*/

	Rectangle r1(4, 5);
	printf("rectangle 1 Area : %lf", r1.getArea()); //printf 사용
	std::cout << "rectnagle 1 Arda : " << r1.getArea() << std::end;  //iostream의 cout사용
}

