//헤더를 따로 만들어서 클래스 코드를 정리하는 방법

//헤더에서는 선언부만 확인
// cpp파일에서 body의 구현내용 확인
// 
#include "Calc.h"

int main()
{
	Calc cal(10);
	cal.add(10).sub(1).mult(2).print();
	Calc(10).add(10).sub(1).mult(2).print();


	return 0;
}