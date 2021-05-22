//�츮�� ���� ���α׷��� �� ������Ű���� �� �� �������ϸ� ����
//release ��忡���� �������ϸ� ����
//debug ��忡�� debugging�� �ʿ��� ������ ������ �ֱ� ������ �ڵ带 �� �� �ڼ��ϰ� �м��� �� ������,
// �����ս� ���鿡���� ���� release ���� �ٸ� �� ����
#include <iostream>
#include <vector>
#include <chrono>
#include <random>
#include <numeric>

using namespace std;


//CPU ��뷮�� �������ϸ� �ϴ� ��� + heap memory �������ϸ�
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
	//�������ϸ� ���� ���
	// 1. breakpoint ���� -> Diagnostic tools (����� ��忡�� ���) : �������� : ���� Ȯ���ϰ� ����
	//�κ� �� �ڷ� �극��ũ ����Ʈ ���� 

	int *d = new int[10000];
	float *f = new float[100];

	delete[] d;
	delete[] f;

	return 0;
}