//다른 클래스들을 담는 역할을 하는 클래스를 컨테이너 클래스라고 함

#include <iostream>
#include <vector>
#include <array>

using namespace std;

class IntArray
{
private:
	int m_length = 0;
	int *m_data = nullptr;
	//Integer가 담기는 IntArray 구현

public:
	//Constructors
	//Destrucotrs
	//initialize()
	//reset();
	//resize();
	//insertBefore(const int & value, const int & ix);
	//remove(const int & ix);
	//push_back(const int& value);

};


int main()
{
	//IntArray m_arr{1,3,5,7,9};
	//my_arr.insertBefore(10,1); //1,10,3,5,7,9
	//my_arr.remove(3)           //1,10,3,7,9
	//my_arr.push_back(13);      //1,10,3,7,9,13

	std::vector<int> int_vec;
	array<int, 10> int_arr; // 컨테이너들 사용 -> member of 관계 표시
}