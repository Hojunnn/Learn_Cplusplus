// Class�� const

#include <iostream>
#include <string>
using namespace std;

//class Something
//{
//public:
//	int _value = 0;
//	 
//	Something(const Something& st_in) // �ּҰ� �ٸ� ������ copy constructor ����
//	{
//		_value = st_in._value;
//		cout << "Copy Constructor" << endl;
//	}
//
//	Something()
//	{
//		cout << "Constructor" << endl;
//	}
//
//	void setValue(int value) { _value = value; }
//	int getValue() const { return _value; }
//};

//void print(const Something& st)//-> ������ constructor ���� -> const reference ���� ȿ����
//{
//	
//	cout << &st << endl;
//	cout << st.getValue() << endl;
//}

class Something
{
public:
	string _value = "default";

	const string& getValue() const 
	{ 
		cout << "const version " << endl;
		return _value; 
	}
	string& getValue()
	{ 
		cout << "normal version" << endl;
		return _value; 
	}

};



int main()
{
	const Something som; //�ν��Ͻ�, ������Ʈ -> const �߰��ϸ� const ��� �Լ��� ��밡��
	//som.setValue(3); //const ����� ����

	//cout << som.getValue() << endl;//const ����� ���� -> body ����ο� const�� �߰����ָ� ���� X

	/*cout << &som << endl;

	print(som);*/

	Something som;
	som.getValue() = "aa";

	const Something som2;
	som2.getValue();

	return 0;
}