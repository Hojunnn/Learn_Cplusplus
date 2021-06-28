//���(Inheritance)
//������ �� ���������� ����ؾߵ� �κе�

#include <iostream>
using namespace std;

class Mother
{
private:
	int m_i;

//protected:
//	int m_i;

public:
	Mother() // ���Ƿ� Mother Ŭ���� ����Ʈ ������ ���� -> ���� E0291 �ذ�
		: m_i(0)
	{}
	
	//Mother Ŭ���� ������ �Ⱦ���?
	Mother(const int & i_in)// ���� child Ŭ�������� Mother Ŭ������ default �����ڸ� �ڵ����� ȣ�����ְ� �־��µ�,
	// �����ڸ� ������ �����ν�, default constructor�� �����. 
	// -> ����(Ȱ��)	E0291	"Mother" Ŭ������ �⺻ �����ڰ� �����ϴ�.
		: m_i(i_in)
	{
		cout << "Mother constructor" << endl;
	}

	void Setvalue(const int& i_in)
	{
		m_i = i_in;
	}

	int getValue()
	{
		return m_i;
	}

};

//child Ŭ������ ������ �� Mother Ŭ������ �����ڸ� ���� ȣ����
// ���� �ܰ踦 ��ġ�鼭 ������ ������� ��

class Child : public Mother //Mother Ŭ������ �ִ� �͵��� �⺻������ �� ����� // ������ ������ ����
{
private:
	double m_d;

public:
	Child(const int & i_in, const double & d_in)
		// : m_i(i_in),m_d(d_in) -> m_i�� Mother Ŭ������ ��� ���� -> child Ŭ�������� �� �� ���� (public, protected�� �ٲ㵵 ��� �Ұ���)
		//�� ? Child Ŭ������ ������ �� m_i �޸𸮰� ���� -> ������ ȣ��Ǵ� ������ ����
		
		// ����� ��� :
			: Mother(i_in), m_d(d_in)
	{
		/*Mother::Setvalue(i_in);
		m_d = d_in;*/ // -> �ʿ� ������
	}

	void setValue(const int & i_in, const double & d_in)
	{
		//m_i = i_in; // private��� ���� �����ڴ� Child Ŭ�������Ե� ����� �ȵ� -> protected ��� : private ���´� �����ϸ鼭 �ڽĿ��Դ� ���

		//private������ �����ϱ� ��.
		Mother::Setvalue(i_in);
		m_d = d_in;
	}

	void setValue(const double & d_in)
	{
		m_d = d_in;
	}

	double getValue()
	{
		return m_d;
	}

};

//class Child : public Mother // child Ŭ������ derived class
//{
//
//};

int main()
{
	Mother mother(1024);
	//mother.Setvalue(1024);
	cout << mother.getValue() << endl;

	//�޸� �Ҵ� �����鼭 �ʱ�ȭ �ּ���~ �ϴ°� Constructor�� ����

	Child child(1024,128);
	//child.Mother::Setvalue(1024);// ���� �����ڰ� ���� ��, ������ ó��~~
	//child.Setvalue(128);
	cout << child.Mother::getValue() << endl;
	cout << child.getValue() << endl;

	return 0;
}