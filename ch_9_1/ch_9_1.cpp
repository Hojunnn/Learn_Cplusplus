// Class 끼리도 산술 연산자 정의 가능

#include <iostream>
using namespace std;

class Cents
{
private:
	int m_cents;

public:
	Cents(int cents = 0) { m_cents = cents; }
	int getCents() const { return m_cents; }
	int& getCents() { return m_cents; }

	//friend Cents operator + (const Cents &c1, const Cents &c2)// friends 때고 멤버로 만들 수 있음
	//{
	//	return Cents(c1.getCents() + c2.getCents());
	//}

	//연산자 오버로딩을 멤버 함수로 구현
	Cents operator + (const Cents &c2)// friends 때고 멤버로 만들 수 있음
		//매개변수가 많다는 오류 -> 첫번째 parameter를 this로 대체
	{
		return Cents(this->m_cents + c2.m_cents);
	}

	//멤버로만 해야하는 연산자 : =, [], (), ->
};

//연산자 오버로딩이 안되는 연산자
//: ?:, ::, sizeof, ., .*

//Cents /*add->*/ operator + (const Cents &c1, const Cents &c2) //연산자 오버로딩 
//, Cents &c_out)//출력값을 파라미터로 받는 방식이 많이 
//사용 됐었는데, 최근에는 Return type으로 받음
//{
//	//c_out.getCents() = c1.getCents() + c2.getCents();
//	return Cents(c1.getCents() + c2.getCents());
//}

int main() {
	Cents cents1(6);
	Cents cents2(8);

	/*Cents sum;
	add(cents1, cents2, sum);*/

	cout << (cents1 + cents2 + Cents(6) + Cents(10)).getCents() << endl;

	return 0;
}