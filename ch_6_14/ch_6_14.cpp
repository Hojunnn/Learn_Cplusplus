#include <iostream>

using namespace std;

//특정한 경우에 포인터 보다 사용하기 편한게 참조

//void doSomething(int &n) {
//	
//	cout << &n << endl;
//	n = 10;
//	cout << "In do Something" << n << endl;
//}

// reference를 쓰면 doSomething함수와 main 함수에서 사용하는 변수 자체가 넘어감.

//void printElements(int(&arr)[5])//elements의 수가 반드시 들어가 줘야함
//{
//	for (int i = 0; i < 5; ++i) {
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//}

struct Something
{
	int v1;
	float v2;
};

struct Other
{
	Something st;
};

int main() {

	int value = 5;
	int *const ptr = &value;
	int &ref = value;//ptr과 value가 기능상 동일하다?


	//Other ot;
	///*ot.st.v1 = 1.0;*///타고타고타고 들어가는 부분이 많아지면 타이핑 힘듬
	//	//reference 사용

	//int &v1 = ot.st.v1;
	//
	//v1 = 1.0;


	////array를 함수에 넣어줄 때도 reference를 사용할 수 있음
	//const int length = 5;
	//int arr[length] = { 1,2,3,4,5 };

	//printElements(arr);

	//return 0;


	//int n = 5;

	//cout << n << endl;
	//cout << &n << endl;
	//

	//doSomething(n);

	//cout << n << endl;// 결과적으로 처음은 5, 마지막도 5가 나옴 
	// doSomething 함수의 n과 main함수 내부의 n은 완전히 다른 놈임
	   	  
	//int value = 5;
	//int value1 = 10;

	//int &ref1 = value;

	//cout << ref1 << endl;

	//ref1 = value1;

	//cout << ref1 << endl; // ref1에 reassign 가능하다.


	/*int &ref = value; */// reference 변수는 초기화가 무조건되어야함

	//const int y = 8;
	//int &ref = y; //안됨 왜? ref에서 y 값을 맘대로 바꿔버릴 수도 있기 때문에
	 
	/*int *ptr = nullptr;
	ptr = &value;

	int &ref = value;*/ // 내부적으로 ref가 value와 같은 변수 처럼 작동
	//마치 같은 메모리를 사용하는 것처럼 동작
	//ref는 value라는 변수의 별명처럼 사용할 수 있다

	//cout << ref << endl;

	//ref = 10;

	//cout << ref << endl;// 문법적으로 깔끔해 보임

	//cout << &value << endl;
	//cout << &ref << endl; // 한 변수의 또다른 이름
	//cout << ptr << endl;
	//cout << &ptr << endl;//포인터 변수도 변수다


	return 0;
} 