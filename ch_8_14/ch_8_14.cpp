//Ŭ���� �ȿ� ���Ե� �ڷ���
// Ŭ������ ���� ��, �� ��ɿ� ���缭 Ư���� �ڷ����� Ư���� ����� ����� ���� ����, �̶��� �ڷ�����
//�������� ���� �ʿ䰡 ���� -> Ŭ���� �ȿ����� ��� �ڷ����� ������ �� ����

#include <iostream>

//enum FruitType
//{
//	APPLE, BANANA, CHERRY,
//};

class Fruit
{
public:
	enum FruitType // enum class�� ����� -> main���� �ҼӰ� �Ѵܰ� �� �߰� : Fruit::FruitType::
	{
		APPLE, BANANA, CHERRY,
	};// class �ȿ� ���� �� ����

private:
	FruitType m_type;

public:
	Fruit(FruitType type) : m_type(type)
	{}

	FruitType getType() { return m_type; }
};

int main()
{
	Fruit apple(Fruit::APPLE);//class �ҼӰ� ǥ��

	if (apple.getType == Fruit::APPLE)
	{
		std::cout << "APPLE" << std::endl;
	}

	return 0;
}