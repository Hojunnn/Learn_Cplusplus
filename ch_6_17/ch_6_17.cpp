#include <iostream>
#include <limits>
#include <algorithm>
#include <vector>


//For-each �ݺ���
using namespace std;

int main() {

	vector<int> finbonacci = { 0,1,1,2,300,5,8,13,21,34,55,89 };


	//int finbonacci[] = { 0,1,1,2,300,5,8,13,21,34,55,89 };

	//////change array values
	////for (int & number : finbonacci) //�ڷ������� auto ���
	////	number *= 10;
	//////�Լ� �Ķ���Ͷ� ���°� ���


	//////output
	////for (const auto number : finbonacci)
	////	cout << number << " ";
	////cout << endl;

	//array�� �����Ҵ��� ����ϰ� �Ǹ� for each�� ����� �� ����
	//�����Ҵ� �迭 ��� vector�� ����� �� ����
	int max_number = numeric_limits<int>::lowest();

	for (const auto &n : finbonacci)
	{
		max_number = max(max_number, n);
	}

	cout << max_number << endl;


	return 0;
}