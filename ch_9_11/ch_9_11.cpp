//�����Ҵ�� �޸𸮿� ���� ������ ������ ����ν� ������ �ִ� Ŭ������ ���ؼ� ���縦 �Ҷ� ���� ����� ���� ����� �ϴ� ������ ���ؼ�
//���� ������ �����ε� Ȥ�� ���� ������ ������ ���� ��ٷο���

#include <cassert>
#include <iostream>
using namespace std;

class MyString
{
	//private:
public:
	char *m_data = nullptr;
	int m_length = 0;

public:
	MyString(const char *source = "")
	{
		assert(source);

		m_length = strlen(source) + 1;
		m_data = new char[m_length];// ���� �Ȱ��� �ּҸ� ����Ű�� �ִ� ������ ������ �޸𸮸� ���������� �Ǹ� heap�� �޸𸮰� ����������Կ���
		//�ұ��ϰ�, �� �ٸ� �����Ͱ� �� �޸𸮷� ���� �޸𸮿� �ִ� ���� �������Կ� ��� �ϴ� ������ �߻��� �� ����

		for (int i = 0; i < m_length; ++i)
		{
			m_data[i] = source[i];
		}

		m_data[m_length - 1] = '\0';//���ڿ��� �������̶�� ���� ǥ��
	}

	MyString(const MyString &source) //copy constructor
	{
		cout << "Copy Constructor" << endl;

		m_length = source.m_length;
		if (source.m_data != nullptr)
		{
			m_data = new char[m_length];// copy constructor ������ �ּҸ� ���� �Ҵ�ް�, 

			for (int i = 0; i < m_length; ++i)
				m_data[i] = source.m_data[i];//���� �Ҵ���� �޸𸮿� source�� ������ �ִ� ������� ����
		}

		else
			m_data = nullptr;
	}//���� constructor�� ������ ������ ������, �ٻ� ��, shallow copy�� �Ǵ� ���� ���ƾ� �ϴµ�...
	//�����ڸ� ���ƹ����� ��� MyString(const MyString &source) = delete;

	MyString& operator = (const MyString & source)//���� ������
	{
		////shallow copy
		//this->m_data = source.m_data;
		//this->m_length = source.m_length;

		cout << "Assignment Operator" << endl;

		if (this == &source) // prevent self-assignment -> �ڽ��� �ڽſ��� ������ �� ����
			return *this;

		delete[] m_data;// �̹� ���� �ִ� �޸� ����

		m_length = source.m_length;

		if (source.m_data != nullptr)
		{
			m_data = new char[m_length];  // �� �޸� �Ҵ�

			for (int i = 0; i < m_length; ++i)
				m_data[i] = source.m_data[i];
		}

		else
			m_data = nullptr;

		return *this;
	}

	~MyString()
	{
		delete[] m_data;
	}

	char* getString() { return m_data; }
	int getLength() { return m_length; }

};

int main()
{
	MyString hello("Hello");

	MyString str1 = hello;// assignment�� ������ copy constructor�� ȣ���

	MyString str2;
	str2 = hello; // assignment ȣ��

	//cout << (int*)hello.m_data << endl;//�ּҰ� üũ
	//cout << hello.getString() << endl;

	//{//scope ���� : local variable ����
	//	MyString copy = hello; //���� ������ ȣ�� -> ������ �ּ� ����: ������ ����� ���� �����ڰ� �������� ����
	//	cout << (int*)copy.m_data << endl;
	//	cout << copy.getString() << endl;
	//}

	//cout << hello.getString() << endl;


	//���� �޸� �Ҵ��� ����ϴ� ��쿡�� copy constructor�� assignment operator�� �����ε��� �� �����ؾ���
	return 0;

}

//copy constructor�� ������ �ּҴ� �ٸ�, ���� �Ҵ��� �޾����ϱ