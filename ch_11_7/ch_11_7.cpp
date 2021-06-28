//����� ���� �Ϲ����� ��쿡�� ������ִ� �θ� Ŭ������ ����� �޴� �ڽ� Ŭ���� ���� ������̰� �׷��� ������ ���� �� ����
//�����ϰ� ����� �� �ִ� �Լ� �������̵�

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
		cout << " I'm base " << endl; 
	}

	//output operate overloading
	friend std::ostream & operator << (std::ostream & out, const Base & b)
	{
		cout << "This is base output" << endl;
		return out;
	}
};

class Derived : public Base
{
private:
	double m_d;

public:
	Derived(int value)
		:Base(value) 
	{}

	void print()
	{
		//�θ� Ŭ������ print �Լ��� ȣ���ϰ� �� ���� �ڽ� Ŭ�������� I'm derived���� �߰��� �۾��ϰ� �ʹٸ�
		Base::print();
		cout << " I'm derived " << endl;
	}

	friend std::ostream & operator << (std::ostream & out, const Derived & b)
	{
		cout << static_cast<Base>(b); // Base::print()ó�� operator overloading���� ����
		//static cast�� �߱� ������ ���� �ִ�(Base class) operator overloading -> �� ȣ���
		//Derived�� ���� b�� <Base>�� casting�� -> �޸� ������ Derived�� Base�� ���� ������ �����Ƿ�.. Ȯ��ȴٰ� ����
		cout << "This is Derived output" << endl;
		return out;
	}
};

int main()
{
	Base base(3);
	//base.print();
	cout << base;

	Derived derived(7);
	//derived.print();
	cout << derived;

	return 0;
}

//��� ���� �Լ��� ȣ���ϴ� ���
//��� ���� Ŭ�������� ���ο� �Լ��� ������ �� �θ�Ŭ������ �ִ� ����� ���� ����ϴ� ��
//�Լ� �̸��� ���� �� ��� �ϴ°�?
//�̸��� ���� �Լ��� �ڽ� Ŭ�������� ���� �����ؼ� ����ϴ� �� Ȥ�� ���� ���Ǹ� �ϴµ� ����� �߰��ؼ� ���� �����ϴ� ���� ���� ���̵��̶�� ��