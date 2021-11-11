#include <stdio.h>

struct date
{
	int year;
	int month;
	int day;
};

struct student
{
	int num;
	char name[30];
	char sex;
	int age;
	struct date birthday;
}student1,student2;

int main1()
{
	student1.birthday.year=10;
	printf("%d\n",student1.birthday.year);
}

#include <string.h>

struct Teacher
{
	char name[64];
	int age;
	int seniority;
};

int main2()
{
	struct Teacher a_teacher;
	strcpy(a_teacher.name,"Teacher1");
	a_teacher.age=35;
	a_teacher.seniority=10;
	printf("name :%s,age :%d,seniority:%d\n", a_teacher.name,a_teacher.age,a_teacher.seniority);
}

struct Student
{
	char cName[20];
	char cSex;
	int iGrade;
}student_1={"Ximing",'N',30};

int main3()
{
	struct Student student2 ={"xihong",'M',39};
	printf("The one name:%s,cSex:%c age:%d\n",student_1.cName,student_1.cSex,student_1.iGrade);
	printf("The two name:%s,cSex:%c age:%d\n",student2.cName,student2.cSex,student2.iGrade);
}

struct stu
{
	int num[3];
}stu_1[]={{3,4,6},
		{4,5,6}};

struct goods
{
	char cName[20];
	int num;
}goods[3]={{"fish",20},
			{"cat",30},
			{"dog",50}};

int main4()
{
	int i;
	for(i=0;i<3;i++)
	{
		printf("good:%s,price:%d\n",goods[i].cName,goods[i].num);
	}
}

struct People
{
	char cName[20];
	int num;
	char cS[20];
}people={"daming",20,"H5"};

int main5()
{
	struct People *pStruct;
	pStruct=&people;
	printf("name:%s,num:%d,cS:%s\n",(*pStruct).cName,(*pStruct).num,(*pStruct).cS);
}

struct Ticket
{
	char cName[20];
	int num;
	char S[20];
	char cAddress[20];
	char c[20];
}ticket;

int main6()
{
	struct Ticket *pStruct;
	pStruct=&ticket;
	strcpy(pStruct->cName,"daming");
	pStruct->num=285;
	strcpy(pStruct->S,"beijing-maoming");
	strcpy(pStruct->cAddress,"D20");
	strcpy(pStruct->c,"2021--10");
	printf("name:%s,num:%d,S:%s,cAddress:%s,c:%s\n",
		ticket.cName,ticket.num,ticket.S,ticket.cAddress,ticket.c);
}


struct Student_1
{
	char cName[20];
	char cSex;
	int iGrade;
}student[3]={{"Ximing",'N',30},
			{"xiaohong",'M',20},
			{"xihong",'N',39}};

int main7()
{
	struct Student_1 *pStruct;
	int index;
	pStruct=student;
	for(index=0;index<3;index++,pStruct++)
	{
		printf("name:%s,cSex:%c,iGrade:%d\n",pStruct->cName,pStruct->cSex,pStruct->iGrade);
	}
	pStruct=&student[2];
	printf("name:%s,cSex:%c,iGrade:%d\n",pStruct->cName,pStruct->cSex,pStruct->iGrade);
}

struct Student_2
{
	char cName[20];
	float fScore[3];
}student_2={"Daming",98.5f,89.0,93.5f};

void Display(struct Student_2 stu) /*形参为结构体变量*/
{
	printf("name:%s,china:%.2f,math:%.2f,en:%.2f\n",stu.cName,stu.fScore[0],stu.fScore[1],stu.fScore[2]);
	printf("avg:%.2f\n",(stu.fScore[0]+stu.fScore[1]+stu.fScore[2])/3);
}

int main8()
{
	Display(student_2);
}

void Display_1(struct Student_2 *stu) /*形参为结构体变量*/
{
	printf("name:%s\n",stu->cName);
	printf("en:%.2f\n", stu->fScore[2]);
	stu->fScore[2]=90.0f;
}

int main9()
{
	struct Student_2 *pStruct=&student_2;
	Display_1(pStruct);
	printf("out en %.2f\n",(*pStruct).fScore[2]);
}

struct in
{
	char in1[10];
	char in2[10];
	char in3[10];
};

struct out
{
	char out1[30];
	char out2[30];
	char out3[30];
	struct in ware;
}computer={"power supply","Chassis","monitor",{"CPU","BIOS","GPU"}};

int main()
{
	printf("out \n");
	printf(" (1) %s\n",computer.out1);
	printf(" (2) %s\n",computer.out2);
	printf(" (3) %s\n",computer.out3);
	printf("in \n");
	printf(" (1) %s\n",computer.ware.in1);
	printf(" (2) %s\n",computer.ware.in2);
	printf(" (3) %s\n",computer.ware.in3);
}


