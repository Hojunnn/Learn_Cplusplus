#include <iostream>
using namespace std;

//int generateID()
//{
//	static int s_id = 0;
//	return ++s_id;
//}

class Something
{
public:
	static const int s_value;//static ��� ������ �ʱ�ȭ �� �� ����
	//constexpr
	//�Ϲ����� const�� runtime�� ���� ������ ���� ����
	//constexpr�� compile Ÿ�ӿ� �����Ǿ�� ��
};

//int Something::s_value=1;// static �����ϰ� ������� ����, �ּҰ��� ��� ���� ����
// static�� cpp ���Ͼȿ� ����

int main()
{
	/*cout << generateID() << endl;
	cout << generateID() << endl;
	cout << generateID() << endl;*/

	cout << &Something::s_value << " " << Something::s_value << endl;

	Something st1;
	Something st2;

	//st1.s_value = 2;

	cout << &st1.s_value << " " << st1.s_value << endl; //st1._value�� st2._value�� �ּ� �ٸ�
	cout << &st2.s_value << " " << st2.s_value << endl;

	//Something::s_value = 1024;

	cout << &Something::s_value << " " << Something::s_value << endl;

	return 0;


}