//���� ����� ����ϴ� ����Ʈ��� ������ ���� ����ڰ� ��� ����� �ϵ��� ���������� �����ϵ��� ����

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

	//if (x >= 5) // =�� ���� ���� ���� �߻�
	//	cout << "x is greater than 5" << endl;

	//violated assumption -> ����ڰ� ���� �ۼ��� �Ͱ� ���� �ٸ� ������� ���α׷��� ����Ѵ�.

	string hello = "Hello, my name is Jack jack";

	cout << "input from 0 to " << hello.size() - 1 << endl;

	while (true) {
		int ix;
		cin >> ix;

		if (ix >= 0 && ix <= hello.size() - 1)
		{
			cout << hello[ix] << endl;//0~26���� �Է� -> ���α׷����� ����
			break;
		}
			
		else
			cout << "Please Try again" << endl;
		//����ڰ� �����ϴ� ���� �Է� -> 7777 -> ����� ���α׷����� �ʿ伺 
	}
		

	return 0;
}


