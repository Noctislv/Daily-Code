//#include <stdio.h>
//#include <ctime>
//#include <allegro5/allegro.h>
//#include <allegro5/allegro_primitives.h>
//
//const float FPS = 60;
//const int SCREEN_W = 900;
//const int SCREEN_H = 900;
//const int BOUNCER_SIZE = 32;
//
//int main(int argc, char **argv)
//{
//	srand(time(NULL));
//	al_init();
//	al_init_primitives_addon();
//	ALLEGRO_DISPLAY *display = NULL;
//	ALLEGRO_EVENT_QUEUE *event_queue = NULL;
//	ALLEGRO_TIMER *timer = NULL;
//	ALLEGRO_BITMAP *bouncer = NULL;
//	float bouncer_x = SCREEN_W / 2.0 - BOUNCER_SIZE / 2.0;
//	float bouncer_y = SCREEN_H / 2.0 - BOUNCER_SIZE / 2.0;
//	bool redraw = true;
//
//	if (!al_init()) {
//		fprintf(stderr, "failed to initialize allegro!\n");
//		return -1;
//	}
//
//	if (!al_install_mouse()) {
//		fprintf(stderr, "failed to initialize the mouse!\n");
//		return -1;
//	}
//
//	timer = al_create_timer(1.0 / FPS);
//	if (!timer) {
//		fprintf(stderr, "failed to create timer!\n");
//		return -1;
//	}
//
//	display = al_create_display(SCREEN_W, SCREEN_H);
//	if (!display) {
//		fprintf(stderr, "failed to create display!\n");
//		al_destroy_timer(timer);
//		return -1;
//	}
//
//	bouncer = al_create_bitmap(BOUNCER_SIZE, BOUNCER_SIZE);
//	if (!bouncer) {
//		fprintf(stderr, "failed to create bouncer bitmap!\n");
//		al_destroy_display(display);
//		al_destroy_timer(timer);
//		return -1;
//	}
//
//	al_set_target_bitmap(bouncer);
//
//	al_clear_to_color(al_map_rgb(255, 0, 255));
//
//	al_set_target_bitmap(al_get_backbuffer(display));
//
//	event_queue = al_create_event_queue();
//	if (!event_queue) {
//		fprintf(stderr, "failed to create event_queue!\n");
//		al_destroy_bitmap(bouncer);
//		al_destroy_display(display);
//		al_destroy_timer(timer);
//		return -1;
//	}
//
//	al_register_event_source(event_queue, al_get_display_event_source(display));
//
//	al_register_event_source(event_queue, al_get_timer_event_source(timer));
//
//	al_register_event_source(event_queue, al_get_mouse_event_source());
//
//	al_clear_to_color(al_map_rgb(0, 0, 0));
//
//	al_flip_display();
//
//	al_start_timer(timer);
//
//	while (1)
//	{
//		ALLEGRO_EVENT ev;
//		al_wait_for_event(event_queue, &ev);
//
//		if (ev.type == ALLEGRO_EVENT_TIMER) {
//			redraw = true;
//		}
//		else if (ev.type == ALLEGRO_EVENT_DISPLAY_CLOSE) {
//			break;
//		}
//		else if (ev.type == ALLEGRO_EVENT_MOUSE_AXES ||
//			ev.type == ALLEGRO_EVENT_MOUSE_ENTER_DISPLAY) {
//
//			bouncer_x = ev.mouse.x;
//			bouncer_y = ev.mouse.y;
//		}
//		else if (ev.type == ALLEGRO_EVENT_MOUSE_BUTTON_DOWN) {
//			/*al_draw_circle(bouncer_x, bouncer_y, rand() % 100, al_map_rgb(rand() % 255, rand() % 50, rand() % 50), rand() % 100);*/
//
//			//top left
//			if (ev.mouse.x <455 && ev.mouse.y <455)
//				al_draw_filled_rectangle(0, 0, 455, 455, al_map_rgb(rand() % 500, 50, 255));
//
//			//bottom right
//			if (ev.mouse.x >455 && ev.mouse.y >455)
//				al_draw_filled_rectangle(900, 900, 455, 455, al_map_rgb(rand() % 500, 255, 255));
//
//			//bottom left
//			if (ev.mouse.x <455 && ev.mouse.y >455)
//				al_draw_filled_rectangle(0, 900, 455, 455, al_map_rgb(rand() % 500, 255, 50));
//
//			//top right
//			if (ev.mouse.x >455 && ev.mouse.y <455)
//				al_draw_filled_rectangle(900, 0, 455, 455, al_map_rgb(rand() % 255, 50, 50));
//		}
//
//		if (redraw && al_is_event_queue_empty(event_queue)) {
//			redraw = false;
//
//			//al_clear_to_color(al_map_rgb(0, 0, 0));
//
//			//al_draw_bitmap(bouncer, bouncer_x, bouncer_y, 0);
//
//			al_flip_display();
//		}
//	}
//
//	al_destroy_bitmap(bouncer);
//	al_destroy_timer(timer);
//	al_destroy_display(display);
//	al_destroy_event_queue(event_queue);
//
//	return 0;
//}
