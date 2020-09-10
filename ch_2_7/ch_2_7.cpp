#include <iostream>
#include <limits>


using namespace std;

int main() {

	//char c1(65);
	//char c2('A'); // 문자 하나를 표현할 때는 '', 문자열을 표현할때는 ""

	//cout << c1 << " " << c2 << " " << int(c1) << " " << int(c2) << endl;

	////c 스타일 캐스팅
	//cout << (char)65 << endl;
	//cout << (int)'A' << endl;

	////c++ 스타일 캐스팅
	//cout << char(65) << endl;
	//cout << int('A') << endl;

	//// c++ static casting - 강제성이 좀 떨어짐
	//cout << static_cast<char>(65) << endl;
	//cout << static_cast<int>('A') << endl;


	//char ch(97);
	//cout << ch << endl;
	//cout << static_cast<int>(ch) << endl;
	//cout << ch << endl;
	
	//char c1(65);

	//cin >> c1;
	//cout << c1 << " " << static_cast<int>(c1) << endl;
	//
	////string operator는 한번에 들어오는 것을 한번에 처리 못할 경우 buffer에 저장한다
	//cin >> c1;
	//cout << c1 << " " << static_cast<int>(c1) << endl;

	//cin >> c1;
	//cout << c1 << " " << static_cast<int>(c1) << endl;

	//cin >> c1;
	//cout << c1 << " " << static_cast<int>(c1) << endl;

	char c1(65);

	/*cout << sizeof(unsigned char) << endl;
	cout << (int)numeric_limits<unsigned char>::max() << endl;
	cout << (int)numeric_limits<unsigned char>::lowest() << endl;*/

	cout << "This is first line \nsecond line \n";
	cout << "This is first line" << endl;
	cout << "second line";

	wchar_t c;// windows 프로그래밍에서 골칫거리
	char32_t c3; // 

	// \t : tap
	// \a : sound
	//endl : cout buffer에 있는 모든 내용을 출력해라 & 줄바꿈?

	// std::flush; -> buffer에 있는 모든 내용 출력
	return 0;
}