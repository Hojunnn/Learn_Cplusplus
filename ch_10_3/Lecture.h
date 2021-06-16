#pragma once

#include <vector>
#include "Student.h"
#include "Teacher.h"

class Lecture
{
private:
	std::string m_name;

	Teacher * teacher; // teacher의 주소를 갖고옴
	std::vector<Student*> students; //Student의 주소를 갖고옴
	// students자체는 vector의 인스턴스 -> Lecture 클래스의 인스턴스가 사라지면, students는 사라짐
	//하지만, Students *가 가리키고 있는 원래 주소에 있는 것들은 그대로 유지가 됨

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
		students.push_back(student_input); // push back 할때 student_input을 복사해서 넣게됨

		//&student_input != &students[0]
	}

	void study()
	{
		std::cout << m_name << "Study" << std::endl << std::endl;

		/*for (auto & element : students)
			element.setIntel(element.getIntel() + 1);*/

		//-> pointer의 벡터로 바뀜
		for (auto & element : students)
			element->setIntel(element->getIntel() + 1); // de referencing 대신 화살표 사용 가능
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