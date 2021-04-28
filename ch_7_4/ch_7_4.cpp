#include <iostream>

using namespace std;

//void foo(int *ptr)
//{
//	cout << *ptr << " " << ptr << " " << &ptr << endl;
//}

void foo(double degrees, double *sin_out, double *cos_out)//reference랑은 다름 -> 포인터도 변수다.
//내부적으로는 값에 의한 전달 이다 (not call by reference)
{
	*sin_out = 1.0;
	*cos_out = 2.0;
}


int main() {

	int value = 5;
	cout << value << " " << &value << endl;

	int *ptr = &value;

	double degrees = 30;
	double sin, cos;

	foo(degrees, &sin, &cos);//주소로 바꿔서 넣어줘야함
	//foo(&value);

	cout << sin << " " << cos << endl;


	return 0;
}