// ��ü�� ����� �� �̸��� ���� ������ �������� �ʰ�, �ٷ� ����ϴ� �͸�ü
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

//�͸� ��ü�� Ư¡
//1. R value ó�� �۵�
//2. ���� ���� ���� ������ �ι����� ����� �� ����, ���� �ѹ��� ����ϰ� �������.