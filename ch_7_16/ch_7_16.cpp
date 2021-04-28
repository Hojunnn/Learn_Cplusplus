//함수를 여러가지 구현하다보면 매개변수 갯수가 정해져 있지 않았으면 좋겠다, 내가 원하는 대로 아무렇게나 넣어
//줬으면 좋겠다 유혹을 느낄때 생략 부호 Ellipsis를 사용할 수 있음

#include <iostream>
#include <cstdarg> // for ellipsis

using namespace std;

double findAverage(int count, ...)
{
	double sum = 0;

	va_list list;

	va_start(list, count);//들어오는 argument 개수

	for (int arg = 0; arg < count; ++arg)
		sum += va_arg(list, int);

	va_end(list);

	return sum / count;
}

int main() {

	cout << findAverage(1, 1, 2, 3, "Hello", 'c') << endl;
	cout << findAverage(3, 1, 2, 3) << endl;
	cout << findAverage(5, 1, 2, 3,4,5) << endl;
	cout << findAverage(10, 1, 2, 3,4,5) << endl;//count와 들어가는 매개변수의 갯수 맞춰줘야함


	return 0;
}