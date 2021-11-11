#include <stdio.h>
void CEO();
void Manager();
void AssistantManager();
void Clerk();
void DisplayNames(char** cNameArray);
extern void GetAngle(int a,int b,int c);
char* cNames[]=
{
	"Ximang",
	"jim",
	"end"
};

int main1()
{
	CEO();
}

void CEO()
{
	printf("CEO to Manager\n");
	Manager();
}

void Manager()
{
	printf("Manager to AssistantManager\n");
	AssistantManager();
}

void AssistantManager()
{
	printf("AssistantManager to Clerk\n");
	Clerk();
}

void Clerk()
{
	printf("Clerk is run\n");
}


int main2()
{
	DisplayNames(cNames);
	return 0;
}

void DisplayNames(char** cNameArray)
{
	if(*cNameArray=="end")
	{
		return;
	}
	else
	{
		DisplayNames(cNameArray+1);
		printf("%s\n",*cNameArray);
	}
}

static char* GetString(char* pString)
{
	return pString;
}
static void ShowString(char* pString)
{
	printf("%s\n", pString);
}

int main3()
{
	char* pMyString;
	pMyString = GetString("Hello World");
	ShowString(pMyString);
}

int main()
{
	GetAngle(1,1,1);
}