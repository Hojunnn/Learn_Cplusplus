#include <iostream>
#include "MY_CONSTANTS.h"
//#define PRICE_PER_ITEM 30
using namespace std;

//void printNumber(const int my_number) { //매개변수를 뒤에서 초기화 할 수 있기 때문에 const를 사용하여 막아버림
//	
//	//my_number = 455; // 매개변수로 받은 값을 다시 초기화는 잘 없긴 한데, 다른 프로그래머가 변경할 수 있다
//	int n = my_number //보통은 그냥 변수에 복사해서 사용하는 경향
//	
//	
//	//cout << my_number << endl;
//}




int main() {

	double radius;
	cin >> radius;
	
	double circumference = 2.0 * radius * constants::pi;
	



	//const int price_per_item = 30; // 매크로 사용보다 범위를 한정지어주면서 사용하는게 더 낫다
	//
	//int num_item = 123;

	//int price = num_item * price_per_item;

	/*constexpr int my_const(123);
	
	int number;

	cin >> number;

	const int special_number(number);*/


	/*printNumber(123);
	const double gravity{ 9.8 };*/ // const를 사용함으로써 변수 값을 고정해버림, 다른곳에서 바꿀 수가 없음

	return 0;
}