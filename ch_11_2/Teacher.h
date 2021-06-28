#pragma once

#include "Person.h"


//������ �л��� �Ϲ�ȭ�� �������� ������ �� �ִ� ��ü ����.
class Teacher : public Person
{
private:
	//std::string m_name;
	//TODO: more members like home address, salary, age, evaluation, etc.

public:
	Teacher(const std::string & name_in = "No Name")
		:Person(name_in)
	{
		//this->getName() // �θ� Ŭ���� person�� �ִ� ���� ������ �� �� ����
	}

	void teach()
	{
		std::cout << getName() << "is teaching" << std::endl;
	}


	friend std::ostream & operator << (std::ostream & out, const Teacher & teacher)
	{
		//out << teacher.m_name;
		//Person���� output operator �����ε� ����
		out << teacher.getName();
		return out;
	}

};