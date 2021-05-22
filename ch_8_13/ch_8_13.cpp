// 객체를 사용할 때 이름이 붙은 변수를 선언하지 않고, 바로 사용하는 익명객체
#include <iostream>
using namespace std;

//class A
//{
//public:
//
//	int m_value;
//
//	A(const int& input)
//		:m_value(input)
//	{
//		cout << "Constructor" << endl;
//	}
//
//	~A()
//	{
//		cout << "Destructor" << endl;
//	}
//
//	void print()
//	{
//		cout << m_value << endl;
//	}
//};

class Cents
{
private:
	int m_cents;

public:
	Cents(int cents) { m_cents = cents; }

	int getCents() const { return m_cents; }
};

Cents add(const Cents &c1, const Cents & c2)
{
	return Cents( c1.getCents() + c2.getCents() );
}

int main()
{
	/*A a;
	a.print();*/

	/*A().print();
	A().print();*/

	/*A a(1);
	a.print();*/

	cout << add(Cents(6), Cents(8)).getCents() << endl;

	return 0;
}

//익명 객체의 특징
//1. R value 처럼 작동
//2. 변수 명이 없기 때문에 두번세번 사용할 수 없고, 오직 한번만 사용하고 사라진다.