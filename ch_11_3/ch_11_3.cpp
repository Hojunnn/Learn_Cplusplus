//������ Ŭ�������� ���� ����

#include <iostream>

using namespace std;


//access specifier : private -> child Ŭ������ �θ��� ������� ��� ���ϰ� ���ƹ���
//class Mother
//{
//public:
//	int m_i;
//
//	
//
//	Mother(const int & i_in = 0)
//		:m_i(i_in)
//	{
//		cout << "Mother Construction" << endl;
//	}
//
//};
//
//class Child : public Mother // Child Ŭ������ Mother Ŭ�����κ��� �����Ǿ���. 
//{
//public:
//	double m_d;
//
//public:
//	Child()
//		: Mother(1024),m_d(1.0) // -> mother class�� ���� �����ͼ� �ʱ�ȭ�� �� ������ �� �ȵǳ�? -> ���� default�� Mother()�� ������ ����
//		//Child ���� �ʱ�ȭ �����ַ��� -> Mother constructor ����
//	{
//		cout << "Child Construction" << endl;
//	}
//};

class A
{
public:
	A()
	{
		cout << "A constructor" << endl;
	}
};

class B : public A
{
public:
	B()
	{
		cout << "B constructor" << endl;
	}
};

class C : public B
{
public:
	C()
	{
		cout << "C constructor" << endl;
	}
};

// Constructor ȣ�� ���� : C-> B -> A
int main()
{
	//Child c1; // -> Mother constructor ���� child constructor ȣ��
	//-> Mother�� constructor�� ȣ��Ǳ� ���� Child�� �ʱ�ȭ �ڵ� ���ο��� ������ m_i�� �ʱ�ȭ �� �� ����

	C c;
	return 0;
}