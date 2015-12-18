#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include "list_menu.h"
#include "string_utils.h"

using namespace std;

vector<vstring> parse_args(string &input_string)
{
	vstring result = split_string(input_string, '-');
	vector<vstring> vresult; 
	for(string str: result){
		vstring tmp_result = split_string(str, ' ');
		vresult.push_back(tmp_result);
		//cout << str << endl;
	};
	return vresult; 
};

int  main(int argc, char* argv[])
{
	if(argc == 1){
		list_menu test;
		test.get_list_menu();	

	}
	else {
		vstring arguments(argv, argv + argc);
		string x = join(arguments, " ");
		parse_args(x);
	};
	return 0;
}
