//여러개의 클래스가 복잡하게 상호작용하면서 돌아가는 프로그램에서는 클래스 간의 상호작용을 깔끔하게 
//정리하는 것이 쉽지 않을 수 있음
//객체 지향에서 encapsulation을 유지하기 위해서는 부가적인 요소들이 발생할 수 있는데, 이때
//friend 함수, friend 클래스 등을 이용하면 조금 더 깔끔하게 가능

#include <iostream>
using namespace std;

class A;// forward declaration

class B
{
private:
	int m_value = 2;
	//friend void doSomething(A& a, B& b)// 클래스 A의 친구이기도 해야하고, B의 친구이기도 해야함

public:
	void doSomething(A& a);
	//{
	//	cout << a.m_value << endl;//클래스 A가 있다는건 안다, 근데 m_value는 있는지 모른다.
	//	// -> 해결 : 멤버 함수의 definition과 declaration을 분리
	//}

};

class A
{
private :
	int m_value = 1;

	//friend void doSomething(A& a, B& b);// 친구 선언 -> 특정함수에서 private 멤버에도 접근 가능
	// A는 클래스 B를 모름 -> 전방 선언 class B;

	//다른 클래스가 내 private 멤버를 접근할 수 있게 해주자
	//friend class B;
	friend void B::doSomething(A& a);
	//문제 발생 : forward declaration을 통해서 class B가 있다는 것은 알 수 있으나, doSomething
	//은 모름 -> class B를 위로 올려줌
};

//선언부를 뒤로 옮김
void B::doSomething(A& a)
{
	cout << a.m_value << endl;//클래스 A가 있다는건 안다, 근데 m_value는 있는지 모른다.
	// -> 해결 : 멤버 함수의 definition과 declaration을 분리
}

//class B
//{
//private :
//	int m_value = 2;
//	//friend void doSomething(A& a, B& b)// 클래스 A의 친구이기도 해야하고, B의 친구이기도 해야함
//
//public:
//	void doSomething(A& a)
//	{
//		cout << a.m_value << endl;
//	}
//
//};

//void doSomething(A& a, B& b)//연산자 오버로딩시 해당 경우 많이 발생 
//{
//	cout << a.m_value << " " << b.m_value << endl;// 접근 불가: 해결 방안
//	// doSomething이라는 함수를 class A의 친구로 선언
//}


//이제 doSomething같은 외부 함수 말고, 다른 클래스가 내 private 멤버를 접근할 수 있게 해주자
int main()
{
	A a;
	//doSomething(a);
	B b;
	b.doSomething(a);



	return 0;
}