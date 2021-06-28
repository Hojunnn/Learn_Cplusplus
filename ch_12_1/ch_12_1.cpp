// ��Ӱ� �����͸� ������� �ڽ� Ŭ������ ��ü���ٰ� �θ�Ŭ������ �����͸� ����ϸ� ��� �ɱ�?
// �������� ����

//�ڽ� Ŭ������ ��ü�� �θ� Ŭ������ �����Ϳ� �־ ���ϰ� ����� �� �ִ� -> ������

#include <iostream>
#include <string>
using namespace std;

class Animal
{
protected:
	string m_name;

public:
	Animal(std::string name)
		:m_name(name)
	{}

public:
	string getName() { return m_name; }

	virtual void speak() const// ������ -> virtual
	{
		cout << m_name << " ??? " << endl;
	}
};

class Cat : public Animal // cat is an Animal
{
public:
	Cat(string name)
		: Animal(name)
	{}

	void speak() const
	{
		cout << m_name << "Meow" << endl;
	}
};

class Dog : public Animal
{
public:
	Dog(string name)
		:Animal(name)
	{}

	void speak() const
	{
		cout << m_name << "Woof" << endl;
	}
};

int main()
{
	//Animal animal("my animal");
	//Cat cat("my cat");
	//Dog dog("my dog");

	//animal.speak();
	//cat.speak();
	//dog.speak();

	//Animal *ptr_animal1 = &cat; //animal �� ������ ����.
	//Animal *ptr_animal2 = &dog;


	////�ڽ� Ŭ������ �θ�Ŭ������ �����͸� ����Ͽ� ĳ���ý��ѳ��� ȣ���� �ϰ� �Ǹ�, �ڽ��� �θ�Ŭ���� ���� �˰� �۵���
	//ptr_animal1->speak();
	//ptr_animal2->speak();

	Cat cats[] = { Cat("cat1"), Cat("cat2"), Cat("cat3"), Cat("cat4"), Cat("cat5") };
	Dog dogs[] = { Dog("dog1"), Dog("dog2") };

	//for (int i = 0; i < sizeof(cats); ++i)
	//	cats[i].speak();
	//
	//for (int i = 0; i < sizeof(dogs); ++i)
	//	dogs[i].speak();

	//for���� ������ ���̴� ��� -> Animal �����ͷ� �ϳ��� ���� ���� ���?
	Animal *my_animals[] = { &cats[0], &cats[1], &cats[2], &cats[3], &cats[4], &dogs[0], &dogs[1] };
	//vector�� array ���� �����̳ʸ� ����ϸ� ����ϱ� �� ������.

	//�����ʹ� �θ� Ŭ���� Ÿ���� ������ -> �ڽ� Ŭ���� �� ��ó�� �ൿ��

	for (int i = 0; i < sizeof(my_animals); ++i)
		my_animals[i]->speak();

	return 0;
}
