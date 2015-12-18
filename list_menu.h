#ifndef LIST_MENU_H
#define LIST_MENU_H

enum list_items 
{
	LIST_ITEM_INPUT_1,
	LIST_ITEM_INPUT_2,
	LIST_ITEM_LAST_INPUT
};

class list_menu
{
public:
        void get_list_menu();
	std::string get_list_item(list_items x);

};
#endif
