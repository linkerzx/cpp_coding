#ifndef MENU
#define MENU 
#include <map>

using namespace std;

class menu {
private:
	map<int, string> _menu;
	map<int, map<int, string>> _submenu;
public: 
	menu();
	void printMenu();
	void printSubMenu();
};

#endif 
