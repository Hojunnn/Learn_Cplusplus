#pragma once

#include <iostream>
#include <string>
#include "Person.h"


class Student : public Person
{
private:
	//std::string m_name;
	int m_intel; // intelligence

	//ToDo : add more members like address, phone, favorite food ...

public:
	//m_name�� Person�� �ҼӵǾ� ����, m_name�� �����ϴ� 1���� å���� Person�� ���� -> ������ ȣ�� ����
	Student(const std::string & name_in = "No Name", const int & intel_in = 0)
		//: m_name(name_in), m_intel(intel_in)
		: Person(name_in),m_intel(intel_in) // name_in�� Person�� �ʱ�ȭ, m_intel�� �ڽ��� �ʱ�ȭ 
	{}
	
	void setIntel(const int & intel_in)
	{
		m_intel = intel_in;
	}

	int getIntel()
	{
		return m_intel;
	}

	void study()
	{
		std::cout << getName() << "is studying" << std::endl;
	}

	friend std::ostream & operator << (std::ostream & out, const Student & student)
	{
		out << student.getName() << " " << student.m_intel;
		return out;
	}

};