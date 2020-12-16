#include<string>
using namespace std;

class Console {
	static int getInt(string in);
public:
	static int getMainMenu(int nMenus);
	static int getFacilityMenu(int nFacilitys);
	static string getName();
	static int getRoomNo();
	static void print(string);
};
