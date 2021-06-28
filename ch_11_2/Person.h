#pragma once

#include <string>
#include <iostream>

class Person
{
private:
	std::string m_name;

public:

	//Person()
	//	:m_name("No Name")
	//{}

	Person(const std::string & name_in = "No Name") // Person에서 m_name을 초기화할 수 있도록 만들어줌 -> 디폴트 값을 넣어주는 방식
		: m_name(name_in)
	{}

	void setName(const std::string & name_in)
	{
		m_name = name_in;
	}

	std::string getName() const
	{
		return m_name;
	}
	
	void doNothing() const
	{
		std::cout << m_name << "is doing nothing" << std::endl;
	}

};