#include <iostream>

using namespace std;

////void printArray(int array[]) 따라서 int array[]와 int * array는 동일
//void printArray(int * array)
//{
//	cout << sizeof(array) << endl; // output 4 
//	//why?
//
//	//input은 배열의 형태로 넣어주지만 내부적으로는 그냥 포인터!
//	cout << *array << endl; // output : 9 -> array의 첫 번째 원소 9를 출력
//
//	*array = 100;
//
//}

struct MyStruct
{
	int array[5] = { 9,7,3,4,5 };

};


void doSomething(MyStruct *ms)
{
	cout << sizeof((*ms).array) << endl;
}


int main()
{

	//int array[5] = { 9,7,3,4,5 };

	//cout << sizeof(array) << endl;

	//cout << array[0] << " " << array[1] << endl;
	//cout << array << endl;
	//cout << &array[0] << endl;
	////array는 배열이 아니라 포인터로사용

	//cout << *array << endl;

	//int *ptr = array;

	//cout << sizeof(ptr) << endl;
	//cout << ptr << endl; // output : address
	//cout << *ptr << endl; //output : 첫번쨰 아톰

	//printArray(array);

	/*char name[] = "jackjack";
	cout << *name << endl;*/

	//cout << array[0] << " " << *array << endl;

	//포인터 연산//
	//cout << *ptr << " " << *(ptr + 1) << endl;

	MyStruct ms;
	cout << ms.array[0] << endl;

	cout << sizeof(ms.array) << endl;

	doSomething(&ms);


	//array가 구조체나 class안에 들어있을 때는 array 자체가 감
	//그냥 선언된 배열을 매개변수 포인터로 받으면 포인터로 받아들여서 다른 크기가 나오게 된다.
	return 0;
}