#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])// count, ���ڿ��� ����
{
	for (int count = 0; count < argc; ++count)
	{
		string argv_single = argv[count];

		if (count == 1)
		{
			int input_number = stoi(argv_single);//���ϴ� ������ Ÿ������ �ٲ㼭 ���
			cout << input_number + 1 << endl;
		}

		cout << argv_single << endl;// ���α׷� ��
	}
	return 0;//Boost library
}