// 생성자의 멤버 이니셜라이져 리스트
// 멤버 초기화 리스트

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
 // 멤버 변수 초기화하는 방법은 다양하다. (1,2,3)
class Something
{
private:// 여기서 초기화를 할 수도 잇고, 생성자로 초기화 가능하지만, 생성자로 초기화가 우선순위 1
	int _i;
	double _d;
	char _c;
	int _arr[5];
	B	_b;

public:
	Something() 
		:_i(1), _d(3.14), _c('a'), _arr{ 1,2,3,4,5 }, _b{ _i - 1 }//2
		// -> { } : 자동으로 형변환을 안해준다. 좀더 엄격하다
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