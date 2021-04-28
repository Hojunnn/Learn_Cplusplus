//지금까지 나왔던 포인터들은 모두 변수의 포인터
//함수에 대한 포인터 

#include <iostream>
#include <array>
#include <functional>

using namespace std;

//int func(int x)
//{
//	return 5;
//}
//
//int goo(int)
//{
//	return 10;
//}

bool isEven(const int& number)
{
	if (number % 2 == 0) return true;
	else return false;
}

bool isOdd(const int& number)
{
	if (number % 2 != 0) return true;
	else return false;

}

//함수 포인터도 typedef로 줄여서 사용 가능
typedef bool(*check_fcn_t)(const int&);
//using check fcn_t = bool(*)(const int&); 

void printNumbers(const array<int, 10>& my_array, 
	function<bool(const int&)> check_fcn) // 함수 포인터 넣어줌
{
	for (auto element : my_array)
	{
		if (check_fcn(element) == true) cout << element;
		//if (!print_even && element % 2 == 1) cout << element;

	}
	cout << endl;
}


int main()
{
	//cout << func << endl; //  주소 값 출력

	//함수 포인터 선언
	//int(*fcnptr)(int) = func; // 함수의 return type, parameter 갯수에 맞게 선언

	//cout << fcnptr(1) << endl; // func가 가리키고 잇는건 함수, 5출력

	//fcnptr = goo;// goo를 가리키게 함

	//cout << fcnptr() << endl;

	array<int, 10> my_array{ 0,1,2,3,4,5,6,7,8,9 };

	function<bool(const int&)> fcnptr = isEven;


	//함수는 이름자체가 포인터
	//printNumbers(my_array, isEven);
	printNumbers(my_array, fcnptr);

	fcnptr = isOdd;

	printNumbers(my_array, fcnptr);

	return 0;
}