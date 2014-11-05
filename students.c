#include<math.h>
#include<stdlib.h>
#include<stdio.h>
#include"students.h"

#define RANDOM_NAME     ((Names())[rand()%5])
#define RANDOM_DOUBLE(max) (double)max*((double)rand()/(double)RAND_MAX)
#define RANDOM_INT(max) (rand()%max)

char** Names()
{
	static char** names=0;
	if(names==0)
	{
		names=(char**)malloc(5*sizeof(char*));
		names[0]="Emily";
		names[1]="Sam";
		names[2]="Nancy";
		names[3]="Rose";
		names[4]="Charlie";
	}
	return names;
}
Student* GenerateRandomStudent()
{
	Student* s=(Student*)malloc(sizeof(Student));
	s->name=RANDOM_NAME;
	s->id=RANDOM_INT(1000);
	s->gpa=RANDOM_DOUBLE(4.0);
	return s;
}
void PrintStudent(Student* s)
{
	printf("%-10s",s->name);
	printf("%-10d",s->id);
	printf("%-10.2f\n",s->gpa);
}
StudentList GenerateStudentList(int studentnum)
{
	Student** sl=(Student**)malloc(sizeof(Student*)*studentnum);
	int i;
	for(i=0;i<studentnum;i++)
	{
		sl[i]=GenerateRandomStudent();
	}

	StudentList sls;
	sls.students=sl;
	sls.num=studentnum;
	return sls;
}

void PrintStudentList(StudentList sl)
{
	int i;
	printf("----------------\n");
	printf("%-10s","name");
	printf("%-10s","id");
	printf("%-10s\n","gpa");
	for(i=0;i<sl.num;i++)
	{
		PrintStudent(sl.students[i]);
	}
	printf("----------------\n");
}

