//복사 생성자, 복사 초기화, Return Value Optimization	

#include <iostream>
#include <cassert>
using namespace std;

class Fraction
{
private:
	int m_numerator;// 분자
	int m_denominator;// 분모

	////복사를 못하도록 막고 싶을 때
	//Fraction(const Fraction &fraction)//copy constructor
	//	: m_numerator(fraction.m_numerator), m_denominator(fraction.m_denominator)
	//{
	//	cout << "Copy constructor" << endl;
	//}

public:
	Fraction(int num = 0, int den = 1)
		: m_numerator(num), m_denominator(den)
	{
		assert(den != 0);
	}

	Fraction(const Fraction &fraction)//copy constructor
		: m_numerator(fraction.m_numerator), m_denominator(fraction.m_denominator)
	{
		cout << "copy constructor" << endl;
	}

	//출력 연산자 오버로딩
	friend std::ostream & operator << (std::ostream & out, const Fraction & f)
	{
		out << f.m_numerator << " / " << f.m_denominator << endl;
		return out;
	}

};

Fraction doSomething()
{
	Fraction temp(1, 2);
	cout << &temp << endl;
	return temp;
}

int main()
{
	//Fraction frac(3, 5);

	////copy
	//Fraction fr_copy(Fraction(3,10)); // 이 경우 복사 생성자 호출 안됨 -> 컴파일러 똑똑함

	//////initialize
	////Fraction fr_copy = frac;

	//cout << frac << " " << fr_copy << endl;

	Fraction result = doSomething();//copy constrcutor 호출
	// 릴리즈 모드로 하면 copy constructor 호출 안됨 -> return value optimization
	cout << &result << endl;
	cout << result << endl;

	return 0;
}