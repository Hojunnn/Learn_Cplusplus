//��ǻ�Ͱ� ���ο��� CPU�� �޸𸮸� ��� ����ϴ��� �� �� ��ü������ �˾ƾ���

//�����޸� �������� ���� ���͸� ����ϴ°� �ξ� ����
//Vector�� Stackó�� ����ϴ� ���

#include <iostream>
#include <vector>

using namespace std;

void printsStack(const vector<int> &v_stack) {
	for (auto &i : v_stack) 
		cout << i << " " ;
	cout << endl;
	
}

int main()
{
	////ing *v = new int[3]{1,2,3}; // �̿� ���
	//
	//vector<int> v{ 1,2,3 };

	////���Ϳ��� size�� capacity�� ������ ����
	////���� �ڵ� ���ο����� capacity ���� ��ŭ �޸𸮸� ������ ����, ������� �� �߿��� ��� ����Ѵ�.
	////���͸� �� ���� ���� ���������� ȣ��Ǵ� new �� delete�� ��� �ϸ� ���� ���� �����ؼ� �ۼ�

	////v.resize(2);
	////reserve : �޸��� �뷮�� �̸� Ȯ���س��ڴ�
	//v.reserve(1024); // ��� ������ �� ���� --> ���� �ڿ� ���Ұ� �߰��� �� �� reserve�� ������ ���� ����������
	//// ���� �޸𸮸� ��ü�ϰ� �޾ƿ��� ����  -> �ξ� ����

	////for (auto &elements : v)
	//for(unsigned int i = 0; i< v.size(); ++i)
	//	cout << v[i] << " ";
	//cout << endl;

	//cout << v.size() << " " << v.capacity() << endl; // 2,3 -> �뷮�� 3�� �����ϰ� ����Ҷ��� 2�� ���

	////cout << v.at(2) << endl; // runtime error!!

	//int *ptr = v.data();

	//cout << ptr[2] << endl;//3���� ��� 


	//----------------------------------------------------------------------------------------
	//���� ó�� ����ϱ�

	vector<int> v_stack;

	//v_stack.reserve(1024);

	v_stack.push_back(3);
	printsStack(v_stack);

	v_stack.push_back(5);
	printsStack(v_stack);

	v_stack.push_back(7);
	printsStack(v_stack);

	v_stack.pop_back();
	printsStack(v_stack);

	v_stack.pop_back();
	printsStack(v_stack);

	v_stack.pop_back();
	printsStack(v_stack);

	// vector���� stack�� �����ϴ� ���� -> ȿ���� �� ����
	// ������ reserve�� �ʹ�ũ�� �� ������ capacity�� �ʹ� Ŀ�� �޸� ���� ����
	return 0;

}