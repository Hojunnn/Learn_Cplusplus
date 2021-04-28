#include <iostream>

//함수 오버로딩 : 동일한 이름을 갖는 함수를 여러개 만드는 것
// 주의점 ,단점, 사용법

using namespace std;


//개발자의 입장에서 addint , adddouble 신경 안쓰고 만들고 싶다~
//int addInt(int x, int y)
//{
//	return x + y;
//}
//
//double addDouble(double x, double y)
//{
//	return x + y;
//}

//매개변수가 다르면 함수 이름이 같아서 다른 놈으로 취급
// 주어진 인자와 매개변수의 조합이 가장 좋은 함수를 찾아서 실행시켜줌

//매개변수는 같지만 return type이 다르면 오버로딩 불가능
//return type만 다르다면 오버로딩 불가능
//int add(int x, int y)
//{
//	return x + y;
//}
//
//int add(double x, double y)
//{
//	return x + y;
//}

//------------------------------
//typedef int my_int;
//// 이 두가지는 같은 타입으로 인식됨
//void print(int x){}
//void print(my_int x){}
//----------------------------------

//void print(char *value){}
//void print(int value){ }

typedef int my_int;
// 오버로딩 사용할 땐 명확하게 
void print(unsigned int value) {}
void print(float value) {}

int main() {

	/*add(1, 2);
	add(3.0, 4.0);*/

	//print(0);
	//print("a");

	print((unsigned int) 'a');
	print(0u);
	print(3.14159f);

	return 0;
}