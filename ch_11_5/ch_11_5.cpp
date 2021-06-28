//클래스에서 멤버 변수를 외부에서 접근 할 수 잇느냐 없느냐, 자식이 접근할 수 있느냐 없느냐를 접근 지정자를 통해서 설정해줌
//상속을 받을 때 내가 부모로 부터 가져오는 것들에 대해서 어떻게 접근할 수 있는지 접근 범위에 대해서도 접근 지정자 사용가능
//상속과 접근 지정자

#include <iostream>
using namespace std;

class Base
{
public:
	int m_public;
protected:
	int m_protected;
private:
	int m_private;
};

class Derived : private Base // -> private base일 때, protected 가능
{
public:
	Derived()
	{// Base의 멤버 변수에 대해서 Derived에서 접근 가능한지 테스트 (public base 일 경우 -> m_public, protected 가능) 
		/*m_public = 123;
		m_protected = 123;*/
		/*m_private = 123;*/ //-> 안댐

		Base::m_public;
		Base::m_protected;
	}
};

class GrandChild : public Derived
{
public:
	GrandChild()
	{
		//Derived::m_public; //상속 불가능 -> derived 클래스에서 private base일 때, public,protected 불가능
	}
};

int main()
{
	/*Base base;

	base.m_public = 123;*/
	/*base.m_protected = 123;
	base.m_private = 123;*/ // -> 불가능

	Derived derived;
	// derived.m_public = 123;// class Derived : protected base일 때, 외부에서 접근이 안됨
	/*derived.m_protected = 123;
	derived.m_private = 123;*/ // -> class Derived : public base일 때, 메인에서 멤버 변수 접근 시 접근 지정자 protected, private는 접근 불가능


	return 0;
}