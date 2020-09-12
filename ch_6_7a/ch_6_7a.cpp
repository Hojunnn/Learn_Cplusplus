#include <iostream>
#include <cstddef>
using namespace std;

void doSomething(double *ptr)
{
	cout << "address of pointer variable in doSomething()" << &ptr << endl;
	//main의 ptr과 다른 메모리를 씀
	//why? paramter를 받아서 씀으로 메모리 복사가 되는 개념

	if (ptr != nullptr) {
		cout << *ptr << endl;
	}
	else {
		cout << "Null ptr, do nothing" << endl;
	}
}


int main() {

	//double *ptr = 0; //  c-style : input 0 or null;
	double *ptr = nullptr; // modern c++;

	doSomething(ptr);
	doSomething(nullptr);

	double d = 123.4;

	doSomething(&d);

	ptr = &d;

	doSomething(ptr);

	//nullptr_t nptr; //just input null ptr

	cout << "address of pointer variable in main()" << &ptr << endl;

	return 0;
}