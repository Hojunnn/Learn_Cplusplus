#include <iostream>

using namespace std;

int foo(int x, int y); // foo's prototype

int foo(int x, int y)//����Ǹ� �޸𸮿��� �����
{
	return x + y;
} //x and y are destroyed here

int main() {

	int x = 1, y = 2;

	foo(6, 7); // 6,7 : arguments (actual parameter)
	foo(x, y + 1);

	return 0;
}