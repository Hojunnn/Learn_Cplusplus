#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>

using namespace std;

int main() {

	//char myString[] = "string"; // 안보이게 마지막이라고 표시하는 \0이 들어가 잇음

	//for (int i = 0; i < 7; ++i)
	//{
	//	cout << (int)myString[i] << endl;
	//}

	//char myString[255];

	//cin >> myString;//just using cin occur something wrong (like using between space while generate string)
	//Using cin.getline makes upper error clear

	//cin.getline(myString, 255);

	////myString[4] = '\0';
	////출력시 \0(null character)가 나오기 전까지 출력
	////cout << myString << endl;

	//int ix = 0;
	//while (true)
	//{
	//	if (myString[ix] == '\0') break;
	//	
	//	cout << myString[ix] << "" << (int)myString[ix] << endl;
	//	++ix;
	//}

	char source[] = "Copy this!";
	char dest[50];
	//strcpy(dest, source);
	strcpy_s(dest, 50, source);

	/*cout << source << endl;
	cout << dest << endl;*/

	//strcat() : add string 
	//strcmp() : compare between strings
	//strcmp() returns 0(same) or -1(different) 

	/*strcat(dest, source);

	cout << source << endl;
	cout << dest << endl;*/

	if (strcmp(source, dest) == 0)
		cout << "it's same" << endl;

	return 0;
}