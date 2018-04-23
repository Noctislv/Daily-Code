#include <iostream>
#include <string>
#include <fstream>
#include<vector>
using namespace std;

int main() {
	int num;
	string read;
	vector<string>words;
	vector<string>::iterator iter1;
	vector<char>::iterator iter2;

	ifstream succ; //gets ready to open file
	succ.open("prob6.txt"); //opens file

	succ >> num; //reads in the first number
	cout << "num is " << num << endl << endl;
	while (getline(succ, read)) {//read teh words in
	
		words.push_back(read);//push each word into vector
	}

	ofstream ofile;
	ofile.open("output.txt");

	for (iter1 = words.begin(); iter1 != words.end(); iter1++) { //walk through each word in the vector
		string s(*iter1); //load the contents of the vector slot into a string variable
		//create a character vector named v, fill it with characters from string
		vector<char> v(s.begin(), s.end());

		for (iter2 = v.begin(); iter2 != v.end(); iter2++) { //walk through each character in the vector
			if (*iter2 == 'a' || *iter2 == 'A') {
				ofile << "alpha"<<endl;
				cout << "alpha"<<endl;
			}
			if (*iter2 == 'j' || *iter2 == 'J') {
				ofile << "Jellybean"<<endl;
				cout << "Jellybean"<<endl;
			}
			if (*iter2 == 'b' || *iter2 == 'B') {
				ofile << "Bravo" << endl;
				cout << "Bravo" << endl;
			}

		}
	}
	succ.close();

	system("pause");

	return 0;
}