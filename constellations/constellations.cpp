#include "constellations.h"
#include <iostream>
#include <curses.h>
#include <ncurses.h>

void Constellations::setNames(){
	vector<std::string> names = {
    "Andromeda", "Antlia", "Apus", "Aquarius", "Aquila", "Ara", "Aries", "Auriga",
    "Bootes", "Caelum", "Camelopardalis", "Cancer", "Canes Venatici", "Canis Major",
    "Canis Minor", "Capricornus", "Carina", "Cassiopeia", "Centaurus", "Cepheus",
    "Cetus", "Chamaeleon", "Circinus", "Columba", "Coma Berenices", "Corona Australis",
    "Corona Borealis", "Corvus", "Crater", "Crux", "Cygnus", "Delphinus", "Dorado",
    "Draco", "Equuleus", "Eridanus", "Fornax", "Gemini", "Grus", "Hercules",
    "Horologium", "Hydra", "Hydrus", "Indus", "Lacerta", "Leo", "Leo Minor", "Lepus",
    "Libra", "Lupus", "Lynx", "Lyra", "Mensa", "Microscopium", "Monoceros", "Musca",
    "Norma", "Octans", "Ophiuchus", "Orion", "Pavo", "Pegasus", "Perseus", "Phoenix",
    "Pictor", "Pisces", "Piscis Austrinus", "Puppis", "Pyxis", "Reticulum", "Sagitta",
    "Sagittarius", "Scorpius", "Sculptor", "Scutum", "Serpens", "Sextans", "Taurus",
    "Telescopium", "Triangulum", "Triangulum Australe", "Tucana", "Ursa Major",
    "Ursa Minor", "Vela", "Virgo", "Volans", "Vulpecula"
};
	this->names = names;
}

