#include <iostream>
#include <cmath>
#include <vector>
// #Call by reference

using namespace std;

//void addOne(int &y) // �׳� y ���ٸ� �Լ� �ۿ� ������ ��ġ�� ���� 
//{
//	y = y + 1;
//}

//void getSinCos(const double degrees, double &sin_out, double &cos_out)//degrees�� ���� �Է��̶�� �� ����
////��? reference�� ���ؼ� ���� ��ü�� ���� �����ϱ�
//// �������� ������� ���
//{
//	static const double pi = 3.141592;
//	const double radians = degrees * pi / 180.0; // ����ϰ� ���� �ȹٲ� �� ������ const�� ����
//	sin_out = sin(radians);
//	cos_out = cos(radians);
//}//�Լ��� return ���� ������ ����� �� -> refernce ���

//reference�� ����
//void foo(int *&x) // method2 : const // method3 : delete &
//{
//	cout << x << " " << &x << endl;
//}


void printElements(vector<int>& arr)
//void printElements(int(&arr)[4])
{

}

int main() {

	//int x = 5;

	//cout << x << " " << &x << endl;

	//addOne(x);// �ּ� �״�� -> x��� ���� ��ü�� �Ѿ 

	//cout << x << " " << &x << endl;

	/*double sin(0.0);
	double cos(0.0);

	getSinCos(30.0, sin, cos);

	cout << sin << " " << cos << endl;*/

	//method1
	//int x = 6;
	
	/*foo(x);*///�׳� literal ���̿��� �ּҰ� ����

	/*int x = 5;
	int *ptr = &x;

	cout << ptr << " " << &ptr << endl;
	foo(ptr);*/

	/*int arr[]{ 1,2,3,4 };*/
	vector<int> arr{ 1,2,3,4 };
	printElements(arr);

	return 0;
}