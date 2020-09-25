#include <iostream>	

using namespace std;

int main() {

	//int length;

	//cin >> length;

	//int *array = new int[length](); // 마지막 ()는 동적배열을 0으로 초기화 시킴
	//int *array = new int[length] {11, 22, 33, 44, 55}; // uniform initilization -> 기존에 삽입된 인덱스
	////는 그 값으로 유지되고, 초기화 된 인덱스를 넘어서는 값은 모두 0으로 초기화

	//array[0] = 1;
	//array[1] = 2;

	//for (int i = 0; i < length; i++)
	//{
	//	cout << (uintptr_t)&array[i] << endl;
	//	cout << array[i] << endl;

	//}
	////new가 있으면 쌍을 이루는 delete가 반드시 존재
	//delete[] array; // 긴사이즈의 array를 줄이기 위해서 다음과 같이 표기

	int fixedArray[] = { 1,2,3,4,5 };
	int *array = new int[5]{ 1,2,3,4,5 }; // 5라는 인덱스 크기를 명시해주는 값을 빼면 빌드가 안됨!
	//왜? 컴파일 타임에 크기를 결정안할려고함, 반드시 명시해줘야되는 스탈~

	//resizing 유무 판단 
	// ==> 직접적으로는 불가능 
	// ==> 더 큰 메모리를 받아온 다음에, 원래 갖고 있던걸 복사해서 집어 넣고, 그뒤에 새로 추가가 될 것들을
	//덧붙여서 번거롭게 추가시킬 수 있음
	// --> 두번째 방법 : os에게 내가 지금 3칸을 가지고 있는데 2칸이 더필요한데 할당해줄 수 있나요? 없나요?를
	//물어서 가능할 수도 있고 불가능할 수도 있음 -> 안될 시 다시 크기 설정

	delete[] array;

	return 0;
}