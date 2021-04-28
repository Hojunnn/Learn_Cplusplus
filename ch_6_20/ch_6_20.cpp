#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

void printLength(array<int, 5>& my_arr) //한번 파라미터에 집어 넣으면 복사가 됨. -> array가 많이 크면 시간소요
//pointer를 쓸 수 도 있지만 reference
{
	cout << my_arr.size() << endl;
}

int main() {

	//int array[] = {1,2,3,4,5}; -> compiler가 알아서 5개다라는 것 인식

	array<int, 5> my_arr = { 1,21,3,40,5 };

	for (auto &element : my_arr) // reference 달면 중간에 복사되는 과정 생략
		cout << element << " ";
	cout << endl;

	sort(my_arr.begin(), my_arr.end());
	sort(my_arr.rbegin(), my_arr.rend());//역순 정렬


	for (auto &element : my_arr) 
		cout << element << " ";
	cout << endl;

	//함수 파라미터를 넘길때 편함
	//갯수가 부족해도 상관 없음

	//cout << my_arr[0] << endl;
	//cout << my_arr[1] << endl;
	//cout << my_arr.at(1) << endl; // 범위이상이면 체크를 해보고 예외처리를 발생시킴
	//cout << my_arr.size() << endl;	

	//printLength(my_arr);

	return 0;
}