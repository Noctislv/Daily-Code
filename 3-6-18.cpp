//#include <iostream>
//using namespace std;
//#include<string>
//
//int knockback(int D, int w, int p, double s, int b, double r);
//
//class Smash {
//private:
//	int lives;
//
//	string name;
//public:
//	void InitSmash(int x, int y, string z);
//	void PrintInfo();
//	void TakeDamage(int num);
//
//protected:
//	int percent;
//};
//
//
//class Robin : public Smash {
//public:
//	void Nosterafu(int dam);
//
//private:
//
//	int PercentCount;
//};
//
//class Marth : public Smash {
//public:
//	void Counter(int dam);
//
//private:
//	int PercentCount;
//};
//
//int main() {
//		Marth player;
//	 player.InitSmash(4, 0, "Marth");
//	 player.PrintInfo();
//	 player.TakeDamage(knockback(30, 75, 20, 1.5, 20, 1.2));
//	 player.PrintInfo();
//
//
//	 Robin player2;
//	 player2.InitSmash(4, 0, "Robin");
//	 player2.PrintInfo();
//	 player2.TakeDamage(knockback(30, 75, 20, 1.5, 20, 1.2));
//	 player2.PrintInfo();
//	 player2.Nosterafu(20);
//	 player2.PrintInfo();
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
//void Marth::Counter(int dam) {
//
//	cout << "You countered" << dam * 2 << "damage" << endl;
//}
//void Robin::Nosterafu(int dam) {
//	percent+=dam;
//
//	cout << "You used Nosterafu and your health is now " << percent << endl;
//}