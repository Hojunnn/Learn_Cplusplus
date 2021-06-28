//유도된 클래스들의 생성 순서

#include <iostream>

using namespace std;


//access specifier : private -> child 클래스도 부모의 멤버변수 사용 못하게 막아버림
//class Mother
//{
//public:
//	int m_i;
//
//	
//
//	Mother(const int & i_in = 0)
//		:m_i(i_in)
//	{
//		cout << "Mother Construction" << endl;
//	}
//
//};
//
//class Child : public Mother // Child 클래스는 Mother 클래스로부터 유도되었다. 
//{
//public:
//	double m_d;
//
//public:
//	Child()
//		: Mother(1024),m_d(1.0) // -> mother class로 부터 가져와서 초기화될 것 같은데 왜 안되냐? -> 원래 default로 Mother()가 숨겨져 잇음
//		//Child 에서 초기화 시켜주려면 -> Mother constructor 수정
//	{
//		cout << "Child Construction" << endl;
//	}
//};

class A
{
public:
	A()
	{
		cout << "A constructor" << endl;
	}
};

class B : public A
{
public:
	B()
	{
		cout << "B constructor" << endl;
	}
};

class C : public B
{
public:
	C()
	{
		cout << "C constructor" << endl;
	}
};

// Constructor 호출 순서 : C-> B -> A
int main()
{
	//Child c1; // -> Mother constructor 다음 child constructor 호출
	//-> Mother의 constructor가 호출되기 전에 Child의 초기화 코드 라인에서 강제로 m_i를 초기화 할 수 없음

	C c;
	return 0;
}