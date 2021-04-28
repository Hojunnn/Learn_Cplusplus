#include <iostream>
 // 파라미터 값을 설정해서 기본값을 넣어줌
using namespace std;

//void print(int x = 10, int y = 20, int z = 30);// header에 위치
//
//void print(int x, int y, int z)//여러개의 매개변수에 대해서도 가능
//{
//	cout << x << " " << y << " " << z << " " << endl;
//}

void print(string str) {}
void print(char ch = ' '){}

int main() {

	print(10);
	print();

	return 0;
}