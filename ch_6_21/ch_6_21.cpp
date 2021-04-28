#include <iostream>
#include <vector>

//정적 배열을 대체할 수 있는 std::array
//동적 배열을 대체할 수 있는 std::vector

using namespace std;

int main()
{
	//std::array<int,5> array;
	//메모리를 알아서 지워줌.
	//길이를 알아서 기억함 -> 함수 파라미터로 보내면 자신의 길이 기억.
	vector<int> array; //사이즈는 몰라도 됨.

	vector<int> my_vec = { 1,2,3,4,5 };

	cout << my_vec.size() << endl;

	my_vec.resize(10);

	vector<int> my_vec_1 = { 1,2,3 };

	cout << my_vec_1.size() << endl;

	vector<int> my_vec_2 { 1,2,3,4 }; // uniform initialization 가능
	
	cout << my_vec_2.size() << endl;

	cout << "print" << endl;

	for (auto &itr : my_vec)
		cout << itr << " ";
	cout<< endl;

	cout << my_vec[1] << endl;
	cout << my_vec.at(1) << endl;
	cout << my_vec.size() << endl;


	return 0;
}