//�Ҹ���

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
	//�Ҹ���
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
//	//�Ҹ��ڴ� �ν��Ͻ��� �޸𸮿��� ������ �� ���ο��� �ڵ����� ȣ���
//	//�����Ҵ����� ������� ��쿡�� ������ ����� �ڵ����� �޸𸮰� �������� �ʱ� ������
//	//delete�� �޸𸮸� ������ ���� �Ҹ��ڰ� ȣ���
//	//�Ҹ��ڸ� ���α׷��Ӱ� ����ȣ���ϴ� ���� ��κ��� ��� ���� ���� ����

	while (true)
	{
		IntArray my_int_arr(10000);
	}


	return 0;
}