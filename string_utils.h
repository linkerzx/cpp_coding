#ifndef STRING_UTILS_H
#define STRING_UTILS_H

typedef std::vector<std::string> vstring;
using namespace std;

enum fileformat {
	CSV,
	TAB_DELIMITED
};

vstring split_string(string &input_string, const char delim);
string join(const vstring& vec, const char* delim);
const char get_delimiter(fileformat ff);
#endif

