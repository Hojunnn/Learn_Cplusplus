//상속(Inheritance)
//구현할 때 문법적으로 고려해야될 부분들

#include <iostream>
using namespace std;

class Mother
{
private:
	int m_i;

//protected:
//	int m_i;

public:
	Mother() // 임의로 Mother 클래스 디폴트 생성자 생성 -> 오류 E0291 해결
		: m_i(0)
	{}
	
	//Mother 클래스 생성자 안쓰나?
	Mother(const int & i_in)// 원래 child 클래스에서 Mother 클래스의 default 생성자를 자동으로 호출해주고 있었는데,
	// 생성자를 생성해 줌으로써, default constructor가 사라짐. 
	// -> 오류(활성)	E0291	"Mother" 클래스의 기본 생성자가 없습니다.
		: m_i(i_in)
	{
		cout << "Mother constructor" << endl;
	}

	void Setvalue(const int& i_in)
	{
		m_i = i_in;
	}

	int getValue()
	{
		return m_i;
	}

};

//child 클래스가 생성될 때 Mother 클래스의 생성자를 같이 호출함
// 생성 단계를 거치면서 층층이 순서대로 옴

class Child : public Mother //Mother 클래스에 있는 것들을 기본적으로 다 사용함 // 재사용이 굉장히 편함
{
private:
	double m_d;

public:
	Child(const int & i_in, const double & d_in)
		// : m_i(i_in),m_d(d_in) -> m_i는 Mother 클래스의 멤버 변수 -> child 클래스에서 쓸 수 없음 (public, protected로 바꿔도 사용 불가능)
		//왜 ? Child 클래스를 생성할 때 m_i 메모리가 없음 -> 생성자 호출되는 순서와 연관
		
		// 우아한 방법 :
			: Mother(i_in), m_d(d_in)
	{
		/*Mother::Setvalue(i_in);
		m_d = d_in;*/ // -> 필요 없어짐
	}

	void setValue(const int & i_in, const double & d_in)
	{
		//m_i = i_in; // private라는 접근 제어자는 Child 클래스에게도 허용이 안됨 -> protected 사용 : private 상태는 유지하면서 자식에게는 허용

		//private에서도 가능하긴 함.
		Mother::Setvalue(i_in);
		m_d = d_in;
	}

	void setValue(const double & d_in)
	{
		m_d = d_in;
	}

	double getValue()
	{
		return m_d;
	}

};

//class Child : public Mother // child 클래스는 derived class
//{
//
//};

int main()
{
	Mother mother(1024);
	//mother.Setvalue(1024);
	cout << mother.getValue() << endl;

	//메모리 할당 받으면서 초기화 주세요~ 하는게 Constructor의 역할

	Child child(1024,128);
	//child.Mother::Setvalue(1024);// 아직 생성자가 없을 때, 생성자 처럼~~
	//child.Setvalue(128);
	cout << child.Mother::getValue() << endl;
	cout << child.getValue() << endl;

	return 0;
}