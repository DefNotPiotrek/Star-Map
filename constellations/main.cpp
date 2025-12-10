#include "constellations.h"
#include <ncurses.h>
#include <locale.h>

using namespace std;

int main(){
	setlocale(LC_ALL, "");
	initscr(); cbreak(); noecho(); curs_set(0); keypad(stdscr, TRUE); nodelay(stdscr, TRUE);

	if(has_colors()){
		start_color();
		init_pair(1, COLOR_YELLOW, COLOR_BLACK);
	}
	int ch;

	Constellations constellations;
	constellations.setNames();
	constellations.makeConstellations();
	constellations.setStarMap();

	while(1){
		ch = getch();
		constellations.showStarMap();
		constellations.showBorder();
		constellations.controlPointer(ch);
		if(ch == 'q'){
			if(constellations.showedConstellation == "") 
				break;
			else
				constellations.showedConstellation = "";
		}
		napms(25);
	}
	endwin();
	
	return 0;
}
