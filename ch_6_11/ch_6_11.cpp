#include <iostream>

using namespace std;

int main()
{

	//int array[1000000000];

	//컴퓨터에게 4byte의 메모리 공간 할당해달라 -> 정적으로 할당하는 메모리는 stack에 들어감
	//stack은 작음 -> heap은 크기때문에 동적할당을 잘 사용하는 것이 필수적

	int var;  
	new int;
	
	/*int *ptr = new int{ 7 };*/
	// 메모리를 사용할 수 없을 떄 메모리가 죽어버리게 프로그램을 짜는 경우가 잇고
	//프로그램이 살아있다가 다른 프로그램이 메모리를 다 쓸 때까지 기다렸다가 다시 메모리를 할당받는 시나리오 존재
	//-> new가 error를 일으키더라도 무시해야함 ==> std :: nothrow : 오류를 발생시키지 않음(예외처리)
	//*ptr = 7;

	//cout << ptr << endl;
	//cout << *ptr << endl;

	//delete ptr
	////주의할 점 : delete ptr -> 오류 발생

	//
	//cout <<  "after delete" << endl;
	//if (ptr != nullptr)
	//{
	//	cout << ptr << endl;
	//	cout << *ptr << endl;
	//}
	//else
	//{
	//	cout << "Could not allocat memory" << endl;
	//}
	//delete ptr;
	////case 1. 주소의 값은 동일하고 pointer dereferencing을 통해서 도출된 값은 이상한 값이 출력된다
	////case 2. visual studio의 기능으로 인해 pointer를 delete한 후 '청소'를 해줌.
	////visual studio의 컴파일러가 의도적으로 "automated pointer snitization when deleting C++ object"를 함
	//// 컴파일러 옵션에서 끄기도 가능

	/*int *ptr = new (std::nothrow) int{ 7 };
	int *ptr2 = ptr;

	delete ptr;
	ptr = nullptr;*/
	
	// ptr2 = nullptr;
	// *ptr2

	//memory leak

	//메모리를 계속 받고 쓰지는 않음

	while (true) {
		int *ptr = new int;
		cout << ptr << endl;

		delete ptr;
	}

	//memory leak 확인 방법
	//할당받는 메모리가 클 경우 : Task manager(작업 관리자)-> CPu 사용량이 pumping 이 된다. 
	//-> memory leak 발생
	//디버깅 -::> 진단 툴을 통해 확인
	return 0;
}