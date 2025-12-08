#include "constellation.h"
#include <string>
#include <vector>
using namespace std;

class Constellations{
public:
	const int size = 88, starMapRow = 18, starMapCol = 48, starMapMod = 1;
	int pointerX = 1, pointerY = 1;
	vector<Constellation> constellationsArray;
	Constellation blankConstellation;
	vector<string> names;

	vector<vector<char>> starMap;
	void setStarMap();
	void showStarMap();
	void showBorder();
	void controlPointer(int ch);
	void setNames();
	void makeConstellations();
};
