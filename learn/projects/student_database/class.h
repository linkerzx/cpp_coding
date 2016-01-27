#ifndef STUDENT
#define STUDENT
#include "student.h"
#endif

#ifndef TEACHER
#define TEACHER
#include "teacher.h"
#endif

#ifndef CLASSROOM
#define CLASSROOM

class classroom {
private:
	teacher* _teacher;
	student** _students;
	std::string _subject;
	int _student_count;
	const int _max_class_size = 128;
public:
	classroom(teacher* thisTeacher, std::string suject);
	student* register_student(student* thisStudent);
	void listStudent();
};

#endif
