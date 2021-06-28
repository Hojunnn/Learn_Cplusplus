//상속은 기본적으로 부모로 부터 뭔가를 받아 오는 것
//상속 받은 것을 사용하지 않도록, 사용하지 못하도록 막아버리는 방법

#include <iostream>
using namespace std;

class Base
{
protected:
	int m_i;

public:
	Base(int value)
		:m_i(value)
	{}

	void print()
	{
		cout << "I'm base" << endl;
	}
};

class Derived : public Base
{
private:
	double m_d;
	using Base::print; // print 함수를 밖에서 접근을 못하도록 막는법
	//부모에서는 접근이 되지만 자식에서는 접근이 안되도록 막는 방법

public:
	Derived(int value)
		: Base(value)
	{}

	using Base::m_i; // m_i를 맘대러 바꿀 수 있음 -> Derived 안에서 public이 됨

private:
	void print() = delete;
	//부모에서는 접근이 되지만 자식에서는 접근이 안되도록 막는 방법

};

//부모에서는 접근이 되지만 자식에서는 접근이 안되도록 막는 방법

int main()
{
	Base base(5);
	base.print();
	
	Derived derived(7);

	derived.m_i;
	//derived.print();// print 함수를 밖에서 접근을 못하도록 막는법

	return 0;
}