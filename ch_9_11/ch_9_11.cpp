//동적할당된 메모리에 대한 포인터 변수를 멤버로써 가지고 있는 클래스에 대해서 복사를 할때 깊은 복사냐 얕은 복사냐 하는 문제로 인해서
//대입 연산자 오버로딩 혹은 복사 생성자 구현이 조금 까다로워짐

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
		m_data = new char[m_length];// 만약 똑같은 주소를 가리키고 있는 포인터 변수가 메모리를 지워버리게 되면 heap에 메모리가 지워졌어야함에도
		//불구하고, 또 다른 포인터가 그 메모리로 가서 메모리에 있는 값을 가져갈게요 라고 하는 문제가 발생할 수 있음

		for (int i = 0; i < m_length; ++i)
		{
			m_data[i] = source[i];
		}

		m_data[m_length - 1] = '\0';//문자열의 마지막이라는 것을 표시
	}

	MyString(const MyString &source) //copy constructor
	{
		cout << "Copy Constructor" << endl;

		m_length = source.m_length;
		if (source.m_data != nullptr)
		{
			m_data = new char[m_length];// copy constructor 내에서 주소를 새로 할당받고, 

			for (int i = 0; i < m_length; ++i)
				m_data[i] = source.m_data[i];//새로 할당받은 메모리에 source가 가지고 있는 내용들을 복사
		}

		else
			m_data = nullptr;
	}//복사 constructor를 구분할 여력이 없을때, 바쁠 때, shallow copy가 되는 것을 막아야 하는데...
	//생성자를 막아버리는 방법 MyString(const MyString &source) = delete;

	MyString& operator = (const MyString & source)//대입 연산자
	{
		////shallow copy
		//this->m_data = source.m_data;
		//this->m_length = source.m_length;

		cout << "Assignment Operator" << endl;

		if (this == &source) // prevent self-assignment -> 자신이 자신에게 대입할 수 있음
			return *this;

		delete[] m_data;// 이미 갖고 있던 메모리 지움

		m_length = source.m_length;

		if (source.m_data != nullptr)
		{
			m_data = new char[m_length];  // 새 메모리 할당

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

	MyString str1 = hello;// assignment가 있지만 copy constructor가 호출됨

	MyString str2;
	str2 = hello; // assignment 호출

	//cout << (int*)hello.m_data << endl;//주소값 체크
	//cout << hello.getString() << endl;

	//{//scope 정의 : local variable 생성
	//	MyString copy = hello; //복사 생성자 호출 -> 포인터 주소 복사: 하지만 현재는 복사 생성자가 존재하지 않음
	//	cout << (int*)copy.m_data << endl;
	//	cout << copy.getString() << endl;
	//}

	//cout << hello.getString() << endl;


	//동적 메모리 할당을 사용하는 경우에는 copy constructor나 assignment operator를 오버로딩할 때 주의해야함
	return 0;

}

//copy constructor가 가지는 주소는 다름, 새로 할당을 받았으니까