#include <iostream>
#include <string>
#include "list_menu.h"

using namespace std;

void list_menu::get_list_menu()
{
	// Ouputs the input choices
	for(int i = 0; i <= LIST_ITEM_LAST_INPUT; i++) 
	{
        	cout <<
                	i << " " << 
			get_list_item(static_cast<list_items>(i)) << 
        	endl;
	}
	// Input selection
	string list_item_input;
	cout << "SELECTION: ";
	getline(std::cin, list_item_input);
	int int_list_item_input = stoi(list_item_input);
	// Input Validation
	if(
	       	int_list_item_input >= 0 &&
       		int_list_item_input <= LIST_ITEM_LAST_INPUT
	)
	{ cout << "Good to Go\n";}
};

string list_menu::get_list_item(list_items list_item)
{
	switch(list_item){
		case LIST_ITEM_INPUT_1:
			return "test";
		case LIST_ITEM_INPUT_2:
			return "test2";
		case LIST_ITEM_LAST_INPUT:
			return "Exit";
		break;
	};
}
