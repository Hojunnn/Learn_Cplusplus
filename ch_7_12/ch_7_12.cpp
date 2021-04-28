// 재귀적 함수 호출 
// 이름이 똑같은 함수 다시 호출

#include <iostream>

using namespace std;

//Recursion은 스택을 사용 -> 퍼포먼스가 중요한 프로그래밍에서는 iteration을 쓰는게 맞음

//void countDown(int count)
//{
//	cout << count << endl;
//
//	if (count > 0)
//		countDown(count - 1);
//
//	//종료 조건을 반드시 만들어 줘야함
//}

int sumTo(int sumto)
{
	if (sumto <= 0)
		return 0;
	else if (sumto <= 1)
		return 1;
	else
		return sumTo(sumto - 1) + sumto;
}

int main() {

	cout << sumTo(10) << endl;

	return 0;
}