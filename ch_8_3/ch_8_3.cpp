//��ü�� �����ϴ� ���� �� ��ü/Ŭ������ �ν��Ͻ����� ��������ڸ��� �̷� ���, �Ӽ��� �ؾ����ϴ� ��찡 ����
// �̷� �� �����ڸ� ���

#include <iostream>
using namespace std;

//class Fraction
//{
//private: //public : 
//	int _numerator;//����
//	int _denominator;//�и�
//
//public : //������ -> �ܺο��� ȣ���� �Ϸ��� ���� ���� �ƴ϶� 
//	Fraction(const int& num_in, const int& den_in) // default value �ֱ� ���� 
//	{
//		_numerator = num_in;
//		_denominator = den_in;
//	}
//
//	//�̻��� ���ڰ� ������ ���� default ������ ����
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
	////Fraction frac;//{ 0,1 }; -> ������ ����, �������� �Ķ���Ͱ� ���� ��� -> frac<Ư���Ѱ��>
	////frac.print();// �̻��� ������ ���� -> �ʱ�ȭ ���� �ʾƼ�
	////�ذ� ��� : class�� access specifier�� public���� 
	////frac._numerator = 0;
	////frac._denominator = 1;

	//Fraction one_thirds(1, 3); // = Fraction{1,3}; ���Ե� ����
	//// {}, ()�� ���� : type ��ȯ�� �ȵ� {}�� �ֱٿ� ���԰� ���� �����ϴ�
	//one_thirds.print();

	First fir;

	return 0;
}