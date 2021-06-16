#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include <chrono>

using namespace std;

class Timer
{
	using clock_t = chrono::high_resolution_clock;
	using secont_t = chrono::duration<double, ratio<1>>;

	chrono::time_point<clock_t> start_time = clock_t::now(); //member variable

public:
	void elapsed()
	{
		chrono::time_point<clock_t> end_time = clock_t::now();

		cout << chrono::duration_cast<secont_t>(end_time - start_time).count() << endl;
	}
};

int main()
{
	random_device rnd_device;
	mt19937 mersenne_engine{ rnd_device() };

	vector<int>	vec(100000);
	for (unsigned int i = 0; i < vec.size(); ++i)
		vec[i] = i;

	shuffle(begin(vec), end(vec), mersenne_engine); // ������ ������ ������

	/*for (auto &e : vec) cout << e << " ";
	cout << endl;*/

	Timer timer;

	std::sort(begin(vec), end(vec));

	timer.elapsed();// Ÿ�̸Ӱ� �� �ð� ���

	/*for (auto &e : vec) cout << e << " ";
	cout << endl;*/

	return 0;
}

//release ��� (���� �ð�) / debug ��� (x)
//���� ���� ���ο� ���� ����ð� ����ġ�� �ٸ�
// ������ ���� // ��� 3�� 