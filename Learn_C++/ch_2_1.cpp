#include <iostream>
#include <iomanip>
#include <limits>
#include <cmath>

using namespace std;

int main() {

	//float f(123456789.0f);
	/*double d(3.141592);
	long double ld(3.141592);*/

	//cout << numeric_limits<float>::max() << endl;
	//cout << numeric_limits<float>::min() << endl; //표현할 수 있는 가장 작은 숫자의 절대값을 의미
	//cout << numeric_limits<float>::lowest() << endl;
	//cout << numeric_limits<double>::max() << endl;
	//cout << numeric_limits<double>::min() << endl;
	//cout << numeric_limits<double>::lowest() << endl;
	//cout << numeric_limits<long double>::max() << endl;
	//cout << numeric_limits<long double>::min() << endl;
	//cout << numeric_limits<long double>::lowest() << endl;

	/*cout << 3.14 << endl;
	cout << 31.4e-1 << endl;
	cout << 31.4e-2 << endl;
	cout << 31.4e1 << endl;
	cout << 31.4e2 << endl;*/
	
	//double d1(1.0);
	//double d2(0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1);

	//cout << d << endl;
	//cout << std::setprecision(17);
	//cout << d << endl;
	
	/*cout << std::setprecision(15);
	
	cout << d1 << endl;
	
	cout << d2 << endl;
*/
	double zero = 0.0;
	double posinf = 5.0 / zero;
	double neginf = -5.0 / zero;
	double nan = zero / zero;

	cout << posinf << endl;
	cout << neginf << endl;
	cout << nan << endl;
	
	cout << posinf << "" << isinf(posinf) << endl;
	cout << neginf << "" << isnan(neginf) << endl;
	cout << nan << "" << isnan(nan) << endl;
	cout << 1.0 << "" << isnan(1.0) << endl;



	return 0;
}