//���� ������, ���� �ʱ�ȭ, Return Value Optimization	

#include <iostream>
#include <cassert>
using namespace std;

class Fraction
{
private:
	int m_numerator;// ����
	int m_denominator;// �и�

	////���縦 ���ϵ��� ���� ���� ��
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

	//��� ������ �����ε�
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
	//Fraction fr_copy(Fraction(3,10)); // �� ��� ���� ������ ȣ�� �ȵ� -> �����Ϸ� �ȶ���

	//////initialize
	////Fraction fr_copy = frac;

	//cout << frac << " " << fr_copy << endl;

	Fraction result = doSomething();//copy constrcutor ȣ��
	// ������ ���� �ϸ� copy constructor ȣ�� �ȵ� -> return value optimization
	cout << &result << endl;
	cout << result << endl;

	return 0;
}