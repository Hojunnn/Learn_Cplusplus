//상속을 받은 일반적인 경우에는 상속해주는 부모 클래스와 상속을 받는 자식 클래스 간에 기능차이가 그렇게 많지는 않을 수 있음
//유용하게 사용할 수 있는 함수 오버라이딩

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
		cout << " I'm base " << endl; 
	}

	//output operate overloading
	friend std::ostream & operator << (std::ostream & out, const Base & b)
	{
		cout << "This is base output" << endl;
		return out;
	}
};

class Derived : public Base
{
private:
	double m_d;

public:
	Derived(int value)
		:Base(value) 
	{}

	void print()
	{
		//부모 클래스의 print 함수를 호출하고 그 다음 자식 클래스에서 I'm derived에서 추가로 작업하고 싶다면
		Base::print();
		cout << " I'm derived " << endl;
	}

	friend std::ostream & operator << (std::ostream & out, const Derived & b)
	{
		cout << static_cast<Base>(b); // Base::print()처럼 operator overloading에도 적용
		//static cast를 했기 때문에 위에 있는(Base class) operator overloading -> 잘 호출됨
		//Derived로 들어온 b를 <Base>로 casting함 -> 메모리 적으로 Derived는 Base의 것을 가지고 있으므로.. 확장된다고 생각
		cout << "This is Derived output" << endl;
		return out;
	}
};

int main()
{
	Base base(3);
	//base.print();
	cout << base;

	Derived derived(7);
	//derived.print();
	cout << derived;

	return 0;
}

//상속 받은 함수를 호출하는 방법
//상속 받은 클래스에서 새로운 함수를 구현할 때 부모클래스에 있는 기능을 같이 사용하는 법
//함수 이름이 같을 때 어떻게 하는가?
//이름이 같은 함수를 자식 클래스에서 새로 정의해서 사용하는 것 혹은 새로 정의를 하는데 기능을 추가해서 새로 정의하는 것을 오버 라이딩이라고 함