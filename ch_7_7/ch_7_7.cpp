#include <iostream>

//�Լ� �����ε� : ������ �̸��� ���� �Լ��� ������ ����� ��
// ������ ,����, ����

using namespace std;


//�������� ���忡�� addint , adddouble �Ű� �Ⱦ��� ����� �ʹ�~
//int addInt(int x, int y)
//{
//	return x + y;
//}
//
//double addDouble(double x, double y)
//{
//	return x + y;
//}

//�Ű������� �ٸ��� �Լ� �̸��� ���Ƽ� �ٸ� ������ ���
// �־��� ���ڿ� �Ű������� ������ ���� ���� �Լ��� ã�Ƽ� ���������

//�Ű������� ������ return type�� �ٸ��� �����ε� �Ұ���
//return type�� �ٸ��ٸ� �����ε� �Ұ���
//int add(int x, int y)
//{
//	return x + y;
//}
//
//int add(double x, double y)
//{
//	return x + y;
//}

//------------------------------
//typedef int my_int;
//// �� �ΰ����� ���� Ÿ������ �νĵ�
//void print(int x){}
//void print(my_int x){}
//----------------------------------

//void print(char *value){}
//void print(int value){ }

typedef int my_int;
// �����ε� ����� �� ��Ȯ�ϰ� 
void print(unsigned int value) {}
void print(float value) {}

int main() {

	/*add(1, 2);
	add(3.0, 4.0);*/

	//print(0);
	//print("a");

	print((unsigned int) 'a');
	print(0u);
	print(3.14159f);

	return 0;
}