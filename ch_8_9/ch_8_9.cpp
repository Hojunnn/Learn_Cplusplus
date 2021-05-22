// Class와 const

#include <iostream>
#include <string>
using namespace std;

//class Something
//{
//public:
//	int _value = 0;
//	 
//	Something(const Something& st_in) // 주소가 다른 이유는 copy constructor 때문
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

//void print(const Something& st)//-> 기존의 constructor 복사 -> const reference 사용시 효율적
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
	const Something som; //인스턴스, 오브젝트 -> const 추가하면 const 멤버 함수만 사용가능
	//som.setValue(3); //const 적용시 오류

	//cout << som.getValue() << endl;//const 적용시 오류 -> body 선언부에 const를 추가해주면 문제 X

	/*cout << &som << endl;

	print(som);*/

	Something som;
	som.getValue() = "aa";

	const Something som2;
	som2.getValue();

	return 0;
}