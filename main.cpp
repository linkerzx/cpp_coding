#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include "list_menu.h"

typedef std::vector<std::string> vstring;
using namespace std;

vstring split_string(string &input_string, const char delim)
{
        vstring result;
        stringstream input_stream(input_string);
        string input_item;
        while(getline(input_stream, input_item, delim))
        {
                result.push_back(input_item);
        };
	return result;
}

string join(const vstring& vec, const char* delim)
{
    stringstream res;
    copy(vec.begin(), vec.end(), ostream_iterator<string>(res, delim));
    return res.str();
}

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
