//#include <iostream>
//#include <string>
//#include <fstream>
//using namespace std;
//string nev(string name);
//int main() {
//	//string name;
//	//ifstream read("Prob01.in.txt");
//	//	if (read.isfx.open())
//	////cout << "What is your full name" << endl;
//	//getline(read, name);
//	//cout << nev(name) << endl;
//	//return 0;
//
//	string line;
//	ifstream myfile("Prob01.in.txt");
//	ofstream myfile2("example.txt");
//	if (myfile.is_open() && myfile2.is_open())
//	{
//		while (getline(myfile, line))
//		{
//			cout << nev(line) << '\n'; //prints to console
//			myfile2 << nev(line) << endl; //prints to file
//		}
//		myfile.close();
//	}
//}
//string nev(string name) {
//	string mono;
//	if (isalpha(name[0])) {
//		mono += toupper(name[0]);
//	}
//	for (int i = 0; i < name.size() - 1; i++) {
//		if (isspace(name[i]) && isalpha(name[i + 1])) {
//			mono += toupper(name[i + 1]);
//		}
//	}
//	return mono;
//}