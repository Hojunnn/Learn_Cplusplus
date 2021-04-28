#include <iostream>
#include <array>
#include <tuple>

//return by address , return by reference , tuple 사용법
using namespace std;

//int& getValue(int x)
//{
//	int value = x * 2;
//	return value;
//}

//int& get(array<int, 100> &my_array, int ix)
//{
//	return my_array[ix];
//}

//struct S
//{
//	int a, b, c, d;
//};
//
//S getStruct() {
//	S my_s{ 1,2,3,4 };
//}

//int* allocateMemory(int size)
//{
//	return new int[size]; // Design pattern -> Factory Method 
//}

tuple<int,double> getTuple()//사용자 정의 자료형이 됨
{
	int a = 10;
	double d = 3.14; 
	return make_tuple(a, d);
}


int main() {

	//int *value = getValue(3); // *getValue() -> getValue 함수의 영역을 벗어나면 사라지기때문에 dereferencing 안전하지 않음
	//// *value -> 더 위험함 )) 가지고 있는 주소가 getValue의 주소임

	/*int *array = allocateMemory(1024);*/

	//int &value = getValue(5);//&value를 받는 경우 -> 문제 발생 가능

	//cout << value << endl;
	//cout << value << endl;

	//array<int, 100> my_array;
	//my_array[30] = 10;

	//get(my_array, 30) = 1024; //get(my_array,30)의 형태가 my_array[30]의 형태와 동일함

	//cout << my_array[30] << endl;

	//S my_s = getStruct(); // 구조체를 통해서 return 값 받음
	//my_s.a = 2;

	//tuple<int, double> my_tp = getTuple();
	//cout << get<0>(my_tp) << endl; // a
	//cout << get<1>(my_tp) << endl; // d

	//auto[a, d] = getTuple();//C++ 17에서 가능
	//cout << a << endl;
	//cout << d << endl;

	return 0;
}