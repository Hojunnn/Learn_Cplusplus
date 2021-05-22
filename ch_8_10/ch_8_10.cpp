#include <iostream>
using namespace std;

//int generateID()
//{
//	static int s_id = 0;
//	return ++s_id;
//}

class Something
{
public:
	static const int s_value;//static 멤버 변수는 초기화 할 수 없음
	//constexpr
	//일반적인 const는 runtime에 값이 결정될 수도 있음
	//constexpr은 compile 타임에 결정되어야 함
};

//int Something::s_value=1;// static 선언하고 결과값을 보면, 주소값과 결과 값이 동일
// static은 cpp 파일안에 정리

int main()
{
	/*cout << generateID() << endl;
	cout << generateID() << endl;
	cout << generateID() << endl;*/

	cout << &Something::s_value << " " << Something::s_value << endl;

	Something st1;
	Something st2;

	//st1.s_value = 2;

	cout << &st1.s_value << " " << st1.s_value << endl; //st1._value와 st2._value의 주소 다름
	cout << &st2.s_value << " " << st2.s_value << endl;

	//Something::s_value = 1024;

	cout << &Something::s_value << " " << Something::s_value << endl;

	return 0;


}