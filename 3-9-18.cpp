//#include <iostream>
//#include <allegro5/allegro.h>
//#include <allegro5/allegro_image.h>
//#include <ctime>
//using namespace std;
//class vegetable {
//private:
//
//public:
//
//protected:
//	int xpos1;
//	int ypos1;
//	int xpos2;
//	int ypos2;
//};
//
//class potato : public vegetable {
//private:
//
//public:
//	void drawPotato(int x, int y, ALLEGRO_BITMAP *elias);
//	void InitPotato(int x, int y);
//};
//
//class radish : public vegetable {
//private:
//
//public:
//	void drawRadish(int x, int y, ALLEGRO_BITMAP *jayr);
//	void InitRadish(int x, int y);
//};
//int main() {
//	al_init();
//	al_init_image_addon();
//	srand(time(NULL));
//
//	ALLEGRO_DISPLAY *display = al_create_display(800, 800);
//	ALLEGRO_BITMAP *potatob = al_load_bitmap("Potato.png");
//	ALLEGRO_BITMAP *radishb = al_load_bitmap("Radish.png");
//
//	int xpos1 = rand() % 800 + 1;
//	int xpos2 = rand() % 800 + 1;
//	int ypos1 = rand() % 800 + 1;
//	int ypos2 = rand() % 800 + 1;
//
//	potato p1;
//	p1.InitPotato(xpos1, ypos1);
//
//	radish r1;
//	r1.InitRadish(xpos2, ypos2);
//
//	while (1) {
//		xpos1 = rand() % 800 + 1;
//		xpos2 = rand() % 800 + 1;
//		ypos1 = rand() % 800 + 1;
//		ypos2 = rand() % 800 + 1;
//		cout << "inside game loop" << endl;
//		p1.drawPotato(xpos1, ypos2, potatob);
//		r1.drawRadish(xpos2, ypos2, radishb);
//		al_flip_display();
//	}
//
//}
//void radish::InitRadish(int x, int y) {
//	xpos2 = x;
//	ypos2 = y;
//}
//void potato::InitPotato(int x, int y) {
//	xpos1 = x;
//	ypos1 = y;
//}
//void potato::drawPotato(int x, int y, ALLEGRO_BITMAP *elias) {
//	cout << "inside draw potato function" << endl;
//	al_draw_bitmap(elias, x, y, 0);
//}
//void radish::drawRadish(int x, int y, ALLEGRO_BITMAP *jayr) {
//	al_draw_bitmap(jayr, x, y, 0);
//}