#ifndef SCHOOL
#define SCHOOL
#include "student.h"
#include "teacher.h"
#include "class.h"

using namespace std;

class school {
private:
	string _name;
	vector<student*> _students;
	vector<teacher*> _teachers;
	vector<classroom*> _classrooms;
public:
	school(string name);
	void register_student(student* thisStudent);
	void register_teacher(teacher* thisTeacher);
	void register_class(classroom* thisClass);
	void printListStudents();
};

#endif
