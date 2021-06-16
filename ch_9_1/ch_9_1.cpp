// Class ������ ��� ������ ���� ����

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

	//friend Cents operator + (const Cents &c1, const Cents &c2)// friends ���� ����� ���� �� ����
	//{
	//	return Cents(c1.getCents() + c2.getCents());
	//}

	//������ �����ε��� ��� �Լ��� ����
	Cents operator + (const Cents &c2)// friends ���� ����� ���� �� ����
		//�Ű������� ���ٴ� ���� -> ù��° parameter�� this�� ��ü
	{
		return Cents(this->m_cents + c2.m_cents);
	}

	//����θ� �ؾ��ϴ� ������ : =, [], (), ->
};

//������ �����ε��� �ȵǴ� ������
//: ?:, ::, sizeof, ., .*

//Cents /*add->*/ operator + (const Cents &c1, const Cents &c2) //������ �����ε� 
//, Cents &c_out)//��°��� �Ķ���ͷ� �޴� ����� ���� 
//��� �ƾ��µ�, �ֱٿ��� Return type���� ����
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