void Constellations::makeConstellations(){
	blankConstellation.buildDefaultConstellation();
	constellationsArray.resize(88);
	// 0. Andromeda (Alpheratz)
	constellationsArray[0].setInformationsAboutConstellation("Andromeda", 0, 6, "Alpheratz", 0, 8, 29);
	// 1. Antlia - Pompa (Alpha Antliae)
	constellationsArray[1].setInformationsAboutConstellation("Antlia", 20, 12, "Alpha Antliae", 10, 27, -31);
	// 2. Apus - Rajski Ptak (Alpha Apodis)
	constellationsArray[2].setInformationsAboutConstellation("Apus", 29, 16, "Alpha Apodis", 14, 47, -79);
	// 3. Aquarius - Wodnik (Sadalsuud)
	constellationsArray[3].setInformationsAboutConstellation("Aquarius", 43, 9, "Sadalsuud", 21, 31, -5);
	// 4. Aquila - Orzeł (Altair)
	constellationsArray[4].setInformationsAboutConstellation("Aquila", 39, 8, "Altair", 19, 50, 8);
	// 5. Ara - Ołtarz (Beta Arae)
	constellationsArray[5].setInformationsAboutConstellation("Ara", 34, 14, "Beta Arae", 17, 25, -55);
	// 6. Aries - Baran (Hamal)
	constellationsArray[6].setInformationsAboutConstellation("Aries", 4, 6, "Hamal", 2, 7, 23);
	// 7. Auriga - Woźnica (Capella)
	constellationsArray[7].setInformationsAboutConstellation("Auriga", 10, 4, "Capella", 5, 16, 45);
	// 8. Bootes - Wolarz (Arktur)
	constellationsArray[8].setInformationsAboutConstellation("Bootes", 28, 7, "Arktur", 14, 15, 19);
	// 9. Caelum - Rylec (Alpha Caeli)
	constellationsArray[9].setInformationsAboutConstellation("Caelum", 9, 13, "Alpha Caeli", 4, 40, -41);
	// 10. Camelopardalis - Żyrafa (Beta Cam)
	constellationsArray[10].setInformationsAboutConstellation("Camelopardalis", 10, 3, "Beta Cam", 5, 3, 60);
	// 11. Cancer - Rak (Altarf)
	constellationsArray[11].setInformationsAboutConstellation("Cancer", 16, 8, "Altarf", 8, 16, 9);
	// 12. Canes Venatici - Psy Gończe (Cor Caroli)
	constellationsArray[12].setInformationsAboutConstellation("Canes Venatici", 25, 5, "Cor Caroli", 12, 56, 38);
	// 13. Canis Major - Wielki Pies (Syriusz)
	constellationsArray[13].setInformationsAboutConstellation("Canis Major", 13, 10, "Syriusz", 6, 45, -16);
	// 14. Canis Minor - Mały Pies (Procjon)
	constellationsArray[14].setInformationsAboutConstellation("Canis Minor", 15, 8, "Procjon", 7, 39, 5);
	// 15. Capricornus - Koziorożec (Deneb Algedi)
	constellationsArray[15].setInformationsAboutConstellation("Capricornus", 43, 10, "Deneb Algedi", 21, 47, -16);
	// 16. Carina - Kil (Canopus)
	constellationsArray[16].setInformationsAboutConstellation("Carina", 12, 14, "Canopus", 6, 23, -52);
	// 17. Cassiopeia - Kasjopeja (Schedar)
	constellationsArray[17].setInformationsAboutConstellation("Cassiopeia", 1, 3, "Schedar", 0, 40, 56);
	// 18. Centaurus - Centaur (Rigil Kentaurus)
	constellationsArray[18].setInformationsAboutConstellation("Centaurus", 29, 15, "Alfa Centauri", 14, 39, -60);
	// 19. Cepheus - Cefeusz (Alderamin)
	constellationsArray[19].setInformationsAboutConstellation("Cepheus", 42, 2, "Alderamin", 21, 18, 62);
	// 20. Cetus - Wieloryb (Menkar)
	constellationsArray[20].setInformationsAboutConstellation("Cetus", 6, 8, "Menkar", 3, 2, 4);
	// 21. Chamaeleon - Kameleon (Alpha Cha)
	constellationsArray[21].setInformationsAboutConstellation("Chamaeleon", 22, 16, "Alpha Cha", 11, 15, -79);
	// 22. Circinus - Cyrkiel (Alpha Cir) - RĘCZNA KOREKTA (było 29, przesunięte na 30)
	constellationsArray[22].setInformationsAboutConstellation("Circinus", 30, 15, "Alpha Cir", 14, 42, -64);
	// 23. Columba - Gołąb (Phact)
	constellationsArray[23].setInformationsAboutConstellation("Columba", 11, 12, "Phact", 5, 39, -34);
	// 24. Coma Berenices - Warkocz Bereniki (Beta Com)
	constellationsArray[24].setInformationsAboutConstellation("Coma Berenices", 26, 6, "Beta Com", 13, 11, 27);
	// 25. Corona Australis - Korona Południowa (Meridiana)
	constellationsArray[25].setInformationsAboutConstellation("Corona Australis", 38, 12, "Meridiana", 19, 9, -36);
	// 26. Corona Borealis - Korona Północna (Alphecca)
	constellationsArray[26].setInformationsAboutConstellation("Corona Borealis", 31, 6, "Alphecca", 15, 34, 26);
	// 27. Corvus - Kruk (Gienah)
	constellationsArray[27].setInformationsAboutConstellation("Corvus", 24, 10, "Gienah", 12, 15, -17);
	// 28. Crater - Puchar (Labrum)
	constellationsArray[28].setInformationsAboutConstellation("Crater", 22, 10, "Labrum", 11, 19, -14);
	// 29. Crux - Krzyż Południa (Acrux)
	constellationsArray[29].setInformationsAboutConstellation("Crux", 24, 15, "Acrux", 12, 26, -63);
	// 30. Cygnus - Łabędź (Deneb)
	constellationsArray[30].setInformationsAboutConstellation("Cygnus", 41, 4, "Deneb", 20, 41, 45);
	// 31. Delphinus - Delfin (Rotanev)
	constellationsArray[31].setInformationsAboutConstellation("Delphinus", 41, 7, "Rotanev", 20, 37, 14);
	// 32. Dorado - Złota Ryba (Alpha Dor)
	constellationsArray[32].setInformationsAboutConstellation("Dorado", 9, 14, "Alpha Dor", 4, 33, -55);
	// 33. Draco - Smok (Eltanin)
	constellationsArray[33].setInformationsAboutConstellation("Draco", 35, 3, "Eltanin", 17, 56, 51);
	// 34. Equuleus - Źrebię (Kitalpha)
	constellationsArray[34].setInformationsAboutConstellation("Equuleus", 42, 8, "Kitalpha", 21, 15, 5);
	// 35. Eridanus - Erydan (Achernar)
	constellationsArray[35].setInformationsAboutConstellation("Eridanus", 3, 14, "Achernar", 1, 37, -57);
	// 36. Fornax - Piec (Alpha For)
	constellationsArray[36].setInformationsAboutConstellation("Fornax", 6, 11, "Alpha For", 3, 12, -28);
	// 37. Gemini - Bliźnięta (Polluks)
	constellationsArray[37].setInformationsAboutConstellation("Gemini", 15, 6, "Polluks", 7, 45, 28);
	// 38. Grus - Żuraw (Alnair)
	constellationsArray[38].setInformationsAboutConstellation("Grus", 44, 13, "Alnair", 22, 8, -46);
	// 39. Hercules - Herkules (Kornephoros)
	constellationsArray[39].setInformationsAboutConstellation("Hercules", 32, 6, "Kornephoros", 16, 30, 21);
	// 40. Horologium - Zegar (Alpha Hor)
	constellationsArray[40].setInformationsAboutConstellation("Horologium", 8, 13, "Alpha Hor", 4, 14, -42);
	// 41. Hydra - Hydra (Alphard)
	constellationsArray[41].setInformationsAboutConstellation("Hydra", 18, 9, "Alphard", 9, 27, -8);
	// 42. Hydrus - Wąż Wodny (Beta Hyi)
	constellationsArray[42].setInformationsAboutConstellation("Hydrus", 0, 16, "Beta Hyi", 0, 25, -77);
	// 43. Indus - Indianin (The Persian)
	constellationsArray[43].setInformationsAboutConstellation("Indus", 41, 13, "The Persian", 20, 37, -47);
	// 44. Lacerta - Jaszczurka (Alpha Lac)
	constellationsArray[44].setInformationsAboutConstellation("Lacerta", 44, 4, "Alpha Lac", 22, 31, 50);
	// 45. Leo - Lew (Regulus)
	constellationsArray[45].setInformationsAboutConstellation("Leo", 20, 7, "Regulus", 10, 8, 11);
	// 46. Leo Minor - Mały Lew (Praecipua)
	constellationsArray[46].setInformationsAboutConstellation("Leo Minor", 21, 5, "Praecipua", 10, 53, 34);
	// 47. Lepus - Zając (Arneb)
	constellationsArray[47].setInformationsAboutConstellation("Lepus", 11, 10, "Arneb", 5, 32, -17);
	// 48. Libra - Waga (Zubeneschamali)
	constellationsArray[48].setInformationsAboutConstellation("Libra", 30, 9, "Zubeneschamali", 15, 17, -9);
	// 49. Lupus - Wilk (Men)
	constellationsArray[49].setInformationsAboutConstellation("Lupus", 29, 13, "Men", 14, 41, -47);
	// 50. Lynx - Ryś (Alpha Lyn)
	constellationsArray[50].setInformationsAboutConstellation("Lynx", 18, 5, "Alpha Lyn", 9, 21, 34);
	// 51. Lyra - Lira (Wega)
	constellationsArray[51].setInformationsAboutConstellation("Lyra", 37, 5, "Wega", 18, 36, 38);
	// 52. Mensa - Góra Stołowa (Alpha Men)
	constellationsArray[52].setInformationsAboutConstellation("Mensa", 12, 16, "Alpha Men", 6, 10, -74);
	// 53. Microscopium - Mikroskop (Gamma Mic)
	constellationsArray[53].setInformationsAboutConstellation("Microscopium", 42, 12, "Gamma Mic", 21, 1, -32);
	// 54. Monoceros - Jednorożec (Beta Mon)
	constellationsArray[54].setInformationsAboutConstellation("Monoceros", 12, 9, "Beta Mon", 6, 28, -7);
	// 55. Musca - Mucha (Alpha Mus)
	constellationsArray[55].setInformationsAboutConstellation("Musca", 25, 15, "Alpha Mus", 12, 37, -69);
	// 56. Norma - Węgielnica (Gamma 2 Nor)
	constellationsArray[56].setInformationsAboutConstellation("Norma", 32, 14, "Gamma 2 Nor", 16, 19, -50);
	// 57. Octans - Oktant (Nu Octantis)
	constellationsArray[57].setInformationsAboutConstellation("Octans", 43, 16, "Nu Octantis", 21, 41, -77);
	// 58. Ophiuchus - Wężownik (Rasalhague)
	constellationsArray[58].setInformationsAboutConstellation("Ophiuchus", 35, 7, "Rasalhague", 17, 34, 12);
	// 59. Orion - Orion (Betelgeza)
	constellationsArray[59].setInformationsAboutConstellation("Orion", 11, 8, "Betelgeza", 5, 55, 7);
	// 60. Pavo - Paw (Peacock)
	constellationsArray[60].setInformationsAboutConstellation("Pavo", 40, 14, "Peacock", 20, 25, -56);
	// 61. Pegasus - Pegaz (Markab)
	constellationsArray[61].setInformationsAboutConstellation("Pegasus", 46, 7, "Markab", 23, 4, 15);
	// 62. Perseus - Perseusz (Mirfak)
	constellationsArray[62].setInformationsAboutConstellation("Perseus", 6, 4, "Mirfak", 3, 24, 49);
	// 63. Phoenix - Feniks (Ankaa)
	constellationsArray[63].setInformationsAboutConstellation("Phoenix", 0, 13, "Ankaa", 0, 26, -42);
	// 64. Pictor - Malarz (Alpha Pic)
	constellationsArray[64].setInformationsAboutConstellation("Pictor", 13, 15, "Alpha Pic", 6, 48, -61);
	// 65. Pisces - Ryby (Alpherg)
	constellationsArray[65].setInformationsAboutConstellation("Pisces", 2, 8, "Alpherg", 1, 31, 15);
	// 66. Piscis Austrinus - Ryba Południowa (Fomalhaut)
	constellationsArray[66].setInformationsAboutConstellation("Piscis Austrinus", 45, 11, "Fomalhaut", 22, 57, -29);
	// 67. Puppis - Rufa (Naos)
	constellationsArray[67].setInformationsAboutConstellation("Puppis", 16, 13, "Naos", 8, 3, -40);
	// 68. Pyxis - Kompas (Alpha Pyx)
	constellationsArray[68].setInformationsAboutConstellation("Pyxis", 17, 12, "Alpha Pyx", 8, 43, -33);
	// 69. Reticulum - Sieć (Alpha Ret)
	constellationsArray[69].setInformationsAboutConstellation("Reticulum", 8, 15, "Alpha Ret", 4, 14, -62);
	// 70. Sagitta - Strzała (Gamma Sge)
	constellationsArray[70].setInformationsAboutConstellation("Sagitta", 39, 7, "Gamma Sge", 19, 58, 19);
	// 71. Sagittarius - Strzelec (Kaus Australis)
	constellationsArray[71].setInformationsAboutConstellation("Sagittarius", 36, 12, "Kaus Australis", 18, 24, -34);
	// 72. Scorpius - Skorpion (Antares)
	constellationsArray[72].setInformationsAboutConstellation("Scorpius", 33, 11, "Antares", 16, 29, -26);
	// 73. Sculptor - Rzeźbiarz (Alpha Scl)
	constellationsArray[73].setInformationsAboutConstellation("Sculptor", 1, 11, "Alpha Scl", 0, 58, -29);
	// 74. Scutum - Tarcza (Alpha Sct)
	constellationsArray[74].setInformationsAboutConstellation("Scutum", 37, 9, "Alpha Sct", 18, 35, -8);
	// 75. Serpens - Wąż (Unukalhai)
	constellationsArray[75].setInformationsAboutConstellation("Serpens", 31, 8, "Unukalhai", 15, 44, 6);
	// 76. Sextans - Sekstant (Alpha Sex)
	constellationsArray[76].setInformationsAboutConstellation("Sextans", 20, 9, "Alpha Sex", 10, 7, -0);
	// 77. Taurus - Byk (Aldebaran)
	constellationsArray[77].setInformationsAboutConstellation("Taurus", 9, 7, "Aldebaran", 4, 35, 16);
	// 78. Telescopium - Luneta (Alpha Tel)
	constellationsArray[78].setInformationsAboutConstellation("Telescopium", 36, 13, "Alpha Tel", 18, 26, -45);
	// 79. Triangulum - Trójkąt (Beta Tri)
	constellationsArray[79].setInformationsAboutConstellation("Triangulum", 4, 5, "Beta Tri", 2, 9, 34);
	// 80. Triangulum Australe - Trójkąt Południowy (Atria)
	constellationsArray[80].setInformationsAboutConstellation("Triangulum Australe", 33, 15, "Atria", 16, 48, -69);
	// 81. Tucana - Tukan (Alpha Tuc)
	constellationsArray[81].setInformationsAboutConstellation("Tucana", 44, 15, "Alpha Tuc", 22, 18, -60);
	// 82. Ursa Major - Wielka Niedźwiedzica (Dubhe)
	constellationsArray[82].setInformationsAboutConstellation("Ursa Major", 22, 2, "Dubhe", 11, 3, 61);
	// 83. Ursa Minor - Mała Niedźwiedzica (Polaris)
	constellationsArray[83].setInformationsAboutConstellation("Ursa Minor", 5, 0, "Polaris", 2, 31, 89);
	// 84. Vela - Żagiel (Suhail)
	constellationsArray[84].setInformationsAboutConstellation("Vela", 18, 13, "Suhail", 9, 7, -47);
	// 85. Virgo - Panna (Spica)
	constellationsArray[85].setInformationsAboutConstellation("Virgo", 26, 10, "Spica", 13, 25, -11);
	// 86. Volans - Ryba Latająca (Beta Vol)
	constellationsArray[86].setInformationsAboutConstellation("Volans", 17, 15, "Beta Vol", 8, 25, -66);
	// 87. Vulpecula - Lisek (Anser)
	constellationsArray[87].setInformationsAboutConstellation("Vulpecula", 38, 6, "Anser", 19, 28, 24);
	vector<Constellation> constellationsArray(size, blankConstellation);
}

