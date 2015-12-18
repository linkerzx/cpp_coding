#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include "list_menu.h"

typedef std::vector<std::string> vstring;
using namespace std;

vstring split_string(string &input_string)
{
        vstring result;
        stringstream input_stream(input_string);
        string input_item;
        while(getline(input_stream, input_item, '-'))
        {
                result.push_back(input_item);
        };
	return result;
}

string join(const vector<string>& vec, const char* delim)
{
    stringstream res;
    copy(vec.begin(), vec.end(), ostream_iterator<string>(res, delim));
    return res.str();
}

void parse_args(string &input_string)
{
	vstring result = split_string(input_string);
	for(string str: result){
		cout << str << endl;
	};
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
