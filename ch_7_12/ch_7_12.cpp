// ����� �Լ� ȣ�� 
// �̸��� �Ȱ��� �Լ� �ٽ� ȣ��

#include <iostream>

using namespace std;

//Recursion�� ������ ��� -> �����ս��� �߿��� ���α׷��ֿ����� iteration�� ���°� ����

//void countDown(int count)
//{
//	cout << count << endl;
//
//	if (count > 0)
//		countDown(count - 1);
//
//	//���� ������ �ݵ�� ����� �����
//}

int sumTo(int sumto)
{
	if (sumto <= 0)
		return 0;
	else if (sumto <= 1)
		return 1;
	else
		return sumTo(sumto - 1) + sumto;
}

int main() {

	cout << sumTo(10) << endl;

	return 0;
}