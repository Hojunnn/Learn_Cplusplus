#include <iostream>

using namespace std;


int main() {

	//const float pi = 3.14; // const로 인해서 pi 값을 변경할 수 없음

	/*float pi = 3.14f;
	int i = -12321u;*/ // u는 unsigned를 뜻함

	//Decimal : 0 1 2 3 4 5 6 7 8 9 10
	//Octal : 0 1 2 3 4 5 6 7 10 11 12 13
	//Hexa : 0 1 2 3 4 5 6 7 8 9 A B C D E F

	/*int x = 012;*/ // 앞의 0은 8진수라는 의미
	/*int x = 0xF;*/
	//int x = 0b1010; //2진수 표기
	const int price_per_item = 10;
	int num_items = 123;
	int price = num_items * price_per_item; //숫자(magic number)를 하드코딩하는 방법은 좋지 않음
	//cout << x << endl;


	return 0;
}