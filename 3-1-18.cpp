#include <iostream>
#include <fstream>
#include <ctime>
using namespace std;

int main() {
	int n;
	int temp;
	int num[5];

	ifstream read("number.txt");
	if (read.isfx.open())
		if (read.isfx.open())
		{
		for (int i = 0; i < 5; i++) {
			read >> n;
			num[i] = n;
			}
			read.close();
		for (int i = 0; i <= 5; i++)
			if (num[0] < num[1]) {
				temp = num[0];
				num[0] = num[1];
			}
		for (int i = 0; i <= 5; i++)
			if (num[1] < num[2]) {
				temp = num[1];
				num[1] = num[2];
			}
		for (int i = 0; i <= 5; i++)
			if (num[2] < num[3]) {
				temp = num[2];
				num[2] = num[3];
			}
		for (int i = 0; i <= 5; i++)
			if (num[3] < num[4]) {
				temp = num[3];
				num[3] = num[4];
	}

		}

			}