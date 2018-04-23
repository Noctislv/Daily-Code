/*#include <stdio.h>
#include <allegro5/allegro.h>
#include <allegro5/allegro_primitives.h>
#include <iostream>
#include<time.h>
using namespace std;
class Balls {
public:
	void constructor();
	void initBalls(int x, int y, int r);
	void draw();
private:
	int xCoordinate;
	int yCoordinate;
	int radius;
	bool Death;
};

int main(int argc, char **argv) {
	ALLEGRO_DISPLAY *display = NULL;
	ALLEGRO_EVENT_QUEUE *event_queue = NULL;
	ALLEGRO_TIMER *timer = NULL;

	srand(time(NULL));

	al_init();
	al_install_keyboard();
	al_init_primitives_addon();
	timer = al_create_timer(.02);
	display = al_create_display(1080, 880);
	//////////////////////////////////////////////////////////////////////////////////////////
	al_set_target_bitmap(al_get_backbuffer(display));
	event_queue = al_create_event_queue();
	al_register_event_source(event_queue, al_get_display_event_source(display));
	al_register_event_source(event_queue, al_get_timer_event_source(timer));
	al_register_event_source(event_queue, al_get_keyboard_event_source());
	al_clear_to_color(al_map_rgb(rand() % 100, rand() % 100, rand() % 100));
	al_flip_display();


	Balls brick1;
	brick1.initBalls(rand()%1000, rand() % 100, rand() % 1000);
	Balls brick2;
	brick2.initBalls(rand() % 1000, rand() % 1000, rand() % 1000);
	Balls brick3;
	brick3.initBalls(rand() % 1000, rand() % 1000, rand() % 1000);
	Balls brick4;
	brick4.initBalls(rand() % 1000, rand() % 1000, rand() % 1000);
	Balls brick5;
	brick5.initBalls(rand() % 100, rand() % 100, rand() % 100);
	Balls brick6;
	brick6.initBalls(rand() % 100, rand() % 100, rand() % 100);
	Balls brick7;
	brick7.initBalls(rand() % 100, rand() % 100, rand() % 100);
	Balls brick8;
	brick8.initBalls(rand() % 100, rand() % 100, rand() % 100);
	Balls brick9;
	brick9.initBalls(rand() % 100, rand() % 100, rand() % 100);
	Balls brick10;
	brick10.initBalls(rand() % 100, rand() % 100, rand() % 100);
	Balls brick11;
	brick11.initBalls(rand() % 100, rand() % 100, rand() % 100);
	Balls brick12;
	brick12.initBalls(rand() % 100, rand() % 100, rand() % 100);
	Balls brick13;
	brick13.initBalls(rand() % 100, rand() % 100, rand() % 100);
	Balls brick14;
	brick14.initBalls(rand() % 100, rand() % 100, rand() % 100);
	Balls brick15;
	brick15.initBalls(rand() % 100, rand() % 100, rand() % 100);
	Balls brick16;
	brick16.initBalls(rand() % 100, rand() % 100, rand() % 100);
	Balls brick17;
	brick17.initBalls(rand() % 100, rand() % 100, rand() % 100);
	Balls brick18;
	brick18.initBalls (rand() % 100, rand() % 100, rand() % 100);
	Balls brick19;
	brick19.initBalls(rand() % 100, rand() % 100, rand() % 100);
	Balls brick20;
	brick20.initBalls(rand() % 100, rand() % 100, rand() % 100);




			brick1.draw();
			brick2.draw();
			brick3.draw();
			brick4.draw();
			brick5.draw();
			brick6.draw();
			brick7.draw();
			brick8.draw();
			brick9.draw();
			brick10.draw();
			brick11.draw();
			brick12.draw();
			brick13.draw();
			brick14.draw();
			brick15.draw();
			brick16.draw();
			brick17.draw();
			brick18.draw();
			brick19.draw();
			brick20.draw();

			al_flip_display();
			al_rest(10);


		}


void Balls::constructor() {
	xCoordinate = 0;
	yCoordinate = 0;
	radius = 0;
	Death = 0;
}
void Balls::initBalls(int x, int y, int r) {
	xCoordinate = x;
	yCoordinate = y;
	radius = r;
}
void Balls::draw() {
	al_draw_filled_circle(xCoordinate, yCoordinate, radius,
		al_map_rgb(28, 28, 28));
}*/