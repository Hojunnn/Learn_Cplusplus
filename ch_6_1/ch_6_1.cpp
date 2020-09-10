#include <iostream>

using namespace std;

//struct Rectangle
//{
//	int length;
//	int width;
//};

//enum StudentsName
//{
//	JACKJACK, // = 0
//	DASH,     // = 1
//	VIOLET,   // = 2
//};

void doSomething(int students_scores[20]) //array를 함수의 파라미터로 넣어줄 수 있다
{// 엄밀히 말하면 매개변수로 받은 놈은 배열이 아님
	//컴파일러는 현재 매개변수를 포인터로 처리함
	//배열의 모든 원소를 복사해서 가져오는 것이 아니라 배열의 첫번쨰 주소 값만 복사
	cout << &students_scores << endl; //students_scores는 주소값을 저장하는 다른 변수이기 때문에 다른 주소가짐
	cout << &students_scores[0] << endl; 
	//그 포인터 변수에 저장되어 있는 값을 출력할 땐 첫번째 index의 주소를 출력함으로써 원하는 값 출력

	cout << students_scores[0] << endl;
	cout << students_scores[1] << endl;
	cout << students_scores[2] << endl;
	cout << students_scores[3] << endl;

	cout << sizeof(students_scores) << endl;
	//array로 넘어온 것이 아니라 포인터로 넘어옴
	//x86에서는 int 포인터 변수는 4byte
	//x64에서는 int 포인터 변수는 8byte
}

int main() {

	//int one_student_score; // 1variable
	//int student_scores[5]; // 5 int

	/*cout << sizeof(one_student_score) << endl;
	cout << sizeof(student_scores) << endl;*/

	//cout << sizeof(Rectangle) << endl;

	//Rectangle rec_arr[10];

	//rec_arr[0].length = 1;
	//rec_arr[1].width = 2;


	//cout << sizeof(rec_arr) << endl;

	/*int arr[5]{ 1,2,3,4,5 };
	cout << arr[JACKJACK] << endl;
	cout << arr[DASH] << endl;
	cout << arr[VIOLET] << endl;*/

	const int num_students = 20;

	int students_scores[num_students] = { 1,2,3,4,5 };
	//배열 자체가 주소로 사용되기 떄문에 주소연산자를 붙이지 않아도 주소로 출력이 된다
	cout << students_scores << endl;
	cout << students_scores[0] << endl;
	cout << students_scores[1] << endl;
	cout << students_scores[2] << endl;
	cout << students_scores[3] << endl;
	cout << sizeof(students_scores) << endl;

	doSomething(students_scores);
	// x64에서는 (long long)students_scores를 권장, x86, x64 모두 잘 동작하는 멀티플랫폼 코드에서는 
	// (size_t)students_scores를 권장
	return 0;
}