#include <cstddef> 
#include <iostream> 
#include <map>
#include "menu.h"

using namespace std;

menu::menu(){
	_menu[1] = "Register Student";
	_menu[2] = "Register Teacher";
	_menu[3] = "Register Class";
	_menu[4] = "Edit Student information";

	printMenu();
}

void menu::printMenu() {
	for(auto menuItem: _menu){
		cout << menuItem.first << "-"  << menuItem.second << endl;
	}
}

void menu::printSubMenu(){

}

int main(){ 
	menu* z = new menu();
	return 0;
}
