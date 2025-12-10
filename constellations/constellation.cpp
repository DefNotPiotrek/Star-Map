#include <iostream>
#include <string>
#include <ncurses.h>
#include "constellation.h"

void Constellation::buildDefaultConstellation(){
	row = 20, col = 50, constellationMod = 1, show = true;;
}

void Constellation::buildConstellation(){
	constellation.assign(row, vector<char>(col, ' '));

	//Orion y-19 x-30
	if(Constellation::name == "Orion"){
		setStar(10, 22, '*'); // Alnitak
		setStar(10, 25, '*'); // Alnilam (KOTWICA - środek mapy)
    		setStar(10, 27, '*'); // Mintaka


	    	// Ramiona (góra)
	    	setStar(5, 19, '@');  // Betelgeza (czerwony olbrzym - jasna!)
	    	setStar(6, 30, '*');  // Bellatrix
		setStar(4, 24, '*'); 

		// Bow
		setStar(3, 36, '.');
		setStar(4, 37, '.');
		setStar(5, 38, '*');
		setStar(6, 38, '.');
		setStar(8, 37, '.');

		//arm
		setStar(3, 17, '*');
	  	setStar(2, 16, '.');
		setStar(2, 15, '.');
		setStar(0, 17, ',');
		setStar(0, 18, '.');

	    	// Nogi (dół)
	    	setStar(15, 21, '*'); // Saiph
	    	setStar(14, 32, '@'); // Rigel (super jasna!)
	    	// Miecz (poniżej pasa)
	    	setStar(12, 25, '.');
	    	setStar(13, 25, '.');
		setStar(14, 24, '.');
	}
}

void Constellation::showConstellation(){
	clear();

	for(int i = 0; i < Constellation::row * 2; i++){
		if(i%2 == 0){
			for(int j = 0; j < Constellation::col*2; j++){
				mvaddch(i + constellationMod, j + constellationMod, ' ');
			}
     		}
		else{
			for(int j = 0; j < Constellation::col*2; j++){
				if(j%2 == 0)
				       mvaddch(i + constellationMod, j + constellationMod, ' ');
				else{
				        mvaddch(i + constellationMod, j + constellationMod, constellation[i/2][j/2]);
				}
			}
		}
	}
}

void Constellation::showBorder(){
	for(int i = 0; i < Constellation::row*2+3; i++){
		for(int j = 0; j < Constellation::col*2+3; j++){
			if(j == 0 || j == col*2+2) mvaddch(i, j, '|');
			else if(i == 0 || i == row*2+2) mvaddch(i, j, '#');
		}
	}
}


void Constellation::setStar(int y, int x, char symbol){
	constellation[y][x] = symbol;
}

void Constellation::setInformationsAboutConstellation(string constellationName, int xOnStarMap, int yOnStarMap, string mainStarName, int RAh, int RAm, int Dec){
	this->xOnStarMap = xOnStarMap;
	this->yOnStarMap = yOnStarMap;
	this->name = constellationName;
	this->mainStarName = mainStarName;
	this->RAh = RAh;
	this->RAm = RAm;
	this->Dec = Dec;
}

int Constellation::getX(){
	return xOnStarMap;
}

int Constellation::getY(){
	return yOnStarMap;
}

string Constellation::getName(){
	return name;
}

string Constellation::getMainStarName(){
	return mainStarName;
}

int Constellation::getRAh(){
	return RAh;
}

int Constellation::getRAm(){
	return RAm;
}

int Constellation::getDec(){
	return Dec;
}
