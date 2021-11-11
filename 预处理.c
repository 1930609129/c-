#include <stdio.h>
#define TEST "this is test\n"
#define MIX(a,b) ((a)*(b)+(b))
#define MAX_SIZE 100

int main1()
{
	printf(TEST);
	#undef TEST /*终止作用域*/
	char array[MAX_SIZE];
	int x=5,y=9;
	printf("x,y:\n");
	printf("%d,%d\n",x,y);
	printf("%d\n",MIX(x,y));
}

#include "age.h"

int main2()
{
	int age=3,a=1,b=1,z=0;
	age = A;
	P("age is "D" old\n",age);
	z = B;
	P("a+b="D"",z);
}

#define NUM 50

int main3()
{
	int i=0;
	#if NUM>50
		i++;
	#endif

	#if NUM==50
		i=i+50;
	#endif

	#if NUM<50
		i--;
	#endif
	printf("i is %d\n",i);
}

#define iInput 19054

int main4()
{
	printf("now is a: %d\n",iInput);
	#if iInput>0
		if(iInput % 9527 == 0 && iInput % 2 == 0)
			printf("can be 9527 even\n");
	#else
		#if iInput<0
			printf("now is - %d\n",iInput);
		#else
			printf(" order %d\n", iInput);
		#endif
	#endif
}

int main5()
{
	int i=0;
	#if NUM>50
		i++;
	#elif NUM==50
		i=i+50;
	#else
		i--;
	#endif
	printf("i is %d\n",i);
}

#define STR "100"

int main6()
{
	#ifdef STR
		printf(STR);
	#endif
	printf("\n");
	#ifndef ABC
		printf("NOT\n");
	#endif
}

#line 100 "2.c"

int main()
{
	printf("%d\n",__LINE__);
	printf("%s\n",__FILE__);
}