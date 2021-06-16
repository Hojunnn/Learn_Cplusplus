//기본 자료형으로 array를 만들때에는 Initialize list를 이용해서 값을 편하게 초기화 가능
//class 같은 사용자 정의 자료형에서 생성자나 대입 연산자를 만들 때 편하게 사용할 수 있는 이니셜라이즈 리스트

#include <iostream>
#include <cassert>
#include <initializer_list>

using namespace std;

class IntArray
{
private:
	unsigned m_length = 0;
	int *m_data = nullptr;

public:
	IntArray(unsigned length)
		:m_length(length)
	{
		m_data = new int[length];
	}

	IntArray(const initializer_list<int> &list) // initializer list를 사용해서 생성자 구현
		:IntArray(list.size())//메모리 받아옴 , 중복되는 기능은 쪼개서 한곳에서만 구현되도록 만드는 것이 좋음
	{
		int count = 0;
		for (auto & e : list)
		{
			m_data[count] = e;
			++count;
		}

		//for (unsigned count = 0; count < list.size(); ++count)
		//{
		//	m_data[count] = list[count]; // error
		//}

	}

	~IntArray()
	{
		delete[] this->m_data;
	}

	//TODO : overload operator = 

	friend ostream & operator << (ostream & out, IntArray & arr)
	{
		for (unsigned i = 0; i < arr.m_length; ++i)
			out << arr.m_data[i] << " ";
		out << endl;
		return out;
	}
};

int main()
{
	int my_arr1[5] = { 1,2,3,4,5 };
	int *my_arr2 = new int[5]{ 1,2,3,4,5 };

	auto il = { 10, 20, 30 };

	IntArray int_array { 1,2,3,4,5 };
	cout << int_array << endl;
	
	return 0;
}