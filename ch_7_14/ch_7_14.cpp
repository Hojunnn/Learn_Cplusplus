// ������ �����Ϸ� ������ ���� �� �ִ� Assert

#include <cassert> // assert.h
#include <array>
#include <iostream>

using namespace std;

//void printValue(const array<int, 5> &arr, const int& ix)
//{
//	assert(ix >= 0);
//	assert(ix <= arr.size() - 1);//â���� � ������ �߻��ߴ��� Ȯ���� �� ����
//	//assert�� runtime�� üũ����
//	
//	cout << arr[ix] << endl;
//}

int main()
{
	////assert(false);// Debug ��忡���� ����������, release ��忡���� �������� ����

	//int number = 5;

	//// ...

	//assert(number == 5);//Debug ��忡���� ������ ã���ְ�, Release ��忡���� assert�� ������ �Ƚ�Ŵ

	//array<int, 5> arr{ 1,2,3,4,5 };

	/*printValue(arr, 100);*/
	
	//------------------------------------------------
	//static assert

	const int x = 5;

	assert(x == 5);//������ assert �ʹ� �ٸ��� ������ ���� �� ����
	static_assert(x == 5, "x should be 5");
	//�����Ϸ��� �̿��ؼ� �����α׷��� ��Ÿ�� �� �ִ� ������ �̸� �����ϴ� ���


	return 0;
}