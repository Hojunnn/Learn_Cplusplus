//위임 생성자 : 생성자가 다른 생성자를 사용하는 것

#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
	int  _id;
	string		_name;

public:
	Student(const string& name_in)// 안좋은 코드 // C++ 11 이후
		: Student(0,name_in)
	{}

	Student(const int& id_in, const string& name_in)
		: _id( id_in ), _name(name_in)
	{}

	void print()
	{
		cout << _id << " " << _name << endl;
	}
};

int main()
{
	Student st1(0, "Jack Jack");
	st1.print();

	Student st2("Dash");
	st2.print();
}