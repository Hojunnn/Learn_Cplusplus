#include <iostream>

using namespace std;

void doSomething(int y)//y에 어떤 값이 들어오냐에 따라서 실행 결과가 달라질 수 있음
{
	cout << "In func" << y << " " << &y << endl;
}


int main() {

	doSomething(5); // 매개변수로 y라는 값 전달 -> doSomething 함수가 실행되면서 int y가 선언이 되면서
	// 메모리에 5라는 값이 복사가 되서 초기화가 됨.

	int x = 6;

	cout << "In main" << x << " " << &x << endl;

	doSomething(x);//실제로 전달되는 것은 x 가 아니라 x에 들어있는 6이라는 value가 전달
	doSomething(x + 1);// 6+1 -> 7이라는 놈이 들어감 -> 값이 복사된다.

	//함수가 외부로 영향을 주지 않을 때 사용
	// 함수가 외부로 영향을 주어야할 때도 존재
	
	return 0;
}