//�� �ν��Ͻ����� ��� ������ ���ΰ�?
//Ŭ���� ���� this �����Ϳ� this pointer�� ����� chaining member functions

#include <iostream>
using namespace std;

//class Simple
//{
//private :
//	int _id;
//
//public :
//	Simple(int id)
//	{
//		setID(id); // �����ϴ� �κ� : this -> setID(id); = (*this).setID(id);
//
//		cout << this << endl; // �ڱ� �ڽ��� �ּ� ���
//	}
//
//	void setID(int id) { _id = id; }//setID, getID�� �ν��Ͻ����� �����ؼ� ����ϴ� ��
//	int getID() { return _id; }
//
//};

class Calc
{
private : 
	int _value;

public:
	Calc(int init_value)
		: _value(init_value)
	{}
	//�ڱ� �ڽ��� reference ����
	Calc& add(int value) { _value += value; return *this; }
	Calc& sub(int value) { _value -= value; return *this;	}
	Calc& mult(int value) { _value *= value; return *this;	}

	void print()
	{
		cout << _value << endl;
	}
};

// �� �ν��Ͻ����� �ڽ��� �����͸� ������ �ְ�, �� �����͸� ������ this Ű���� ���
int main()
{
	//Simple s1(1), s2(2);
	//s1.setID(2); //���۽� Simple::setID(&s2, 4);
	//s2.setID(4);

	//cout << &s1 << " " << &s2 << endl;

	Calc cal(10);
	/*cal.add(10);
	cal.sub(2);
	cal.mult(2);
	cal.print();*/

	//Trick ���� �� 
	cal.add(10).sub(2).mult(2).print();

	/*Calc &temp1 = cal.add(10);
	Calc &temp2 = temp1.sub(1);
	Calc &temp3 = temp2.mult(2);
	temp3.print();*/

	return 0;
}