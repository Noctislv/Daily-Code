#include <iostream>
#include <string>
using namespace std;

	string noun[19] = { "thicc","smexy", "scuffed", "William", "succy", "ducky", "poopy", "Shakesphere", "Jake", "Floozy", "Doozy", "Chopin", "Dinky", "Jesus", "Gucci", "*crying*", "coco", "ARRRRGH", "Depressed" };
	string adj[19] = { "thicc","smexy", "scuffed", "William", "succy", "ducky", "poopy", "Shakesphere", "Jake", "Floozy", "Doozy", "Chopin", "Dinky", "Jesus", "Gucci", "*crying*", "coco", "ARRRRGH", "Depressed" };

	char input = 'y';


	int main() {

	srand(NULL);

		cout << "Do you want to know your Rap name?" << endl;
		while (input == 'y') {
			cin >> input;

			int ad = rand() % 15;
			int nouns = rand() % 10;
			cout << adj[ad] << endl;
			cout << noun[nouns] << endl;

		}
	}

	
