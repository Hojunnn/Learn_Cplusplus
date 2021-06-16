#pragma once

#include <string>
#include "Position2D.h"

class Monster
{
private:
	std::string m_name; // char * data, unsigned length를 묶어서 사용 -> location 정보들도 묶어서 사용하는게 어떨까?
	Position2D m_location; // Monster에서 Position을 사용하는 것을 Composition이라고 함

	//언제 서브클래스를 만들어야 하나? -> 가급적 빨리 만드는게 좋음

	//int m_x; //location
	//int m_y;

public:
	Monster(const std::string name_in, const Position2D & pos_in)
		: m_name(name_in),m_location(pos_in)
	{}

	void moveTo(const Position2D & pos_target)
	{
		m_location.set(pos_target); // set이라는 것을 사용해야된다만 알면되지 내부 동작까지는 알 필요 없게 작성하는게 좋음
		//Monster 클래스에서는 set이 어떤 역할을 하는지 안보이는 것이 좋음
	}

	friend std::ostream & operator << (std::ostream & out, const Monster & monster)
	{
		out << monster.m_name << " " << monster.m_location ;
		return out;
	}

};
