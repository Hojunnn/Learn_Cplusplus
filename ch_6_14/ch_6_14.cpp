#include <iostream>

using namespace std;

//Ư���� ��쿡 ������ ���� ����ϱ� ���Ѱ� ����

//void doSomething(int &n) {
//	
//	cout << &n << endl;
//	n = 10;
//	cout << "In do Something" << n << endl;
//}

// reference�� ���� doSomething�Լ��� main �Լ����� ����ϴ� ���� ��ü�� �Ѿ.

//void printElements(int(&arr)[5])//elements�� ���� �ݵ�� �� �����
//{
//	for (int i = 0; i < 5; ++i) {
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//}

struct Something
{
	int v1;
	float v2;
};

struct Other
{
	Something st;
};

int main() {

	int value = 5;
	int *const ptr = &value;
	int &ref = value;//ptr�� value�� ��ɻ� �����ϴ�?


	//Other ot;
	///*ot.st.v1 = 1.0;*///Ÿ��Ÿ��Ÿ�� ���� �κ��� �������� Ÿ���� ����
	//	//reference ���

	//int &v1 = ot.st.v1;
	//
	//v1 = 1.0;


	////array�� �Լ��� �־��� ���� reference�� ����� �� ����
	//const int length = 5;
	//int arr[length] = { 1,2,3,4,5 };

	//printElements(arr);

	//return 0;


	//int n = 5;

	//cout << n << endl;
	//cout << &n << endl;
	//

	//doSomething(n);

	//cout << n << endl;// ��������� ó���� 5, �������� 5�� ���� 
	// doSomething �Լ��� n�� main�Լ� ������ n�� ������ �ٸ� ����
	   	  
	//int value = 5;
	//int value1 = 10;

	//int &ref1 = value;

	//cout << ref1 << endl;

	//ref1 = value1;

	//cout << ref1 << endl; // ref1�� reassign �����ϴ�.


	/*int &ref = value; */// reference ������ �ʱ�ȭ�� �����ǵǾ����

	//const int y = 8;
	//int &ref = y; //�ȵ� ��? ref���� y ���� ����� �ٲ���� ���� �ֱ� ������
	 
	/*int *ptr = nullptr;
	ptr = &value;

	int &ref = value;*/ // ���������� ref�� value�� ���� ���� ó�� �۵�
	//��ġ ���� �޸𸮸� ����ϴ� ��ó�� ����
	//ref�� value��� ������ ����ó�� ����� �� �ִ�

	//cout << ref << endl;

	//ref = 10;

	//cout << ref << endl;// ���������� ����� ����

	//cout << &value << endl;
	//cout << &ref << endl; // �� ������ �Ǵٸ� �̸�
	//cout << ptr << endl;
	//cout << &ptr << endl;//������ ������ ������


	return 0;
} 