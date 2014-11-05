#include"students.h"
#include"sort.h"
#include<stdio.h>
#define STUDENTS_NUM (10)
int cmp_name(void *a,void *b)
{
	Student* sa = ( Student*)a;
    Student* sb = ( Student*) b;
	return strcmp((sa->name),(sb->name));
}
int main()
{
	StudentList s=GenerateStudentList(STUDENTS_NUM);
	printf("Before sorting\n");
	PrintStudentList(s);
	qsort((void**)s.students,0,STUDENTS_NUM-1,cmp_name);
	printf("After sorting\n");
	PrintStudentList(s);
	return 0;
}