#include <cstddef>
#include <iostream>
#include <vector>
#include "teacher.h"
#include "student.h"
#include "class.h"
#include "school.h"

using namespace std;
school::school(string name): _name(name) {
}

void school::register_student(student* thisStudent) {
	_students.push_back(thisStudent);
}

void school::register_teacher(teacher* thisTeacher) {
	_teachers.push_back(thisTeacher);
}

void school::register_class(classroom* thisClass) {
	_classrooms.push_back(thisClass);
}

void school::printListStudents() {
	cout << "List of Students at "<< _name << ": " << endl;	
	for(student* thisStudent: _students) {
		cout << thisStudent->getFirstName() << endl;
	}
}



