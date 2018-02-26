#include <allegro5/allegro.h>
#include <allegro5/allegro_primitives.h>
#include<time.h>



int SCREEN_H = 900;
int SCREEN_W = 700;
int main() {
	srand(time(NULL));
	ALLEGRO_DISPLAY *display = NULL;
	ALLEGRO_BITMAP *bit = NULL;
	al_init();
	
		display = al_create_display(rand() % SCREEN_H+100, rand() % SCREEN_W+200);
		al_init_primitives_addon();
		al_clear_to_color(al_map_rgb(rand() % 255, rand() % 255, rand() % 255));
	while (1==1) {

		

		al_draw_circle(rand() % SCREEN_W, rand() % SCREEN_H, rand() % 200, al_map_rgb(rand() % 255, rand() % 255, rand() % 255), rand() % 200);


		al_flip_display();
		al_rest(.01);
	}
}