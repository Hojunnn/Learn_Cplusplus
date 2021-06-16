//array�� vector�� ����Ҷ� �Լ��� ȣ���ϴ� ��� Subscript operator[]�� ����ؼ� ���� �����ϱ⵵ �ϰ�
//�ٲٱ⵵ ��. ÷�� �����ڸ� �����ε��ϴ� ���

#include <iostream>
#include <cassert>
using namespace std;

class IntList
{
private:
	int m_list[10]{ 1,2,3,4,5,6,7,8,9,10 };

public:
	/*void setItem(int index, int value)
	{
		m_list[index] = value;
	}

	int getItem(int index)
	{
		return m_list[index];
	}

	int * getList()
	{
		return m_list;
	}*/
	//subscript operator�� ���� ���Ǳ� ������, if�����ٴ� assert�� �����.
	int & operator [] (const int index)
	{
		assert(index >= 0);
		assert(index < 10);
		
		return m_list[index];
	}

	//const ���� ����
	const int & operator [] (const int index) const
	{
		
		assert(index >= 0);
		assert(index < 10);
		return m_list[index];
	}

};

int main()
{
	/*IntList my_list;
	my_list.setItem(3, 1);
	cout << my_list.getItem(3) << endl;
	my_list.getList()[3] = 1;
	cout << my_list.getList()[3] << endl;*/

	IntList my_list;
	//my_list[3] = 10; // �׻� �ּҸ� ������ lvalue���� �ؼ� Reference�� ����
	cout << my_list[3] << endl;


	//IntList *list = new IntList;
	//(*list)[3] = 10; // ok
	//list[3] = IntList; //�ٸ� �õ��� �Ǵ�

	return 0;
}