#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include "string_utils.h"

using namespace std;

string row_processor(string &str_input, fileformat ff, int column_number)
{
	// converts the row to a vector string by delimiter
	vstring str_proc = split_string(str_input, get_delimiter(ff));
	if(str_proc.size() >= column_number){
		return str_proc[column_number];
	}
	return "0";
};

int main() 
{
	ifstream inf("sample_input.csv");
	if(!inf){ cerr << "Can't Open a dumb file as input" << endl; exit(1);}
	ofstream outf("sample_output.dat");
	if(!outf){
		cerr << "Help Me God, I can't open a simple file" << endl;
		exit(1);
	};
	int i = 0;
	double number = 0 ; 
	while(!inf.eof()){
		string str_sample_input; 
		getline(inf, str_sample_input);
		cout << str_sample_input << endl;
		if(i > 0) {
			number += stod(row_processor(str_sample_input, CSV, 2));
		}
		i++;
		outf << number << endl;
	};

	return 0;	
}

