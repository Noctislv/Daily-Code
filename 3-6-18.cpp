#include<iostream>
#include<ctime>
using namespace std;

//class definition
class Pokemon {
private:
	int life;

public:
	void eat(char c);
	void initpoke(int health);
	void printInfo();
	
	
};
char foodDrop(char location);


int main() {
	srand(time(NULL));
	char location = 'd'; //test with d and f
	cout << foodDrop(location) << endl;;
	system("pause");

	Pokemon grima;
	Pokemon naga;
	grima.initpoke(5);
	//grima.eat('b');//call fooddrop in the () once you get it!
	grima.eat(foodDrop('d'));
	grima.printInfo();

	naga.initpoke(5);
	//naga.eat('b');
	naga.eat(foodDrop('d'));
	naga.printInfo();
}

//function definitions
void Pokemon::eat(char food) {
	if (food == 'b')
		life += 3;
	//keep going here, 3 more if statements
	if (food == 'f')
		life += 10;
	if (food == 'm')
		life += 25;
	if (food == 'c')
		life += 50;


}
void Pokemon::initpoke(int health){
	life = health;
}

void Pokemon::printInfo() {
	cout << "your pokemon's health is " << life << endl;

}
char foodDrop(char location) {

	int num = rand() % 100 + 1;

	if (location == 'f') {
		if (num <= 50) {
			cout << "you got a berry!" << endl;
			return 'b';
		}
		else {
			cout << "you got a mushroom!" << endl;
			return 'm';

		}
	}
	else if (location == 'd') {
		if (num <= 20) {
			cout << "You got a berry!" << endl;
			return 'b';
		}
		else if (num <= 40) {
			cout << "You got a fruit!" << endl;
			return 'f';
		}
		else if (num < 40) {
			cout << "You found some cheese?" << endl;
			return 'c';
		}
	}


	else
		cout << "invalid location" << endl;

}
