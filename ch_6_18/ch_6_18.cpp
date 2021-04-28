#include <iostream>

using namespace std;

//void pointer, generic pointer 
enum Type
{
	INT,
	FLOAT,
	CHAR
};

int main() {

	int i = 5;
	float f = 3.0;
	char c = 'a';

	void *ptr = nullptr;

	ptr = &i;
	ptr = &f;
	//ptr = &c;

	/*int *ptr_i = &i;

	cout << ptr_i << endl;
	cout << ptr_i + 1 << endl;*/

	/*cout << ptr + 1 << endl;*/ // 안됨 -> +1에서 몇바이트를 더하는지 알 수 없음

	Type type = FLOAT;

	cout << &f << " " << ptr << endl;
	//cout << *ptr << endl; // dereferencing 도 안됨
	
	if(type == FLOAT)
		cout << *static_cast<float*>(ptr) << endl;//type casting
	else if(type == INT)
		cout << *static_cast<int*>(ptr) << endl;

	return 0;
}