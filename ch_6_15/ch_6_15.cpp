#include <iostream>

using namespace std;

void doSomething(const int& x)//reference로 넣을 경우, pointer로 넣을 경우 변수 복사가 일어나는데,
//복사가 일어나지 않음
{
	cout << x << endl;
}


int main()
{
	int a = 1;
	doSomething(a);//호출되는 함수 매개변수에 const가 있으면 바로 literal 상수를 사용할 수 잇음
	
	
	
	int x=5;
	const int &ref_x = x;
	const int &ref_2 = ref_x;


	//refernce 선언시 메모리 주소가 있어야지만 선언이 가능
	//const reference에서는 가능

	const int &ref_y = 3 + 4; // literal 값이 올 수 잇음

	cout << ref_y << endl;
	cout << &ref_y << endl;


	return 0;

}