void Constellations::setStarMap(){
    starMap.assign(starMapRow, vector<char>(starMapCol, ' '));

    for(int k = 0; k < constellationsArray.size(); k++){
        int x = constellationsArray[k].getX();
        int y = constellationsArray[k].getY();

        if(x >= 0 && x < starMapCol && y >= 0 && y < starMapRow){
		starMap[y][x] = '*';
        }
    }
}

void Constellations::showStarMap(){
	clear();

	for(int i = 0; i < Constellations::starMapRow * 2; i++){
		if(i%2 == 0){
			for(int j = 0; j < Constellations::starMapCol*2; j++){
				mvaddch(i + starMapMod, j + starMapMod, ' ');
			}
     		}
		else{
			for(int j = 0; j < Constellations::starMapCol*2; j++){
				if(j%2 == 0)
				       mvaddch(i + starMapMod, j + starMapMod, ' ');
				else{
				        mvaddch(i + starMapMod, j + starMapMod, starMap[i/2][j/2]);
				}
			}
		}
	}
}

void Constellations::showBorder(){
	for(int i = 0; i < Constellations::starMapRow*2+3; i++){
		for(int j = 0; j < Constellations::starMapCol*2+3; j++){
			if(j == 0 || j == starMapCol*2+2) mvaddch(i, j, '|');
			else if(i == 0 || i == starMapRow*2+2) mvaddch(i, j, '#');
		}
	}
}

