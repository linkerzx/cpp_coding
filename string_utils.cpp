#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include "string_utils.h"

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

const char get_delimiter(fileformat ff) {
	switch(ff){
		case CSV:
			return ',';
		case TAB_DELIMITED:
			return '	';
		break;
	}

};