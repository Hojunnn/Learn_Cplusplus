#include <iostream>
//�����Ϳ� ������ ��� ����
using namespace std;

//�����ͳ� reference�� ���ؼ� ����ü�� ����� ������ �� ����
struct Person
{
	int age;
	double weight;
};

int main(void) {

	//Memeber selection �����ڸ� ����ϴ� ���
	Person person;
	person.age = 4; //member selection ������
	person.weight = 30;

	//reference�� ����ϴ� ���
	Person &ref = person;
	ref.age = 15;

	//pointer�� ����ϴ� ���
	Person *ptr = &person;
	ptr->age = 30;

	//dereferencing pointer�� ����ϴ� ���
	(*ptr).age = 20;

	Person &ref2 = *ptr;
	ref2.age = 45;

	cout << &person << endl;
	cout << &ref2 << endl;

	return 0;
}