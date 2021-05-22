//���� ��� �Լ�
#include <iostream>
using namespace std;

class Something
{
public:

	//inner class
	class _init
	{
	public:
		_init()
		{
			s_value = 9876;
		}
	};

private:
	static int s_value;
	int m_value;

	static _init s_initializer;
	
public:

	Something()
		:m_value(123) //, s_value(1024)// �����ڿ��� static variable �ʱ�ȭ �Ұ���
		// �����ϰ� �Ϸ��� �����ڰ� static -> C++������ static �����ڴ� �������� ����
	{}

	static int getValue()
	{
		return s_value; // static ���� ����: this�� ���� �Ұ���
	}

	//Ŭ���� �ȿ��� static ����� �ʱ�ȭ�� �� ������? -> ��ȸ ���
	int temp()
	{
		return this->s_value; // Ư�� �ν��Ͻ��� �ּҸ� �޾ƴٰ� �� �ν��Ͻ��� �����ִ� ������� 
		//�ּҸ� �����ٰ� ����ϰڴ� (this ���)
	}
};

int Something::s_value;
Something::_init Something::s_initializer;

int main() {
	cout << Something::getValue() << endl;
	// Ư�� �ν��Ͻ� ��� ���� getvalue�� ����� �� ������ ���
	Something s1,s2;
	cout << s1.getValue() << endl;
	//cout << s1.s_value << endl;

	int (Something::*fptr1)() = /*&s1.->*/ &Something::temp;//Something �� �����ִ� member function
	//�̶�� ���� ����� �ָ� ���� ����

	cout << (s2.*fptr1)() << endl;//fptr1�� Something Ŭ������ temp��� ��� �Լ��� ptr ���� ����
	//�ִµ� �� ������ ��ġ�� �ִ� �Լ��� �����ų �� s2��� �ν��Ͻ��� �����͸� �Ѱ��ְ�, s2 �ν��Ͻ���
	//this �����͸� �����ٰ� ����ϴ� ���·� �۵�

	//Something s1, s2;�� ���� ��, ��� function�� ���ؼ��� ��� �����ʹ� �޸� s1, s2���� �ּҰ� ����
	//�� ���� �ƴ϶� function�� �����ּ� �ϳ����� ������ ����


	int (*fptr2)() = /*&s1.->*/ &Something::getValue;
	//Something�̶�� Ŭ������ ��� �Լ� ������ Ÿ������ ��ȯ �ȵ�
	//int (Something::*fptr2)() = /*&s1.->*/ &Something::getValue;
	//-> int (*fptr2)() = /*&s1.->*/ &Something::getValue; ��ȯ
	//Something Ŭ������ ��������� Ư�� �ν��Ͻ��� ������� �����ų �� ����

	cout << fptr2() << endl;

	return 0;
}