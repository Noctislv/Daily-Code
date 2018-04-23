//#include <iostream>
//using namespace std;
//#include<string>
//
//int knockback(int D, int w, int p, double s, int b, double r);
//
//class Smash {
//private:
//	int lives;
//	int percent;
//	string name;
//public:
//	void InitSmash(int x, int y, string z);
//	void PrintInfo();
//	void TakeDamage(int num);
//};
//
//
//int main() {
//	Smash Link;
//	Link.InitSmash(4, 0, "Link");
//	Link.PrintInfo();
//	Link.TakeDamage(knockback(30, 75, 20, 1.5, 20, 1.2));
//	Link.PrintInfo();
//
//	Smash Marth;
//	Marth.InitSmash(4, 0, "Marth");
//	Marth.PrintInfo();
//	Smash Robin;
//	Link.InitSmash(4, 0, "Robin");
//	Link.PrintInfo();
//	Smash Gannon;
//	Link.InitSmash(4, 0, "Gannon");
//	Link.PrintInfo();
//}
//void Smash::InitSmash(int x, int y, string z) {
//	percent = 0;
//	lives = 2;
//}
//void Smash::PrintInfo() {
//	cout << name;
//	cout << "'s damage percentage is:" << percent << " and lives are " << lives << endl;
//
//}
//void Smash::TakeDamage(int num) {
//	percent += num;
//}
//int knockback(int D, int w, int p, double s, int b, double r) {
//
//	int num;
//	num = ((((7 * (D + 2) * (D + p)) / (w + 100) + 9) * 2 * s) + b) * r;
//	cout << "damage calculated is " << num << endl << endl;
//	return num;
//}