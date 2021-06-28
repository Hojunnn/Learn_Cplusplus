//����� �⺻������ �θ�� ���� ������ �޾� ���� ��
//��� ���� ���� ������� �ʵ���, ������� ���ϵ��� ���ƹ����� ���

#include <iostream>
using namespace std;

class Base
{
protected:
	int m_i;

public:
	Base(int value)
		:m_i(value)
	{}

	void print()
	{
		cout << "I'm base" << endl;
	}
};

class Derived : public Base
{
private:
	double m_d;
	using Base::print; // print �Լ��� �ۿ��� ������ ���ϵ��� ���¹�
	//�θ𿡼��� ������ ������ �ڽĿ����� ������ �ȵǵ��� ���� ���

public:
	Derived(int value)
		: Base(value)
	{}

	using Base::m_i; // m_i�� ���뷯 �ٲ� �� ���� -> Derived �ȿ��� public�� ��

private:
	void print() = delete;
	//�θ𿡼��� ������ ������ �ڽĿ����� ������ �ȵǵ��� ���� ���

};

//�θ𿡼��� ������ ������ �ڽĿ����� ������ �ȵǵ��� ���� ���

int main()
{
	Base base(5);
	base.print();
	
	Derived derived(7);

	derived.m_i;
	//derived.print();// print �Լ��� �ۿ��� ������ ���ϵ��� ���¹�

	return 0;
}