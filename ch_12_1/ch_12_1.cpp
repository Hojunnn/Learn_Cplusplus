// 상속과 포인터를 연관지어서 자식 클래스의 객체에다가 부모클래스의 포인터를 사용하면 어떻게 될까?
// 다형성과 관련

//자식 클래스의 객체를 부모 클래스의 포인터에 넣어서 편하게 사용할 수 있다 -> 다형성

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

	virtual void speak() const// 다형성 -> virtual
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

	//Animal *ptr_animal1 = &cat; //animal 의 포인터 만듦.
	//Animal *ptr_animal2 = &dog;


	////자식 클래스를 부모클래스의 포인터를 사용하여 캐스팅시켜놓고 호출을 하게 되면, 자신이 부모클래스 인줄 알고 작동함
	//ptr_animal1->speak();
	//ptr_animal2->speak();

	Cat cats[] = { Cat("cat1"), Cat("cat2"), Cat("cat3"), Cat("cat4"), Cat("cat5") };
	Dog dogs[] = { Dog("dog1"), Dog("dog2") };

	//for (int i = 0; i < sizeof(cats); ++i)
	//	cats[i].speak();
	//
	//for (int i = 0; i < sizeof(dogs); ++i)
	//	dogs[i].speak();

	//for문의 갯수를 줄이는 방법 -> Animal 포인터로 하나로 묶어 보면 어떨까?
	Animal *my_animals[] = { &cats[0], &cats[1], &cats[2], &cats[3], &cats[4], &dogs[0], &dogs[1] };
	//vector나 array 같은 컨테이너를 사용하면 사용하기 더 편해짐.

	//포인터는 부모 클래스 타입의 포인터 -> 자식 클래스 인 것처럼 행동함

	for (int i = 0; i < sizeof(my_animals); ++i)
		my_animals[i]->speak();

	return 0;
}
