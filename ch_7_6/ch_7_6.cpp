#include <iostream>

// 많은 프로그래머들이 자신의 프로그램을 빠르게 만들고 싶어함
//인라인 함수를 사용하여 최적화 하려고 함.

//inline 함수는 이렇게 할 수 있으면 해주세요 하는 뉘앙스
//요즘 컴파일러는 inline을 넣지 않아도 괜찮음

using namespace std;

inline int min(int x, int y) // 보통 헤더파일에 함수를 정의할 때 많이 사용
//함수가 아닌 것 처럼 작동함
//컴파일러가 처리함
{
	return x > y ? y : x;
}

int main()
{
	cout << min(5, 6) << endl;
	cout << min(3, 2) << endl;// 인라인 함수를 쓰면 아래처럼 컴파일러가 처리함

	cout << (5 > 6 ? 6 : 5) << endl;
	cout << (3 > 2 ? 3 : 2) << endl;
	


}