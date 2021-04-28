#include <iostream>
#include <limits>
#include <algorithm>
#include <vector>


//For-each 반복문
using namespace std;

int main() {

	vector<int> finbonacci = { 0,1,1,2,300,5,8,13,21,34,55,89 };


	//int finbonacci[] = { 0,1,1,2,300,5,8,13,21,34,55,89 };

	//////change array values
	////for (int & number : finbonacci) //자료형으로 auto 사용
	////	number *= 10;
	//////함수 파라미터랑 들어가는게 비슷


	//////output
	////for (const auto number : finbonacci)
	////	cout << number << " ";
	////cout << endl;

	//array를 동적할당을 사용하게 되면 for each를 사용할 수 없음
	//동적할당 배열 대신 vector를 사용할 수 있음
	int max_number = numeric_limits<int>::lowest();

	for (const auto &n : finbonacci)
	{
		max_number = max(max_number, n);
	}

	cout << max_number << endl;


	return 0;
}