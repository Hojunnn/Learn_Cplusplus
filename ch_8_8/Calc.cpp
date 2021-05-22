#include "Calc.h"

using namespace std;

//선언부의 바디들은 Calc.cpp 파일에 모여있음

Calc::Calc(int init_value)
	: _value(init_value)
{}

Calc& Calc::add(int value)
{
	_value += value;
	return *this;
}

Calc & Calc::sub(int value)
{
	_value -= value;
	return *this;
}

Calc & Calc::mult(int value)
{
	_value *= value;
	return *this;
}

void Calc::print() {

	cout << _value << endl;
}
