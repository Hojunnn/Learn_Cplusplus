#include <iostream>

//동적 메모리 할당을 통해서 다차원 배열을 만드는 방법
//이중 포인터와 동적 다차원 배열

using namespace std;

int main()
{
	////포인터 변수 선언
	//int *ptr = nullptr;

	//// 포인터에 대한 포인터 -> 이중 포인터
	//int **ptrptr = nullptr;

	//int value = 5;

	//ptr = &value;
	//ptrptr = &ptr;

	////ptr : value 주소값, *ptr : value 값, &ptr : ptr의 주소값
	//cout << ptr << " " << *ptr << " " << &ptr << endl;
	//cout << ptrptr << " " << *ptrptr << " " << &ptrptr << endl;
	//cout << **ptrptr << endl;

	const int row = 3;
	const int col = 5;

	const int s2da[row][col] =
	{
		{1,2,3,4,5},
		{6,7,8,9,10},
		{11, 12, 13, 14, 15}
	};

	int *matrix = new int[row*col];

	for (int r = 0; r < row; ++r)
		for (int c = 0; c < col; ++c)
			matrix[c + col * r] = s2da[r][c];

	for (int r = 0; r < row; ++r)
	{
		for (int c = 0; c < col; ++c)
			cout << matrix[c + col * r] << " ";
		cout << endl;
	}

	delete[] matrix;

	//int *r1 = new int[col] {1, 2, 3, 4, 5};
	//int *r2 = new int[col] {6, 7, 8, 9, 10};
	//int *r3 = new int[col] {11, 12, 13, 14, 15};

	////integer의 pointer의 array 생성
	//int **rows = new int*[row] {r1, r2, r3};

	/*int **matrix = new int*[row];

	for (int r = 0; r < row; ++r)
		matrix[r] = new int[col];

	for (int r = 0; r < row; ++r)
	{
		for (int c = 0; c < col; ++c)
			matrix[r][c] = s2da[r][c];
	}

	for (int r = 0; r < row; ++r)
	{
		for (int c = 0; c < col; ++c)
			cout << matrix[r][c] << " ";
		cout << endl;
	}*/

	/*delete[] r1; 
	delete[] r2;
	delete[] r3;
	delete[] rows;*/
	
	/*for (int r = 0; r < row; ++r)
	{
		delete[] matrix[r];
	}

	delete[] matrix;
*/
	return 0;
}