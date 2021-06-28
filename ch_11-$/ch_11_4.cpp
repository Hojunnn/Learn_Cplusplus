#include <iostream>
using namespace std;

//class Mother
//{
//public:
//	int m_i;
//
//	Mother(const int & i_in = 0)
//		:m_i(i_in)
//	{
//		cout << "Mother construction" << endl;
//	}
//};
//
//class Child : public Mother
//{
//public:
//	double m_d;
//public:
//	Child()
//		:m_d(1.0), Mother(1024)
//	{
//		cout << "child construction" << endl;
//	}
//};

class A
{
public:
	A(int a)
	{
		cout << "A: " << a << endl;
	}
	~A()
	{
		cout << "Destructor A" << endl;
	}
};

class B : public A
{

public:
	B(int a, double b)
		:A(a)
	{
		cout << "B: " << b << endl;
	}

	~B()
	{
		cout << "Destructor B" << endl;
	}
};

class C : public B
{

public:
	C(int a, double b, char c)
		:B(a,b)
	{
		cout << "C: " << c << endl;
	}

	~C()
	{
		cout << "Destructor C" << endl;
	}
};

//持失切 : A->B->C // 社瑚切 : C->B->A

int main()
{
	//Child c1;

	C c(1024, 3.14, 'a');

	/*cout << sizeof(Mother) << endl;
	cout << sizeof(Child) << endl;*/

	return 0;
}