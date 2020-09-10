#include <iostream>
#include <cmath>
#include <bitset>
using namespace std;

int main() {

	//int x = 4 + 2 * 3; 

	/*int x = pow(2, 3);

	cout << x << endl;*/

	//int x = 7;
	//int y = 4;
	////int z = x % y;

	////cout << x / y << "  " << z << endl;

	//cout << x / y << endl;
	//cout << float(x) / y << endl;
	//cout << x / float(y) << endl;
	//cout << float(x) / float(y) << endl;

	//int x = 5;
	//int y = --x;
	//int z = x--;

	//cout << y << endl;
	//cout << z << endl;

	//int x(6), y(6);

	//cout << x << "  " << y << endl;
	//cout << ++x << "  " << ++y << endl;
	//cout << x << "  " << y << endl;

	//int x = 3;
	//int y = 10;
	//int z = (++x, ++y);

	//cout << z << endl;

	//bool onSale = true;

	////const int price1 = (onSale == true) ? 10 : 100; //onSale이 true면 10, onSale이 false 면 100
	//int price;

	//if (onSale)
	//	price = 10;
	//else
	//	price = 100;

	//cout << price << endl; 

	//int x, y;
	//cin >> x >> y;

	//cout << x << "  " << y << endl;

	/*unsigned int a = 1024;

	cout << bitset<16>(a) << endl;

	cout << bitset<16>(a<<1) << "  "<< (a<<1) <<endl;
	cout << bitset<16>(a<<2) << "  "<< (a<<2) <<endl;
	cout << bitset<16>(a<<3) << "  "<< (a<<3) <<endl;
	cout << bitset<16>(a<<4) << "  "<< (a<<4) <<endl;
	cout << bitset<16>(a<<5) << "  "<< (a<<5) <<endl;*/

	//----------------------------------------------------------------------------------


	/* bool item1_flag = false;
	 bool item2_flag = false;
	 bool item3_flag = false;
	 bool item4_flag = false;*/
	 // -> 너무 많아서 불편 -> big flag 사용
	 //item1_flag = true;

	 ////die! item2 lost
	 //item2_flag = false;

	 //if (item3_flag == true)
		// cout << "yes" << endl;
	 //if (item3_flag == true && item4_flag == false)
	 //{
		// item3_flag = false;
		// item4_flag = true;
	 //}


	//const unsigned char opt0 = 1 << 0;
	//const unsigned char opt1 = 1 << 1;
	//const unsigned char opt2 = 1 << 2;
	//const unsigned char opt3 = 1 << 3;

	//cout << bitset<8>(opt0) << endl; 
	//cout << bitset<8>(opt1) << endl; 
	//cout << bitset<8>(opt2) << endl; 
	//cout << bitset<8>(opt3) << endl; 

	//unsigned char item_flag = 0;

	//cout << "No item"<< bitset<8>(item_flag) << endl;
	//
	////item on
	//item_flag |= opt0;

	//cout << "item0 obtain" << '\n' << bitset<8>(item_flag) << endl;

	////item3 on
	//item_flag |= opt3;

	//cout << "item3 obtain" << '\n' << bitset<8>(item_flag) << endl;

	////item3 lost

	//item_flag &= ~opt3;

	//cout << "item3 lost" << '\n' << bitset<8>(item_flag) << endl;


	//if (item_flag & opt1)
	//	cout << "you have item1" << endl;

	////obtain item 2,3
	//item_flag |= (opt2 | opt3);

	//cout << bitset<8>(opt2 | opt3) << endl;
	//cout << "Item 2, 3 obtaines" << bitset<8>(item_flag) << endl;


	//if ((item_flag & opt2) && !(item_flag & opt1))
	//{
	//	item_flag ^= opt2;
	//	item_flag ^= opt1;
	//}

	//cout << bitset<8>(item_flag) << endl;

	const unsigned int red_mask = 0xFF0000;
	const unsigned int blue_mask = 0x0000FF;
	const unsigned int green_maks = 0x00FF00;

	unsigned int pixel_color = 0xDAA520;

	cout << bitset<32>(pixel_color) << endl;

	cout << bitset<32>(red_mask) << endl;

	unsigned char red = pixel_color & red_mask;

	cout << "red : " << bitset<8>(red) << endl;

	return 0;
}