//���ݱ��� ���Դ� �����͵��� ��� ������ ������
//�Լ��� ���� ������ 

#include <iostream>
#include <array>
#include <functional>

using namespace std;

//int func(int x)
//{
//	return 5;
//}
//
//int goo(int)
//{
//	return 10;
//}

bool isEven(const int& number)
{
	if (number % 2 == 0) return true;
	else return false;
}

bool isOdd(const int& number)
{
	if (number % 2 != 0) return true;
	else return false;

}

//�Լ� �����͵� typedef�� �ٿ��� ��� ����
typedef bool(*check_fcn_t)(const int&);
//using check fcn_t = bool(*)(const int&); 

void printNumbers(const array<int, 10>& my_array, 
	function<bool(const int&)> check_fcn) // �Լ� ������ �־���
{
	for (auto element : my_array)
	{
		if (check_fcn(element) == true) cout << element;
		//if (!print_even && element % 2 == 1) cout << element;

	}
	cout << endl;
}


int main()
{
	//cout << func << endl; //  �ּ� �� ���

	//�Լ� ������ ����
	//int(*fcnptr)(int) = func; // �Լ��� return type, parameter ������ �°� ����

	//cout << fcnptr(1) << endl; // func�� ����Ű�� �մ°� �Լ�, 5���

	//fcnptr = goo;// goo�� ����Ű�� ��

	//cout << fcnptr() << endl;

	array<int, 10> my_array{ 0,1,2,3,4,5,6,7,8,9 };

	function<bool(const int&)> fcnptr = isEven;


	//�Լ��� �̸���ü�� ������
	//printNumbers(my_array, isEven);
	printNumbers(my_array, fcnptr);

	fcnptr = isOdd;

	printNumbers(my_array, fcnptr);

	return 0;
}