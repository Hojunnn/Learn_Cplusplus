#pragma once

#include <iostream>
// 헤더 내부에서는 using namespace는 class 내에
//클래스 내부의 멤버 함수의 정의를 직접 모두 프로그래밍해놨을 경우, inlining하고 싶다는 의사로 간주
//헤더 내에는 클래스의 선언부만 남겨둠
class Calc
{
private:
	int _value;

public:
	Calc(int init_value);

	Calc& add(int value);// 선언부만 남겨둠
	Calc& sub(int value);
	Calc& mult(int value);
	void print();
};

