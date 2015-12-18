#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <tgmath.h>
#include "string_utils.h"

using namespace std;

vstring row_processor(string &str_input, fileformat ff)
{
	// converts the row to a vector string by delimiter
	vstring str_proc = split_string(str_input, get_delimiter(ff));
	return str_proc;
};

class data_file {
	public: 
		string path; 
		fileformat ff;
		bool has_header; 
		vstring header;
	private: 	
	data_file(){
		//contructor 
	};
};

// add a function generation for the data file class
// add a sum/fn(x) on column operation for multiple columns at the same time
// add a sorting operation

int main() 
{
	ifstream inf("sample_input.csv");
	if(!inf){ cerr << "Can't Open a dumb file as input" << endl; exit(1);}
	ofstream outf("sample_output.dat");
	if(!outf){
		cerr << "Help Me God, I can't open a simple file" << endl;
		exit(1);
	};
	int row_count = 0;
	double sum = 0, sum_squared =0; 
	outf << 
		"row_count" << get_delimiter(CSV) << 
		"sum" << get_delimiter(CSV) << 
		"sum_squared" << 
	endl;
	while(!inf.eof()){
		string str_sample_input; 
		getline(inf, str_sample_input);
		cout << str_sample_input << endl;
		if(row_count > 0) {
			double row_result = stod(row_processor(str_sample_input, CSV)[2]);
			sum += row_result;
			sum_squared += pow(row_result, 2);
		}
		row_count++;
		outf << 
			row_count << get_delimiter(CSV) << 
			sum << get_delimiter(CSV) << 
			sum_squared <<  
		endl;
	};

	return 0;	
}

