#include <iostream>

using namespace std;

void doSomething(const int& x)//reference�� ���� ���, pointer�� ���� ��� ���� ���簡 �Ͼ�µ�,
//���簡 �Ͼ�� ����
{
	cout << x << endl;
}


int main()
{
	int a = 1;
	doSomething(a);//ȣ��Ǵ� �Լ� �Ű������� const�� ������ �ٷ� literal ����� ����� �� ����
	
	
	
	int x=5;
	const int &ref_x = x;
	const int &ref_2 = ref_x;


	//refernce ����� �޸� �ּҰ� �־������ ������ ����
	//const reference������ ����

	const int &ref_y = 3 + 4; // literal ���� �� �� ����

	cout << ref_y << endl;
	cout << &ref_y << endl;


	return 0;

}