#include <iostream>

using namespace std;

int main() {
	//case1
	//const int value = 5;// const�� �ɾ��ָ� �����͸� ������� �ִ� ���� �ƴϴ�.
	//const int *ptr = &value;  //�����͵� const�� �ٿ��ָ� �� �� ����
	//*ptr = 6; // ������ derefencing�� �Ұ��� -> value�� ���� ���ٲ�

	//case2
	//int value = 5; //value�� const�� �ƴϰ� �����Ͱ� const�� ��� ��밡��
	//const int *ptr = &value;
	////*ptr = 6; // value�� const�� �ƴ����� ����Ű�� �ִ� �ּҿ� ���� �ٲ��� �ʰڴٶ�� ������ �����ֱ� ������
	//// dereferencing�� �Ұ���
	////������
	//value = 6; // �̰� ����
	//cout << *ptr << endl;

	//int value1 = 5;
	//const int *ptr = &value1;//�����ʹ� �ּҰ��� ���� 
	////int * �տ� const�� ���϶��� ���� �ּҰ��� �ִ� ���� �ȹٲٰڴٴ� ���� �ǹ��ϴ� ������ ptr�� ����Ǵ� 
	////�ּҰ��� �ȹٲٰڴٴ� ���� �ƴ�

	//int value2 = 6;
	//ptr = &value2;//�ּҰ��� �ٲپ��� ������ ������ ����
	////*ptr = 8; //������ �ٸ� ������ �ٲٴ°��� �ȵ� -> ��? const�� �پ����ϱ�


	//case3
	//int value = 5;
	//int *const ptr = &value; // *const ptr�� ���

	//int value1 = 6;
	//ptr = &value1;// �������� �ּҰ��� �ٲ��� ����

	//*ptr = 10;// �� ��� dereferencing�� ����
	//cout << *ptr << endl;

	//int value = 5;
	//const int *const ptr = &value;// �̰�� ������ ��ü�� ����̱� ������ �ʱ�ȭ�� �����ָ� �� ���� ����

	//*ptr = 6;
	//ptr = 10;//dereferencing�� �ȵ�

	//int value1 = 7;
	//ptr = &value1;//�ּҰ��� �������� ���� ����

	int value = 5;
	const int *ptr1 = &value;
	int *const ptr2 = &value;
	const int *const ptr3 = &value;

	return 0;
}