void Constellations::controlPointer(int ch){
	if(ch == 'w'){
		if(pointerY - 1 != 0)
			pointerY--; 
		else 
			pointerY = starMapRow;
	}
	else if(ch == 's'){
		if(pointerY * 2 != starMapRow*2)
			pointerY++; 
		else 
			pointerY = 1;
	}
	else if(ch == 'd'){
		if(pointerX * 2 != starMapCol*2)
			pointerX++; 
		else 
			pointerX = 1;
	}
	else if(ch == 'a'){
		if(pointerX - 1 != 0)
			pointerX--; 
		else 
			pointerX = starMapCol;
	}

	mvaddch(pointerY * 2, pointerX * 2 - 1, '-');
	mvaddch(pointerY * 2, pointerX * 2 + 1, '-');
	mvaddch(pointerY * 2 + 1, pointerX * 2, '|');
	mvaddch(pointerY * 2 - 1, pointerX * 2, '|');

	for(int i = 0; i < constellationsArray.size(); i++){
		int x = constellationsArray[i].getX();
		int y = constellationsArray[i].getY();
		if(pointerX-1 == x && pointerY-1 == y){
			string name = constellationsArray[i].getName();
			string mainStarName = constellationsArray[i].getMainStarName();
			mvprintw(0, Constellations::starMapCol*2 + 4, "Constellation: %s", name.c_str());
			mvprintw(2, Constellations::starMapCol*2 + 4, "Main star name: %s", mainStarName.c_str());
			if(constellationsArray[i].getDec() > 0)
				mvprintw(4, Constellations::starMapCol*2 + 4, "Declinacion: +%i°", constellationsArray[i].getDec());
			else
				mvprintw(4, Constellations::starMapCol*2 + 4, "Declinacion: %i°", constellationsArray[i].getDec());
			mvprintw(6, Constellations::starMapCol*2 + 4, "RA: %iʰ %iᵐ", constellationsArray[i].getRAh(), constellationsArray[i].getRAm());

			if(ch == KEY_ENTER){
				constellationsArray[i].show = !constellationsArray[i].show;
				int ch = ' ';
				while(constellationsArray[i].show){
					ch = getch();
					constellationsArray[i].showConstellation();
					constellationsArray[i].showBorder();
					if(ch == 'q') break;
					napms(25);
				}
			}
		}
	}
}
