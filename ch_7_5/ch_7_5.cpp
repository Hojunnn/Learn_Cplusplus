#include <iostream>
#include <array>
#include <tuple>

//return by address , return by reference , tuple ����
using namespace std;

//int& getValue(int x)
//{
//	int value = x * 2;
//	return value;
//}

//int& get(array<int, 100> &my_array, int ix)
//{
//	return my_array[ix];
//}

//struct S
//{
//	int a, b, c, d;
//};
//
//S getStruct() {
//	S my_s{ 1,2,3,4 };
//}

//int* allocateMemory(int size)
//{
//	return new int[size]; // Design pattern -> Factory Method 
//}

tuple<int,double> getTuple()//����� ���� �ڷ����� ��
{
	int a = 10;
	double d = 3.14; 
	return make_tuple(a, d);
}


int main() {

	//int *value = getValue(3); // *getValue() -> getValue �Լ��� ������ ����� ������⶧���� dereferencing �������� ����
	//// *value -> �� ������ )) ������ �ִ� �ּҰ� getValue�� �ּ���

	/*int *array = allocateMemory(1024);*/

	//int &value = getValue(5);//&value�� �޴� ��� -> ���� �߻� ����

	//cout << value << endl;
	//cout << value << endl;

	//array<int, 100> my_array;
	//my_array[30] = 10;

	//get(my_array, 30) = 1024; //get(my_array,30)�� ���°� my_array[30]�� ���¿� ������

	//cout << my_array[30] << endl;

	//S my_s = getStruct(); // ����ü�� ���ؼ� return �� ����
	//my_s.a = 2;

	//tuple<int, double> my_tp = getTuple();
	//cout << get<0>(my_tp) << endl; // a
	//cout << get<1>(my_tp) << endl; // d

	//auto[a, d] = getTuple();//C++ 17���� ����
	//cout << a << endl;
	//cout << d << endl;

	return 0;
}