#include "Student.h"
#include "Teacher.h"

//�ߺ��Ǵ� �κ��� �ѱ��� ��Ƴ��� �����ؼ� �����ڰ� �۾��ϴ� ���� �ٿ��ֱ� ����

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
	person.teach();*/ //-> �ڽ� Ŭ������ �����Ȱ� �θ� Ŭ���������� �������� ����

	return 0;
} 