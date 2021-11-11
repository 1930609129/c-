#include "stdio.h"
#include <string.h>

struct bus
{
	char name[64];
};

struct subway
{
	char name[64];
	int num;
}sub;

union Transportation
{
	struct bus p;
	struct subway c;
};

int main1()
{
	union Transportation t;
	printf("%d\n",sizeof(t));
	printf("%d\n", sizeof(sub));

	strcpy(t.p.name,"bus");
	strcpy(t.c.name,"subway");
	printf("%s\n",t.p.name);
	printf("%s\n",t.c.name);
}

union DataUnion
{
	int iInt;
	char cChar;
};

int mai2()
{
	union DataUnion Union = {97};
	printf("iInt %d\n",Union.iInt);
	printf("cChar %c\n",Union.cChar);
}

union Data
{
	struct subway c;
	int num;
}data={"subway",64}; /* {{"subway",64}} */

int main3()
{
	printf("%s\n",data.c.name);
	printf("%d\n",data.c.num);
}

enum Color{Red=1,Blue,Green} color;  /*定义枚举变量 ，并初始化*/

int main()
{
	int icolor;
	printf("1 is red 2 is blue 3 is green\n");
	printf("your number :\n");
	scanf("%d",&icolor);
	switch(icolor)
	{
		case Red:  /*枚举常量 Red 表示 1*/
			printf("Red\n");
			break;
		case Blue:  /*枚举常量 Blue 表示 2*/
			printf("Blue\n");
			break;
		case Green:  /*枚举常量 Green 表示 3*/
			printf("Green\n");
			break;
		default:
			printf("???\n");
			break;
	}
}