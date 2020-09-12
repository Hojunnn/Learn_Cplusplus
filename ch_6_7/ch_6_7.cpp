#include <iostream>
#include <typeinfo>

using namespace std;

struct Something
{
	int a, b, c, d;
};

int main() {

	int x = 5;
	double d = 1.0;


	int *ptr_x ;
		
	double *ptr_d ; // 변수명 앞에 *, parameter의 경우 int * ptr과 같이 양쪽을 다 띄움

	//cout << x << endl;
	//cout << &x << endl; // & : address-off operator

	//cout << (int)&x << endl;

	////de-reference operator(*)

	//cout << *(&x) << endl;

	//cout << ptr_x << endl; // output : address
	//cout << *ptr_x << endl; // output : value result

	//cout << ptr_d << endl; // output : address
	//cout << *ptr_d << endl; // output : value result

	//cout << typeid(ptr_x).name() << endl; // output : int *

	cout << sizeof(x) << endl;
	cout << sizeof(d) << endl;
	cout << sizeof(&x) << " " << sizeof(ptr_x) << endl;
	cout << sizeof(&d) << " " << sizeof(ptr_d) << endl; //hold address's size 4byte in x86

	Something ss;
	Something *ptr_s;

	cout << sizeof(Something) << endl;
	cout << sizeof(ptr_s) << endl;
	//cout << *ptr_x<< endl;

	return 0;
}