#include <iostream>
#include <vector>

//���� �迭�� ��ü�� �� �ִ� std::array
//���� �迭�� ��ü�� �� �ִ� std::vector

using namespace std;

int main()
{
	//std::array<int,5> array;
	//�޸𸮸� �˾Ƽ� ������.
	//���̸� �˾Ƽ� ����� -> �Լ� �Ķ���ͷ� ������ �ڽ��� ���� ���.
	vector<int> array; //������� ���� ��.

	vector<int> my_vec = { 1,2,3,4,5 };

	cout << my_vec.size() << endl;

	my_vec.resize(10);

	vector<int> my_vec_1 = { 1,2,3 };

	cout << my_vec_1.size() << endl;

	vector<int> my_vec_2 { 1,2,3,4 }; // uniform initialization ����
	
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