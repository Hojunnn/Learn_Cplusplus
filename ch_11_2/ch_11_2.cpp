#include "Student.h"
#include "Teacher.h"

//중복되는 부분을 한군데 모아놓고 재사용해서 개발자가 작업하는 양을 줄여주기 위함

int main()
{
	Student std("Jack Jack");
	std.setName("Jack Jack 2");
	std::cout << std.getName() << std::endl;



	Teacher teacher1("Dr.H");
	teacher1.setName("Dr.k");

	std::cout << teacher1.getName() << std::endl;

	std::cout << std << std::endl;
	std::cout << teacher1 << std::endl;

	std.doNothing();
	teacher1.doNothing();

	std.study();
	teacher1.teach();

	Person person;
	person.setName("Mr. incredible");
	person.getName();
	/*person.study();
	person.teach();*/ //-> 자식 클래스에 구현된걸 부모 클래스에서는 구현하지 못함

	return 0;
} 