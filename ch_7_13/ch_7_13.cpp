//많은 사람이 사용하는 소프트웨어를 개발할 때는 사용자가 어떻게 사용을 하든지 정상적으로 동작하도록 개발

#include <iostream>
#include <string>

using namespace std;

int main()
{
	//syntax error
	//int x 

	//semantic error

	//int x; 
	//cin >> x;

	//if (x >= 5) // =로 인해 논리적 오류 발생
	//	cout << "x is greater than 5" << endl;

	//violated assumption -> 사용자가 내가 작성한 것과 전혀 다른 방식으로 프로그램을 사용한다.

	string hello = "Hello, my name is Jack jack";

	cout << "input from 0 to " << hello.size() - 1 << endl;

	while (true) {
		int ix;
		cin >> ix;

		if (ix >= 0 && ix <= hello.size() - 1)
		{
			cout << hello[ix] << endl;//0~26까지 입력 -> 프로그래머의 입장
			break;
		}
			
		else
			cout << "Please Try again" << endl;
		//사용자가 좋아하는 숫자 입력 -> 7777 -> 방어적 프로그래밍의 필요성 
	}
		

	return 0;
}


