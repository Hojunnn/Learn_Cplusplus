//array나 vector를 사용할때 함수를 호출하는 대신 Subscript operator[]를 사용해서 값을 접근하기도 하고
//바꾸기도 함. 첨자 연산자를 오버로딩하는 방법

#include <iostream>
#include <cassert>
using namespace std;

class IntList
{
private:
	int m_list[10]{ 1,2,3,4,5,6,7,8,9,10 };

public:
	/*void setItem(int index, int value)
	{
		m_list[index] = value;
	}

	int getItem(int index)
	{
		return m_list[index];
	}

	int * getList()
	{
		return m_list;
	}*/
	//subscript operator는 많이 사용되기 때문에, if문보다는 assert를 써야함.
	int & operator [] (const int index)
	{
		assert(index >= 0);
		assert(index < 10);
		
		return m_list[index];
	}

	//const 버전 생성
	const int & operator [] (const int index) const
	{
		
		assert(index >= 0);
		assert(index < 10);
		return m_list[index];
	}

};

int main()
{
	/*IntList my_list;
	my_list.setItem(3, 1);
	cout << my_list.getItem(3) << endl;
	my_list.getList()[3] = 1;
	cout << my_list.getList()[3] << endl;*/

	IntList my_list;
	//my_list[3] = 10; // 항상 주소를 가지는 lvalue여야 해서 Reference로 받음
	cout << my_list[3] << endl;


	//IntList *list = new IntList;
	//(*list)[3] = 10; // ok
	//list[3] = IntList; //다른 시도로 판단

	return 0;
}