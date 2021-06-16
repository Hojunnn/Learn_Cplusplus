//개발자의 편의를 위해서 생성자를 변환을 시켜주는 converting constructor
//변환 생성자를 막아주는 explicit 키워드, 특정한 생성자를 사용하지 못하게 지워버리는 delete


#include <iostream>
#include <cassert>
using namespace std;

class Fraction
{
private:
	int m_numerator;// 분자
	int m_denominator;// 분모

public:

	Fraction(char) = delete;

	explicit Fraction(int num = 0, int den = 1)//explicit 사용
		: m_numerator(num), m_denominator(den)
	{
		assert(den != 0);
	}

	Fraction(const Fraction &fraction)// 
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

void doSomething(Fraction frac)
{
	cout << frac << endl;
}

int main()
{
	Fraction frac(7);
	//Fraction frac2('c');//delete로 인해 막힘

	doSomething(frac);
	//doSomething(7);//explicit으로 인해 막힘

	return 0;
}