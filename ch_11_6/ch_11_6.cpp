//자식 클래스에 새로운 기능을 추가할 때 생각해야될 점

#include <iostream>
using namespace std;

class Base
{
protected:
	int m_value;

public:
	Base(int value)
		:m_value(value)
	{

	}
};

class Derived : public Base
{
public:
	Derived(int value)
		: Base(value)
	{

	}
	void setValue(int value)
	{
		Base::m_value = value; // 동작 불가능 private -> protected
		//do some work with the variables defined in Derived
	}

};