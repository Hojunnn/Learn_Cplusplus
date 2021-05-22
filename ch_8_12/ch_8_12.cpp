//�������� Ŭ������ �����ϰ� ��ȣ�ۿ��ϸ鼭 ���ư��� ���α׷������� Ŭ���� ���� ��ȣ�ۿ��� ����ϰ� 
//�����ϴ� ���� ���� ���� �� ����
//��ü ���⿡�� encapsulation�� �����ϱ� ���ؼ��� �ΰ����� ��ҵ��� �߻��� �� �ִµ�, �̶�
//friend �Լ�, friend Ŭ���� ���� �̿��ϸ� ���� �� ����ϰ� ����

#include <iostream>
using namespace std;

class A;// forward declaration

class B
{
private:
	int m_value = 2;
	//friend void doSomething(A& a, B& b)// Ŭ���� A�� ģ���̱⵵ �ؾ��ϰ�, B�� ģ���̱⵵ �ؾ���

public:
	void doSomething(A& a);
	//{
	//	cout << a.m_value << endl;//Ŭ���� A�� �ִٴ°� �ȴ�, �ٵ� m_value�� �ִ��� �𸥴�.
	//	// -> �ذ� : ��� �Լ��� definition�� declaration�� �и�
	//}

};

class A
{
private :
	int m_value = 1;

	//friend void doSomething(A& a, B& b);// ģ�� ���� -> Ư���Լ����� private ������� ���� ����
	// A�� Ŭ���� B�� �� -> ���� ���� class B;

	//�ٸ� Ŭ������ �� private ����� ������ �� �ְ� ������
	//friend class B;
	friend void B::doSomething(A& a);
	//���� �߻� : forward declaration�� ���ؼ� class B�� �ִٴ� ���� �� �� ������, doSomething
	//�� �� -> class B�� ���� �÷���
};

//����θ� �ڷ� �ű�
void B::doSomething(A& a)
{
	cout << a.m_value << endl;//Ŭ���� A�� �ִٴ°� �ȴ�, �ٵ� m_value�� �ִ��� �𸥴�.
	// -> �ذ� : ��� �Լ��� definition�� declaration�� �и�
}

//class B
//{
//private :
//	int m_value = 2;
//	//friend void doSomething(A& a, B& b)// Ŭ���� A�� ģ���̱⵵ �ؾ��ϰ�, B�� ģ���̱⵵ �ؾ���
//
//public:
//	void doSomething(A& a)
//	{
//		cout << a.m_value << endl;
//	}
//
//};

//void doSomething(A& a, B& b)//������ �����ε��� �ش� ��� ���� �߻� 
//{
//	cout << a.m_value << " " << b.m_value << endl;// ���� �Ұ�: �ذ� ���
//	// doSomething�̶�� �Լ��� class A�� ģ���� ����
//}


//���� doSomething���� �ܺ� �Լ� ����, �ٸ� Ŭ������ �� private ����� ������ �� �ְ� ������
int main()
{
	A a;
	//doSomething(a);
	B b;
	b.doSomething(a);



	return 0;
}