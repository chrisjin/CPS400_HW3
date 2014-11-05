#ifndef STUDENTS_H
#define STUDENTS_H
typedef struct Student
{
    const char* name;
    int id;
    double gpa;
}Student;

typedef struct StudentList
{
	Student** students;
	int num;
}StudentList;

StudentList GenerateStudentList(int studentnum);
void PrintStudentList(StudentList sl);

#endif