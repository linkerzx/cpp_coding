#include <cstddef>
#include <iostream>
#include <string>
#include "teacher.h"

using namespace std;

teacher::teacher(int id, std::string firstname, std::string lastname): _id(id), _firstname(firstname),_lastname(lastname) {};
std::string teacher::getFirstName(){return _firstname;};
std::string teacher::getLastName(){return _lastname;};

