//각 인스턴스들을 어떻게 구분할 것인가?
//클래스 안의 this 포인터와 this pointer를 사용한 chaining member functions

#include <iostream>
using namespace std;

//class Simple
//{
//private :
//	int _id;
//
//public :
//	Simple(int id)
//	{
//		setID(id); // 생략하는 부분 : this -> setID(id); = (*this).setID(id);
//
//		cout << this << endl; // 자기 자신의 주소 출력
//	}
//
//	void setID(int id) { _id = id; }//setID, getID는 인스턴스들이 공유해서 사용하는 것
//	int getID() { return _id; }
//
//};

class Calc
{
private : 
	int _value;

public:
	Calc(int init_value)
		: _value(init_value)
	{}
	//자기 자신의 reference 리턴
	Calc& add(int value) { _value += value; return *this; }
	Calc& sub(int value) { _value -= value; return *this;	}
	Calc& mult(int value) { _value *= value; return *this;	}

	void print()
	{
		cout << _value << endl;
	}
};

// 각 인스턴스들이 자신의 포인터를 가지고 있고, 그 포인터를 보려면 this 키워드 사용
int main()
{
	//Simple s1(1), s2(2);
	//s1.setID(2); //동작시 Simple::setID(&s2, 4);
	//s2.setID(4);

	//cout << &s1 << " " << &s2 << endl;

	Calc cal(10);
	/*cal.add(10);
	cal.sub(2);
	cal.mult(2);
	cal.print();*/

	//Trick 적용 후 
	cal.add(10).sub(2).mult(2).print();

	/*Calc &temp1 = cal.add(10);
	Calc &temp2 = temp1.sub(1);
	Calc &temp3 = temp2.mult(2);
	temp3.print();*/

	return 0;
}