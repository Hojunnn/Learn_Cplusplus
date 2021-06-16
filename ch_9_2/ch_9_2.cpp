//산술 연산자 뿐 아니라 입출력 연산자도 오버로딩을 할 수 있음
#include <iostream>
#include <fstream>//파일 출력을 위한 헤더
using namespace std;

class Point
{
private:
	double m_x, m_y, m_z;

public:
	Point(double x = 0.0, double y = 0.0, double z = 0.0)
		:m_x(x), m_y(y), m_z(z)
	{}

	double getX() { return m_x; }
	double getY() { return m_y; }
	double getZ() { return m_z; }

	/*void Print()
	{
		cout << m_x << " " << m_y << " " << m_z << endl;
	}*/
	//입출력 연산자 오버로딩 -> 콘솔 출력, 파일에 출력도 가능
	friend std::ostream& operator << (std::ostream &out, const Point &point)//return type : ostream
		//첫번째 파라미터 : ostream, 두번째 파라미터 : 출력하려고 하는 포인트
	{
		out << point.m_x << " " << point.m_y << " " << point.m_z;

		return out; // 리턴하는 이유는 chaining -> p1 출력 다음 p2 출력 
	}

	friend std::istream& operator >> (std::istream &in, Point &point)
	{
		in >> point.m_x >> point.m_y >> point.m_z;
		//out << point.m_x << " " << point.m_y << " " << point.m_z;

		return in; // 리턴하는 이유는 chaining -> p1 출력 다음 p2 출력 
	}

};

int main()
{
	ofstream of("out.txt");

	//Point p1(0.0, 0.1, 0.2), p2(3.4,1.5,2.0);

	Point p1, p2;

	cin >> p1 >> p2;

	/*p1.Print();
	p2.Print();*/

	cout << p1 << " " << p2 << endl;
	of << p1 << " " << p2 << endl; // 파일에 p1, p2 갑 출력

	of.close();
	
	return 0;
}