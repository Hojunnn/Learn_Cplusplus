//Ŭ�������� ��� ������ �ܺο��� ���� �� �� �մ��� ������, �ڽ��� ������ �� �ִ��� �����ĸ� ���� �����ڸ� ���ؼ� ��������
//����� ���� �� ���� �θ�� ���� �������� �͵鿡 ���ؼ� ��� ������ �� �ִ��� ���� ������ ���ؼ��� ���� ������ ��밡��
//��Ӱ� ���� ������

#include <iostream>
using namespace std;

class Base
{
public:
	int m_public;
protected:
	int m_protected;
private:
	int m_private;
};

class Derived : private Base // -> private base�� ��, protected ����
{
public:
	Derived()
	{// Base�� ��� ������ ���ؼ� Derived���� ���� �������� �׽�Ʈ (public base �� ��� -> m_public, protected ����) 
		/*m_public = 123;
		m_protected = 123;*/
		/*m_private = 123;*/ //-> �ȴ�

		Base::m_public;
		Base::m_protected;
	}
};

class GrandChild : public Derived
{
public:
	GrandChild()
	{
		//Derived::m_public; //��� �Ұ��� -> derived Ŭ�������� private base�� ��, public,protected �Ұ���
	}
};

int main()
{
	/*Base base;

	base.m_public = 123;*/
	/*base.m_protected = 123;
	base.m_private = 123;*/ // -> �Ұ���

	Derived derived;
	// derived.m_public = 123;// class Derived : protected base�� ��, �ܺο��� ������ �ȵ�
	/*derived.m_protected = 123;
	derived.m_private = 123;*/ // -> class Derived : public base�� ��, ���ο��� ��� ���� ���� �� ���� ������ protected, private�� ���� �Ұ���


	return 0;
}