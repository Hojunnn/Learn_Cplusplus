// �������� ��� �̴ϼȶ����� ����Ʈ
// ��� �ʱ�ȭ ����Ʈ

#include <iostream>
using namespace std;

class B
{
private :
	int _b;

public :
	B(const int& _b_in)
		:_b(_b_in)
	{}
};
 // ��� ���� �ʱ�ȭ�ϴ� ����� �پ��ϴ�. (1,2,3)
class Something
{
private:// ���⼭ �ʱ�ȭ�� �� ���� �հ�, �����ڷ� �ʱ�ȭ ����������, �����ڷ� �ʱ�ȭ�� �켱���� 1
	int _i;
	double _d;
	char _c;
	int _arr[5];
	B	_b;

public:
	Something() 
		:_i(1), _d(3.14), _c('a'), _arr{ 1,2,3,4,5 }, _b{ _i - 1 }//2
		// -> { } : �ڵ����� ����ȯ�� �����ش�. ���� �����ϴ�
	{//3
		/*_i = 1;
		_d = 3.14;
		_c = 'a';*/
	}

	void print()
	{
		cout << _i << " " << _d << " " << _c << " " << endl;
		for (auto& e : _arr) 
			cout << e << " ";
		cout << endl;
		
	}
	
};

int main()
{
	Something som;
	som.print();
}