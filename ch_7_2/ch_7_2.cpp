#include <iostream>

using namespace std;

void doSomething(int y)//y�� � ���� �����Ŀ� ���� ���� ����� �޶��� �� ����
{
	cout << "In func" << y << " " << &y << endl;
}


int main() {

	doSomething(5); // �Ű������� y��� �� ���� -> doSomething �Լ��� ����Ǹ鼭 int y�� ������ �Ǹ鼭
	// �޸𸮿� 5��� ���� ���簡 �Ǽ� �ʱ�ȭ�� ��.

	int x = 6;

	cout << "In main" << x << " " << &x << endl;

	doSomething(x);//������ ���޵Ǵ� ���� x �� �ƴ϶� x�� ����ִ� 6�̶�� value�� ����
	doSomething(x + 1);// 6+1 -> 7�̶�� ���� �� -> ���� ����ȴ�.

	//�Լ��� �ܺη� ������ ���� ���� �� ���
	// �Լ��� �ܺη� ������ �־���� ���� ����
	
	return 0;
}