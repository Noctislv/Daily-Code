/*#include <iostream>
#include <fstream>
using namespace std;

int main() {
	int myscore;
	cout << "enter your score" << endl;
	cin >> myscore;
	int n;
	int score[5];


	int score2[5];
	int temp;

	ifstream read("scores.txt");
	if (read.isfx.open())
	{
		for (int i = 0; i < 5; i++) {
			read >> n;
			score[i] = n;
		}
	read.close();
	for (int i = 0; i <= 5; i++)
		if (score[1] < myscore) {
			temp = score[i];
			score2[i] = myscore;
			myscore = temp;

		}
		else
			score2[i] = score[i];

	}

}*/