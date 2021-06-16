//��� ������ �� �ƴ϶� ����� �����ڵ� �����ε��� �� �� ����
#include <iostream>
#include <fstream>//���� ����� ���� ���
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
	//����� ������ �����ε� -> �ܼ� ���, ���Ͽ� ��µ� ����
	friend std::ostream& operator << (std::ostream &out, const Point &point)//return type : ostream
		//ù��° �Ķ���� : ostream, �ι�° �Ķ���� : ����Ϸ��� �ϴ� ����Ʈ
	{
		out << point.m_x << " " << point.m_y << " " << point.m_z;

		return out; // �����ϴ� ������ chaining -> p1 ��� ���� p2 ��� 
	}

	friend std::istream& operator >> (std::istream &in, Point &point)
	{
		in >> point.m_x >> point.m_y >> point.m_z;
		//out << point.m_x << " " << point.m_y << " " << point.m_z;

		return in; // �����ϴ� ������ chaining -> p1 ��� ���� p2 ��� 
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
	of << p1 << " " << p2 << endl; // ���Ͽ� p1, p2 �� ���

	of.close();
	
	return 0;
}