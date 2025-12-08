#include <vector>
#include <string>
using namespace std;

class Constellation{
	string name, mainStarName;
	int row, col, constellationMod;
	int yOnStarMap, xOnStarMap, RAh, RAm, Dec;
public:
	bool show;

	vector<vector<char>> constellation;
	
	void buildDefaultConstellation();

	void buildConstellation();

	void setStar(int y, int x, char symbol);

	void showConstellation();

	void showBorder();

	void setInformationsAboutConstellation(string constellationName, int xOnStarMap, int yOnStarMap, string mainStarName, int RAh, int RAm, int Dec);

	int getX();

	int getY();

	string getName();

	string getMainStarName();

	int getRAh();

	int getRAm();

	int getDec();
};	
