//수행해야하는 기능 정의, 기능을 수행할 떄 어떤 객체들이 어떻게 업무를 나눠서 할 것인가 또는 어떻게 도움을 주고 받을 것인지를 설계해야함
// 설계에 따라서 여러가지 클래스들을 구현하면서, 프로그래밍언어로 객체들을 만들어냄
//클래스들 간의 관계가 많은 프로그램에서 어떠한 패턴을 보이고 있음. 패턴들에 대해 살펴봄

// 구성(Composition) : Part-of 두뇌는 육체의 일부이다. (전체/부품) - 다른 클래스에 속할 수 없음, 멤버의 존재를 클래스가 관리해줘야함, 단방향
// 집합(Aggregation) : Has-a 어떤 사람이 자동차를 가지고 있다. (전체/부품) = 다른 클래스에 속할 수 있음, 멤버의 존재를 클래스 관리 X, 단방향
// 연계, 제휴(Association) : Uses-a 환자는 의사의 치료를 받는다. 의사는 환자들로부터 치료비를 받는다. 용도 외엔 무관
// 다른 클래스에도 속할 수 있음, 멤버의 존재를 클래스가 관리하지 않음, 양방향 
// 의존(Dependency) : Depends-on 나는 목발을 짚었다.
// 다른 클래스에도 속할 수 있음, 멤버의 존재를 클래스에서 관리, 단방향

// 1. 구성 관계

#include <iostream>
#include "Monster.h"

using namespace std;

int main()
{
	Monster mon1("Sanson", Position2D(0, 0));
	//mon1.m_location; // m_location mon1에 속해 있음, location이 이름에 대해 알 필요 없음
	cout << mon1 << endl;

	Monster mon2("Parsival", Position2D(0, 0));
	//mon2.m_location;

	//while (1) // game loop
	{
		//event
		mon1.moveTo(Position2D(1,1));
		cout << mon1 << endl;
	}
}