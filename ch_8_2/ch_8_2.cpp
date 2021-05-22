#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Date
{
//public :	//access specifier(���� ������) : class ���� ������� �ܺο��� ���� ����or �Ұ���
	//private : default, class ���ο����� ���� ���� -> ���� �ܺο��� �����Ϸ��Ѵٸ� access function
	//�� ����� ��� ��
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
	}//set year, setday ����

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

	//today�� copy�� Date��� Ŭ������ �ν��Ͻ�(�޸� �ּҰ� �ٸ� -> �ٸ�����)

	return 0;
}