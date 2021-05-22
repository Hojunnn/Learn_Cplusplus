#include <iostream>
#include <string>
#include <vector>
using namespace std;

//Object : ��� ����, ��� �Լ��� ����
//Class �� Object��� ������ ���� ������ �� ����ϴ� ��



// Friend : name, address, age, height, weight, ...
//�ܼ��� ��ɿ��� struct�� ��� ������, class ���°� �Ϲ���
// struct�� �ַ� ������ ������ ���
class Friend // name, address, age, height, weight, print ��� Friend�� ���
	// print ��� �Լ��� ��� �������� �ٷ� ������ �� ����
{
public: //access specifier �߰�(���� ������)
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
	//jj�� �ν��Ͻ� ��� �θ� -> jj ������ ���� Instanciation
	
	//��� ���� 
	//print(jj.name, jj.address, jj.age, jj.height, jj.weight);// jj. : ��� ����
	//�ٸ� ģ���� ����� �� XX.name, XX.~~ ����ߵ�
	//	print(jj);

	jj.print();//print�� Friend�� ����� �߰������ν�, ���� �� �������̰� ����

	//Friend�� ���͸� ����
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