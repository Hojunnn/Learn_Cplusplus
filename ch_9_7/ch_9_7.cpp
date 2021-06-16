//괄호 연산자 오버로딩과 함수 객체

#include <iostream>
using namespace std;

class Accumulator
{
private:
	int m_counter = 0;

public:
	int operator()(int i) { return (m_counter += i); }
};

//괄호 연산자를 오버로딩해서 함수 객체처럼 사용하는 방법

int main()
{
	Accumulator acc;
	cout << acc(10) << endl;
	cout << acc(20) << endl;

	return 0; 
}