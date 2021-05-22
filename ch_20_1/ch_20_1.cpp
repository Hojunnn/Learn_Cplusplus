//우리가 만든 프로그램을 더 개선시키고자 할 때 프로파일링 수행
//release 모드에서도 프로파일링 가능
//debug 모드에서 debugging에 필요한 정보를 모으고 있기 때문에 코드를 좀 더 자세하게 분석할 수 잇지만,
// 퍼포먼스 측면에서는 실제 release 모드와 다를 수 잇음
#include <iostream>
#include <vector>
#include <chrono>
#include <random>
#include <numeric>

using namespace std;


//CPU 사용량을 프로파일링 하는 방법 + heap memory 프로파일링
void func1()
{
	long long sum = 0;
	for (unsigned i = 0; i < 1000'000; ++i)
	{
		sum += i;
	}
	cout << sum << endl;
}

void func2()
{
	long long sum = 0;
	for (unsigned i = 0; i < 1000'000'000; ++i)
		sum += i;

	cout << sum << endl; 
}

void run()
{
	func1();
	func2();
}

int main()
{

	//run();
	//프로파일링 수행 방법
	// 1. breakpoint 설정 -> Diagnostic tools (디버그 모드에서 사용) : 영역설정 : 내가 확인하고 싶은
	//부분 앞 뒤로 브레이크 포인트 설정 

	int *d = new int[10000];
	float *f = new float[100];

	delete[] d;
	delete[] f;

	return 0;
}