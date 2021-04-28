#include <iostream>

using namespace std;

int main() {
	//case1
	//const int value = 5;// const를 걸어주면 포인터를 못만들어 주는 것은 아니다.
	//const int *ptr = &value;  //포인터도 const를 붙여주면 할 수 있음
	//*ptr = 6; // 하지만 derefencing은 불가능 -> value의 값은 못바꿈

	//case2
	//int value = 5; //value는 const가 아니고 포인터가 const인 경우 사용가능
	//const int *ptr = &value;
	////*ptr = 6; // value가 const는 아니지만 가리키고 있는 주소에 값을 바꾸진 않겠다라는 의지를 보여주기 때문에
	//// dereferencing은 불가능
	////하지만
	//value = 6; // 이건 가능
	//cout << *ptr << endl;

	//int value1 = 5;
	//const int *ptr = &value1;//포인터는 주소값을 저장 
	////int * 앞에 const를 붙일때는 내가 주소값에 있는 값을 안바꾸겠다는 것을 의미하는 것이지 ptr에 저장되는 
	////주소값을 안바꾸겠다는 것은 아님

	//int value2 = 6;
	//ptr = &value2;//주소값만 바꾸었기 때문에 문제가 없음
	////*ptr = 8; //변수를 다른 값으로 바꾸는것은 안됨 -> 왜? const가 붙었으니까


	//case3
	//int value = 5;
	//int *const ptr = &value; // *const ptr의 경우

	//int value1 = 6;
	//ptr = &value1;// 포인터의 주소값을 바꾸지 못함

	//*ptr = 10;// 이 경우 dereferencing은 가능
	//cout << *ptr << endl;

	//int value = 5;
	//const int *const ptr = &value;// 이경우 포인터 자체가 상수이기 때문에 초기화를 안해주면 쓸 수가 없음

	//*ptr = 6;
	//ptr = 10;//dereferencing도 안됨

	//int value1 = 7;
	//ptr = &value1;//주소값을 변경해줄 수도 없음

	int value = 5;
	const int *ptr1 = &value;
	int *const ptr2 = &value;
	const int *const ptr3 = &value;

	return 0;
}