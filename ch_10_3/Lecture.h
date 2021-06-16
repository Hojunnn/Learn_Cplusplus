#pragma once

#include <vector>
#include "Student.h"
#include "Teacher.h"

class Lecture
{
private:
	std::string m_name;

	Teacher * teacher; // teacher�� �ּҸ� �����
	std::vector<Student*> students; //Student�� �ּҸ� �����
	// students��ü�� vector�� �ν��Ͻ� -> Lecture Ŭ������ �ν��Ͻ��� �������, students�� �����
	//������, Students *�� ����Ű�� �ִ� ���� �ּҿ� �ִ� �͵��� �״�� ������ ��

public:
	Lecture(const std::string & name_in)
		:m_name(name_in)
	{}

	~Lecture()
	{
		//do NOT delete teacher
		//do NOT delete students 
	}

	void assignTeacher(Teacher * const teacher_input)
	{
		teacher = teacher_input;
	}

	void registerStudent(Student * const student_input)
	{
		students.push_back(student_input); // push back �Ҷ� student_input�� �����ؼ� �ְԵ�

		//&student_input != &students[0]
	}

	void study()
	{
		std::cout << m_name << "Study" << std::endl << std::endl;

		/*for (auto & element : students)
			element.setIntel(element.getIntel() + 1);*/

		//-> pointer�� ���ͷ� �ٲ�
		for (auto & element : students)
			element->setIntel(element->getIntel() + 1); // de referencing ��� ȭ��ǥ ��� ����
	}

	
	
	friend std::ostream & operator << (std::ostream & out, const Lecture & lecture)
	{
		out << "Lecture name : " << lecture.m_name << std::endl;

		out << *lecture.teacher << std::endl;
		for (auto & element : lecture.students)
			out << *element << std::endl;

		return out;
	}


};