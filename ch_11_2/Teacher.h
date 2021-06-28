#pragma once

#include "Person.h"


//선생과 학생을 일반화된 개념으로 생각할 수 있는 객체 만듦.
class Teacher : public Person
{
private:
	//std::string m_name;
	//TODO: more members like home address, salary, age, evaluation, etc.

public:
	Teacher(const std::string & name_in = "No Name")
		:Person(name_in)
	{
		//this->getName() // 부모 클래스 person에 있는 것을 가져다 쓸 수 있음
	}

	void teach()
	{
		std::cout << getName() << "is teaching" << std::endl;
	}


	friend std::ostream & operator << (std::ostream & out, const Teacher & teacher)
	{
		//out << teacher.m_name;
		//Person에서 output operator 오버로딩 가능
		out << teacher.getName();
		return out;
	}

};