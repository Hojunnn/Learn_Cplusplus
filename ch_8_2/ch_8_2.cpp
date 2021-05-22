#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Date
{
//public :	//access specifier(접근 지정자) : class 내의 멤버들을 외부에서 접근 가능or 불가능
	//private : default, class 내부에서만 접근 가능 -> 만약 외부에서 접근하려한다면 access function
	//을 만들어 줘야 함
	int _month;
	int _day;
	int _year;

public :
	void setDate(const int& month_input, const int& day_input, const int& year_input)
	{
		_month = month_input;
		_day = day_input;
		_year = year_input;
	}

	void setMonth(const int& month_input)
	{
		_month = month_input;
	}//set year, setday 가능

	const int& getDay() //getters
	{
		return _day;
	}

	void copyFrom(const Date& original)
	{
		_month = original._month;
		_day = original._day;
		_year = original._year;
	}

};

int main() {

	Date today; // { 3, 12, 2021 };
	/*today._month = 4;
	today._day = 22;
	today._year = 2033;*/

	today.setDate(3, 11, 2022);
	today.setMonth(3);
	Date copy;
	copy.copyFrom(today);

	//today와 copy는 Date라는 클래스의 인스턴스(메모리 주소가 다름 -> 다른존재)

	return 0;
}