#include <iostream>

using namespace std;

//void foo(int *ptr)
//{
//	cout << *ptr << " " << ptr << " " << &ptr << endl;
//}

void foo(double degrees, double *sin_out, double *cos_out)//reference���� �ٸ� -> �����͵� ������.
//���������δ� ���� ���� ���� �̴� (not call by reference)
{
	*sin_out = 1.0;
	*cos_out = 2.0;
}


int main() {

	int value = 5;
	cout << value << " " << &value << endl;

	int *ptr = &value;

	double degrees = 30;
	double sin, cos;

	foo(degrees, &sin, &cos);//�ּҷ� �ٲ㼭 �־������
	//foo(&value);

	cout << sin << " " << cos << endl;


	return 0;
}