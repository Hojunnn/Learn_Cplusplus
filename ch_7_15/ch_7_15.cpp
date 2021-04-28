#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])// count, 문자열로 들어옴
{
	for (int count = 0; count < argc; ++count)
	{
		string argv_single = argv[count];

		if (count == 1)
		{
			int input_number = stoi(argv_single);//원하는 데이터 타입으로 바꿔서 사용
			cout << input_number + 1 << endl;
		}

		cout << argv_single << endl;// 프로그램 명
	}
	return 0;//Boost library
}