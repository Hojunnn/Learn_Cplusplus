//객체를 설계하다 보면 이 객체/클래스의 인스턴스들은 만들어지자마자 이런 기능, 속성을 해야해하는 경우가 존재
// 이럴 때 생성자를 사용

#include <iostream>
using namespace std;

//class Fraction
//{
//private: //public : 
//	int _numerator;//분자
//	int _denominator;//분모
//
//public : //생성자 -> 외부에서 호출을 하려고 쓰는 것이 아니라 
//	Fraction(const int& num_in, const int& den_in) // default value 넣기 가능 
//	{
//		_numerator = num_in;
//		_denominator = den_in;
//	}
//
//	//이상한 숫자가 나오는 것은 default 생성자 때문
//
//public:
//	void print()
//	{
//		cout << _numerator << " / " << _denominator << endl;
//	}
//};

class Second
{
public:
	Second()
	{
		cout << "class Second Constructor()" << endl;

	}
};

class First
{
	Second sec;

public:
	First()
	{
		cout << "class First Constructor()" << endl;
	}
};

int main()
{
	////Fraction frac;//{ 0,1 }; -> 생성자 실행, 생성자의 파라미터가 없을 경우 -> frac<특수한경우>
	////frac.print();// 이상한 값들이 보임 -> 초기화 되지 않아서
	////해결 방법 : class의 access specifier를 public으로 
	////frac._numerator = 0;
	////frac._denominator = 1;

	//Fraction one_thirds(1, 3); // = Fraction{1,3}; 대입도 가능
	//// {}, ()의 차이 : type 변환이 안됨 {}이 최근에 나왔고 좀더 엄걱하다
	//one_thirds.print();

	First fir;

	return 0;
}