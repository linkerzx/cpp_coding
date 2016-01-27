#include <cstddef>
#include <iostream>
#include <vector>
#include <string>
#include "teacher.h"
#include "student.h"
#include "class.h"
#include "school.h"

int main(){
	school mySchool("ok");
        teacher T(1,"Mr", "T");
        student* Ad = new student(1, "Ad", "T");
        student* St = new student(2, "St", "K");
        classroom English101(&T, "English");
        English101.register_student(Ad);
        English101.register_student(St);
	mySchool.register_student(Ad);
        English101.listStudent();
	mySchool.printListStudents();
        return 0;
}
