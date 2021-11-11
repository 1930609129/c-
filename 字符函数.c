#include <stdio.h>
#include <ctype.h>

void SwitchShow(char c);

int main1()
{
	char cCharPut;
	char cCharTemp;

	printf("please enter 1 :");
	scanf("%c",&cCharPut);
	SwitchShow(cCharPut);
	cCharTemp = getchar(); /*接收回车符*/

	printf("please enter 2 :");
	scanf("%c",&cCharPut);
	SwitchShow(cCharPut);
	cCharTemp = getchar();

	printf("please enter 3 :");
	scanf("%c",&cCharPut);
	SwitchShow(cCharPut);

}

void SwitchShow(char cChar)
{
	if(isalpha(cChar))  /*判断是否为字母*/
	{
		printf("your enter is letter %c\n",cChar);
	}

	if(isdigit(cChar)) /*判断是否为数字*/
	{
		printf("your enter number %d\n",cChar);
	}

	if(isalnum(cChar)) /*判断是否为字母或数字*/
	{
		printf("your enter is letter or number %c\n",cChar);
	}
	else
	{
		printf("not letter and number %c\n",cChar);
	}
}

#include <string.h>

int main2()
{
	char str1[30],str2[30];
	printf("enter str :\n");
	gets(str1);
	printf("enter str\n");
	gets(str2);

	printf("out str\n");
	puts(str1);
	printf("out str\n");
	puts(str2);

	strcpy(str1,str2);
	printf("copy 2 in 1 out\n");
	puts(str1);
}

int main3()
{
	char str1[30],str2[30];
	printf("enter dir:\n");
	gets(str1);
	printf("enter file name:\n");
	gets(str2);

	printf("out dir:\n");
	puts(str1);
	printf("out file name\n");
	puts(str2);
	strcat(str1,str2);
	printf("dir+file name\n");
	puts(str1);
}

int main4()
{
	char password[20]={"574824"};
	char pwstr[20];
	int i=1;
	while(i<=3)
	{
		printf("password is str \n");
		gets(pwstr);
		if(strcmp(password,pwstr)) /* strcmp如果相等返回0 字符串1>字符串2 返回正数 否则返回负数*/
		{
			printf("this is a %d ,the password is error\n",i);
		}
		else
		{
			printf("password is True\n");
			break;
		}
		i++;
	}
	if(i==4)
	{
		printf("Human services\n");
	}
}

int main5()
{
	char text[20]="ZHong is A grils",change[20];
	printf("original is %s\n", text);
	strcpy(change,text);
	strlwr(change);
	printf("this is small %s\n",change);
	strupr(change);
	printf("this is big %s\n",change);
}

int main()
{
	char text[50];
	printf("enter password :\n");
	scanf("%s",&text);
	if(strlen(text)==6)
	{
		printf("the password is 6\n");
	}
	else{
		printf("the password not 6\n");
	}
}