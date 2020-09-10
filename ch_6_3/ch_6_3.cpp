#include <iostream>

using namespace std;

int main() {

	//const int num_students = 5;


	int scores[] = { 84, 92, 76, 81, 56 };

	const int num_students = sizeof(scores) / sizeof(int); //array의 사이즈 

	int min_socres = 100;
	int max_scores = 0;
	int total_scores = 0;

	for (int i = 0; i < num_students; ++i) {
		
		total_scores += scores[i];
		/*max_scores = (max_scores < scores[i]) ? scores[i] : max_socres;*/
		if (max_scores < scores[i])
			max_scores = scores[i];

		if (scores[i] < min_socres)
			min_socres = scores[i];

	}

	/*int score0 = 84;
	int score1 = 92;
	int score2 = 76;
	int score3 = 81;
	int score4 = 56;

	int total_score = score0 + score1 + score2 + score3 + score4;*/

	double avg_score = static_cast<double>(total_scores) / num_students;


	cout << avg_score << endl;
	cout << max_scores << endl;
	cout << min_socres << endl;

	return 0;
}