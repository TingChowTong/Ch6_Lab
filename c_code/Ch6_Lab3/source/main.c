#include <stdio.h>
#include <stdlib.h>

typedef struct _student
{
	char num[7];
	char clas[20];
	char name[20];
	int score[3];
}student;

void sub(student *p);

void main(void)
{


	int i;
	student stu[3] = { {"970101","EE1J","WONG XIAO MING",61,71,81},
					    {"970102","EE1J","LEE ZHON XIONG",92,82,72},
					    {"970103","EE1J","ZHANG DA CHENG",73,63,83} };

	student *ps;
	ps = stu;
	printf("\n");
	printf("======================================================\n");
	printf("Number Class    Name                CN    EN   MATH\n");
	printf("======================================================\n");
	for (i = 0; i <= 2; i++)
	{
		printf("%6s %-10s %-8s  %4d  %4d  %4d\n", (ps + i)->num, (ps + i)->clas, (ps + i)->name, (ps + i)->score[0], (ps + i)->score[1], (ps + i)->score[2]);
	}
	printf(" Calling previous function\n\n");
	sub(ps);
	printf("\n after calling previous function\n");
	for (i = 0; i <= 2; i++)
	{
		printf("%6s %-10s %-8s  %4d  %4d  %4d\n", (ps + i)->num, (ps + i)->clas, (ps + i)->name, (ps + i)->score[0], (ps + i)->score[1], (ps + i)->score[2]);

	}
	printf("\n");
	system("pause");
}

void sub(student *p)
{
	int i;
	for (i = 0; i <= 2; i++)
	{
		(p + i)->score[0] += 10;
		(p + i)->score[1] += 10;
		(p + i)->score[2] += 10;
	}
}
