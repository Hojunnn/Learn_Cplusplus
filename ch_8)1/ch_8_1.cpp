#include <iostream>
#include <string>
#include <vector>
using namespace std;

//Object : 멤버 변수, 멤버 함수를 포함
//Class 가 Object라는 개념을 직접 구현할 때 사용하는 것



// Friend : name, address, age, height, weight, ...
//단순한 기능에는 struct도 상관 없지만, class 쓰는게 일반적
// struct는 주로 데이터 묶을때 사용
class Friend // name, address, age, height, weight, print 모두 Friend의 멤버
	// print 멤버 함수가 멤버 변수들을 바로 접근할 수 있음
{
public: //access specifier 추가(접근 지정자)
	//public, protected, private
	string _name;
	string _address;
	int    _age;
	double _height;
	double _weight;

	void print()
	{
		cout << _name << " " << _address << " " << _age << " "
			<< _height << " " << _weight << endl;

	}

};

void print(const string &name, const string &address, const int &age,
	const double &height, const double &weight)
{
	cout << name << " " << address << " " << age << " " 
		<< height << " " << weight << endl;

}

int main()
{
	/*Friend jj;
	jj.name = " Jack Jack ";
	jj.age = 2;
	jj.address = "Uptown"*/

	Friend jj{ "Jack Jack", "Uptown", 2,30,10 };//instanciation
	//jj를 인스턴스 라고 부름 -> jj 선언을 통해 Instanciation
	
	//멤버 선택 
	//print(jj.name, jj.address, jj.age, jj.height, jj.weight);// jj. : 멤버 선택
	//다른 친구가 생기면 또 XX.name, XX.~~ 해줘야됨
	//	print(jj);

	jj.print();//print를 Friend의 멤버로 추가함으로써, 조금 더 직관적이고 편함

	//Friend의 벡터를 만듦
	vector<Friend> my_friends;
	my_friends.resize(2);

	/*my_friends[0].print();
	my_friends[1].print();
	my_friends[2].print();
	my_friends[3].print();*/

	for (auto &ele : my_friends)
		ele.print();
	   
	/*vector<string> name_vec;
	vector<string> addr_vec;
	vector<int> age_vec;
	vector<double> height_vec;
	vector<double> weight_vec;
	
	print(name_vec[0], addr_vec[0],age_vec[0], height_vec[0], weight_vec[0])*/


	return 0;
}