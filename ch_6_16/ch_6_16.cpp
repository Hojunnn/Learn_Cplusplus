#include <iostream>
//포인터와 참조의 멤버 선택
using namespace std;

//포인터나 reference를 통해서 구조체의 멤버에 접근할 수 있음
struct Person
{
	int age;
	double weight;
};

int main(void) {

	//Memeber selection 연산자를 사용하는 경우
	Person person;
	person.age = 4; //member selection 연산자
	person.weight = 30;

	//reference를 사용하는 경우
	Person &ref = person;
	ref.age = 15;

	//pointer를 사용하는 경우
	Person *ptr = &person;
	ptr->age = 30;

	//dereferencing pointer를 사용하는 경우
	(*ptr).age = 20;

	Person &ref2 = *ptr;
	ref2.age = 45;

	cout << &person << endl;
	cout << &ref2 << endl;

	return 0;
}