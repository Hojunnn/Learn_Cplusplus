#include <iostream>

using namespace std;

int main() {
	//int value = 9; //double : 8byte, short : 2byte
	//int *ptr = &value;

	//cout << uintptr_t(ptr) << endl;
	//cout << uintptr_t(ptr + 1) << endl;
	//cout << uintptr_t(ptr + 2) << endl;
	//cout << uintptr_t(ptr - 1) << endl;

	/*int array[] = { 9,7,5,3,1 };

	int *ptr = array;


	for (int i = 0; i < 5; ++i)*/
		//cout << array[i] << " " << (uintptr_t)&array[i] << endl;
		//cout << *(ptr + i) << " " << (uintptr_t)(ptr+i) << endl; //¿ªÂüÁ¶(*) : dereferencing

	/*cout << array[0] << " " << (uintptr_t)&array[0] << endl;
	cout << array[1] << " " << (uintptr_t)&array[1] << endl;
	cout << array[2] << " " << (uintptr_t)&array[2] << endl;
	cout << array[3] << " " << (uintptr_t)&array[3] << endl;*/

	char name[]{ "Daniel" };

	const int n_name = sizeof(name) / sizeof(name[0]);

	char *ptr = name;

	/*for (int i = 0; i < n_name; ++i) {
		cout << *(ptr + i) << " " << (uintptr_t)(ptr + i) << endl;
	}*/
	
	/*cout << n_name << endl;*/

	int i = 0;

	while (n_name > 0)
	{
		cout << *(ptr + i) << " " << (uintptr_t)(ptr + i) << endl;
		i++;
		
		if (i >= n_name-1)
			break;
	}
	
	


	return 0;
}