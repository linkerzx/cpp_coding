#include <cstddef>
#include <iostream>
#include <string>
#include "student.h"

 
student::student(int id, std::string firstname, std::string lastname): _id(id), _firstname(firstname),_lastname(lastname){
};

std::string student::getFirstName() {
	return _firstname;
}

std::string student::getLastName() {
	return _lastname;
}

std::string student::getAddress(){
	return _address;
}

int student::getId(){
	return _id;
}

