#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include "string_utils.h"

using namespace std;

double row_processor(string &str_input, fileformat ff, double number)
{
	// converts the row to a vector string by delimiter
	vstring str_proc = split_string(str_input, get_delimiter(ff));
	// operations
	// SUM of the second column
	if(str_proc.size() >= 3){
		//cout << stof(str_proc[2]) << endl;
		return number + stod(str_proc[2]);
	}
	return 0;
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
	while(inf){
		string str_sample_input; 
		getline(inf, str_sample_input);
		if(i > 0) {
			number = row_processor(str_sample_input, CSV, number);
		}
		i++;
		outf << number << endl;
	};

	return 0;	
}

