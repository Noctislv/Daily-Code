//
//#include <iostream>
//#include <fstream>
//#include <vector>
//using namespace std;
//
//int main() {
//	ifstream file("Eingang.txt");
//
//	int Nuss;
//	int Größe;
//	vector<int>betäuben;
//	vector<int>::iterator iter;
//	vector<int>::iterator iter2;
//
//
//	if (file.is_open())
//	{
//		file >> Größe;
//		cout << "Größe is " << Größe << endl;
//		for (int i = 0; i < Größe * 2; i++) {
//			//cout << "i is " << i << endl;
//			file >>	Nuss;
//			//cout << num<<" ";
//		betäuben.push_back(Nuss);
//		}
//
//		cout << endl << endl;
//		for (iter = betäuben.begin(); iter != betäuben.end() - 1; iter += 2) {
//
//
//			iter2 = iter;
//
//			if (iter2 == betäuben.end()) {
//				cout << "attempting to break";
//				break;
//
//			}
//
//			//if(iter2!=numbers.end())
//			advance(iter2, 1);
//
//			cout << *iter + *iter2 << " , " << *iter * *iter2 << endl;
//
//
//		}
//		cout << "flag 1" << endl;
//		file.close();
//	}
//
//	else cout << "Unable to open file";
//
//	system("pause");
//	return 0;
//
//}
