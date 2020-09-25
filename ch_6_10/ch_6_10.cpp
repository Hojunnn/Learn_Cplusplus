#include <iostream>

using namespace std;

//const char* getName()
//{
//	return "JackJack";
//}
//const 선언시 return 타입에도 넣어줄 수 있음


int main() {

	//앞에 const가 붙어야 기호적 상수처럼 사용할 수 있음

	//char name [] = "Jack Jack";
	//const char *name = "Jack Jack"; // 왜 안되냐? 오른쪽은 literal 왼쪽은 포인터
	//실제로 jackjack이 어디 담길것이냐는 메모리는 아무런 정보가 없음
	//포인터에 jack jack이라는 literal을 담을 수 없음
	//포인터는 메모리의 주소를 가리킬 수만 있기 때문
	//하지만 기호적인 상수로는 char 앞에 const 추가하면서 사용가능
	//const char *name2 = "Jack Jack";


	//cout << sizeof(*name) << endl;


	/*for(i = )*/
	// output -> Jack Jack
	//cout << name << endl; // char앞에 const를 붙이면 name이 데이터를 액세스 할 수 있도록 도와줌
	//cout << (uintptr_t)name << endl;
	//cout << (uintptr_t)name2 << endl;//두 주소값이 똑같음 -> 컴파일러가 내용이 같으니까 같은 주소값 써라~
	//name 과 name2의 내용이 조금만 달라도 다른 주소값 출력
	//cout << getName() << endl;

	//int int_arr[5] = { 1,2,3,4,5 };
	//char char_arr[] = "Hello, World!";
	//const char *name = "Jack Jack";

	//cout << int_arr << endl; // 주소값 출력
	//cout << char_arr << endl; //문자열 출력
	//cout << name << endl; //문자열 출력
	//cout에서 문자열은 특별하게 처리한다.

	char c = 'Q';
	cout << &c << endl; // output -> after q there's lots of strange characters
	// add (uintptr_t), if you want to show address
	return 0;
}