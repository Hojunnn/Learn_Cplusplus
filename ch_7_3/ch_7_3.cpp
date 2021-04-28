#include <iostream>
#include <cmath>
#include <vector>
// #Call by reference

using namespace std;

//void addOne(int &y) // 그냥 y 였다면 함수 밖에 영향을 미치지 못함 
//{
//	y = y + 1;
//}

//void getSinCos(const double degrees, double &sin_out, double &cos_out)//degrees는 단지 입력이라는 것 유추
////왜? reference를 통해서 변수 자체를 받지 않으니까
//// 나머지는 출력으로 사용
//{
//	static const double pi = 3.141592;
//	const double radians = degrees * pi / 180.0; // 계산하고 값이 안바뀔 것 같으면 const로 박제
//	sin_out = sin(radians);
//	cos_out = cos(radians);
//}//함수가 return 값을 여러개 줘야할 때 -> refernce 사용

//reference의 단점
//void foo(int *&x) // method2 : const // method3 : delete &
//{
//	cout << x << " " << &x << endl;
//}


void printElements(vector<int>& arr)
//void printElements(int(&arr)[4])
{

}

int main() {

	//int x = 5;

	//cout << x << " " << &x << endl;

	//addOne(x);// 주소 그대로 -> x라는 변수 자체가 넘어감 

	//cout << x << " " << &x << endl;

	/*double sin(0.0);
	double cos(0.0);

	getSinCos(30.0, sin, cos);

	cout << sin << " " << cos << endl;*/

	//method1
	//int x = 6;
	
	/*foo(x);*///그냥 literal 값이여서 주소가 없음

	/*int x = 5;
	int *ptr = &x;

	cout << ptr << " " << &ptr << endl;
	foo(ptr);*/

	/*int arr[]{ 1,2,3,4 };*/
	vector<int> arr{ 1,2,3,4 };
	printElements(arr);

	return 0;
}