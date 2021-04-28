//컴퓨터가 내부에서 CPU와 메모리를 어떻게 사용하는지 좀 더 구체적으로 알아야함

//동적메모리 직접관리 보다 벡터를 사용하는게 훨씬 편함
//Vector를 Stack처럼 사용하는 방법

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
	////ing *v = new int[3]{1,2,3}; // 이와 비슷
	//
	//vector<int> v{ 1,2,3 };

	////벡터에는 size와 capacity의 개념이 존재
	////실제 코드 내부에서는 capacity 갯수 만큼 메모리를 가지고 있음, 사이즈는 그 중에서 몇개만 사용한다.
	////벡터를 잘 쓰는 법은 내부적으로 호출되는 new 와 delete을 어떻게 하면 적게 쓸지 생각해서 작성

	////v.resize(2);
	////reserve : 메모리의 용량을 미리 확보해놓겠다
	//v.reserve(1024); // 모든 정보가 다 나옴 --> 벡터 뒤에 원소가 추가가 될 때 reserve된 공간이 많이 남아있으면
	//// 새로 메모리를 교체하고 받아오지 않음  -> 훨씬 빠름

	////for (auto &elements : v)
	//for(unsigned int i = 0; i< v.size(); ++i)
	//	cout << v[i] << " ";
	//cout << endl;

	//cout << v.size() << " " << v.capacity() << endl; // 2,3 -> 용량은 3을 유지하고 출력할때만 2를 출력

	////cout << v.at(2) << endl; // runtime error!!

	//int *ptr = v.data();

	//cout << ptr[2] << endl;//3까지 출력 


	//----------------------------------------------------------------------------------------
	//스택 처럼 사용하기

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

	// vector에서 stack을 구현하는 이유 -> 효율이 더 좋음
	// 단점은 reserve를 너무크게 해 놓으면 capacity가 너무 커서 메모리 낭비 염려
	return 0;

}