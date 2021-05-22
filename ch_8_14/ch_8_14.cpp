//클래스 안에 포함된 자료형
// 클래스를 만들 때, 그 기능에 맞춰서 특정한 자료형을 특별히 만들어 사용할 때도 있음, 이때는 자료형이
//여러군데 사용될 필요가 없음 -> 클래스 안에서만 어떠한 자료형을 선언할 수 있음

#include <iostream>

//enum FruitType
//{
//	APPLE, BANANA, CHERRY,
//};

class Fruit
{
public:
	enum FruitType // enum class로 선언시 -> main에서 소속감 한단계 더 추가 : Fruit::FruitType::
	{
		APPLE, BANANA, CHERRY,
	};// class 안에 넣을 수 있음

private:
	FruitType m_type;

public:
	Fruit(FruitType type) : m_type(type)
	{}

	FruitType getType() { return m_type; }
};

int main()
{
	Fruit apple(Fruit::APPLE);//class 소속감 표시

	if (apple.getType == Fruit::APPLE)
	{
		std::cout << "APPLE" << std::endl;
	}

	return 0;
}