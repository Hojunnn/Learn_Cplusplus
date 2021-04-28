#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

void printLength(array<int, 5>& my_arr) //�ѹ� �Ķ���Ϳ� ���� ������ ���簡 ��. -> array�� ���� ũ�� �ð��ҿ�
//pointer�� �� �� �� ������ reference
{
	cout << my_arr.size() << endl;
}

int main() {

	//int array[] = {1,2,3,4,5}; -> compiler�� �˾Ƽ� 5���ٶ�� �� �ν�

	array<int, 5> my_arr = { 1,21,3,40,5 };

	for (auto &element : my_arr) // reference �޸� �߰��� ����Ǵ� ���� ����
		cout << element << " ";
	cout << endl;

	sort(my_arr.begin(), my_arr.end());
	sort(my_arr.rbegin(), my_arr.rend());//���� ����


	for (auto &element : my_arr) 
		cout << element << " ";
	cout << endl;

	//�Լ� �Ķ���͸� �ѱ涧 ����
	//������ �����ص� ��� ����

	//cout << my_arr[0] << endl;
	//cout << my_arr[1] << endl;
	//cout << my_arr.at(1) << endl; // �����̻��̸� üũ�� �غ��� ����ó���� �߻���Ŵ
	//cout << my_arr.size() << endl;	

	//printLength(my_arr);

	return 0;
}