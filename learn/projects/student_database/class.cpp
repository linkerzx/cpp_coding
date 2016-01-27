#include <cstddef>
#include <string>
#include <iostream>
#include "teacher.h"
#include "student.h"
#include "class.h"

using namespace std;

classroom::classroom(teacher* thisTeacher, std::string subject) {
	_subject = subject; 
	_teacher = thisTeacher;
	_students = new student*[_max_class_size];
	for(int i = 0;i<_max_class_size;i++){
		_students[i] = NULL;	
	}
	_student_count = 0;
}

student* classroom::register_student(student* thisStudent)
{
	if(_student_count >= _max_class_size)
		return NULL;	
	int i = 0;
	while(i < _max_class_size && _students[i] != NULL)
		i++;
	if(_students[i] == NULL) 
		_students[i] = thisStudent;	
	_student_count++;	
	return _students[i] == NULL? _students[i]: NULL;
}

void classroom::listStudent(){
	for(int i = 0;i<_max_class_size;i++){
		if(_students[i] != NULL){
			cout << _students[i]->getFirstName() << " - " << 
			 _students[i]->getLastName() << endl;
		}
	}
}




