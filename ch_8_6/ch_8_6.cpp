//소멸자

#include <iostream>
using namespace std;

//class Simple
//{
//private:
//	int _id;
//
//public :
//	Simple(const int& id_in)
//		: _id(id_in)
//	{
//		cout << "Constructor" << _id << endl;
//	}
//
//	~Simple()
//	{
//		cout << "Destructor" << _id << endl;
//	}
//};

class IntArray
{
private:
	int *_arr = nullptr;
	int _length = 0;

public:
	IntArray(const int length_in)
	{
		_length = length_in;
		_arr = new int[_length];

		cout << "Constructor" << endl;
	}
	//소멸자
	~IntArray()
	{
		delete[] _arr;
	}

	int size() { return _length;  }
};



int main() {

////	Simple s1(0);
//	Simple *s1 = new Simple(0);
//	Simple s2(1);
//
//	delete s1;
//
//	//소멸자는 인스턴스가 메모리에서 해제될 때 내부에서 자동으로 호출됨
//	//동적할당으로 만들어진 경우에는 영역을 벗어나도 자동으로 메모리가 해제되지 않기 때문에
//	//delete로 메모리를 해제할 때만 소멸자가 호출됨
//	//소멸자를 프로그래머가 직접호출하는 것은 대부분의 경우 권장 하지 않음

	while (true)
	{
		IntArray my_int_arr(10000);
	}


	return 0;
}