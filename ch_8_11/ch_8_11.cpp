//정적 멤버 함수
#include <iostream>
using namespace std;

class Something
{
public:

	//inner class
	class _init
	{
	public:
		_init()
		{
			s_value = 9876;
		}
	};

private:
	static int s_value;
	int m_value;

	static _init s_initializer;
	
public:

	Something()
		:m_value(123) //, s_value(1024)// 생성자에서 static variable 초기화 불가능
		// 가능하게 하려면 생성자가 static -> C++에서는 static 생성자는 지원하지 않음
	{}

	static int getValue()
	{
		return s_value; // static 제약 사항: this로 접근 불가능
	}

	//클래스 안에서 static 멤버를 초기화할 수 없느냐? -> 우회 방법
	int temp()
	{
		return this->s_value; // 특정 인스턴스의 주소를 받아다가 그 인스턴스에 속해있는 멤버들의 
		//주소를 가져다가 사용하겠다 (this 사용)
	}
};

int Something::s_value;
Something::_init Something::s_initializer;

int main() {
	cout << Something::getValue() << endl;
	// 특정 인스턴스 상관 없이 getvalue를 사용할 수 있으면 어떨까
	Something s1,s2;
	cout << s1.getValue() << endl;
	//cout << s1.s_value << endl;

	int (Something::*fptr1)() = /*&s1.->*/ &Something::temp;//Something 에 속해있는 member function
	//이라는 것을 명시해 주면 문제 없음

	cout << (s2.*fptr1)() << endl;//fptr1은 Something 클래스의 temp라는 멤버 함수의 ptr 값을 갖고
	//있는데 이 포인터 위치에 있는 함수를 실행시킬 때 s2라는 인스턴스의 포인터를 넘겨주고, s2 인스턴스의
	//this 포인터를 가져다가 사용하는 형태로 작동

	//Something s1, s2;가 있을 때, 멤버 function에 대해서는 멤버 변수와는 달리 s1, s2각각 주소가 생기
	//는 것이 아니라 function은 고유주소 하나만을 가지는 형태


	int (*fptr2)() = /*&s1.->*/ &Something::getValue;
	//Something이라는 클래스의 멤버 함수 포인터 타입으로 변환 안됨
	//int (Something::*fptr2)() = /*&s1.->*/ &Something::getValue;
	//-> int (*fptr2)() = /*&s1.->*/ &Something::getValue; 변환
	//Something 클래스에 들어있지만 특정 인스턴스와 상관없이 실행시킬 수 있음

	cout << fptr2() << endl;

	return 0;
}