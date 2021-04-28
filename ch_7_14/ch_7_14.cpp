// 디버깅시 컴파일러 도움을 받을 수 있는 Assert

#include <cassert> // assert.h
#include <array>
#include <iostream>

using namespace std;

//void printValue(const array<int, 5> &arr, const int& ix)
//{
//	assert(ix >= 0);
//	assert(ix <= arr.size() - 1);//창에서 어떤 오류가 발생했는지 확인할 수 있음
//	//assert는 runtime에 체크해줌
//	
//	cout << arr[ix] << endl;
//}

int main()
{
	////assert(false);// Debug 모드에서는 동작하지만, release 모드에서는 동작하지 않음

	//int number = 5;

	//// ...

	//assert(number == 5);//Debug 모드에서는 오류를 찾아주고, Release 모드에서는 assert를 실행을 안시킴

	//array<int, 5> arr{ 1,2,3,4,5 };

	/*printValue(arr, 100);*/
	
	//------------------------------------------------
	//static assert

	const int x = 5;

	assert(x == 5);//기존의 assert 와는 다르게 문구를 남길 수 있음
	static_assert(x == 5, "x should be 5");
	//컴파일러를 이용해서 내프로그램에 나타날 수 있는 오류를 미리 차단하는 방식


	return 0;
}