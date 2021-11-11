#include <stdio.h>
int e=10;

extern void GetAngle(int a,int b,int c)
{
	float a1=0,b1=0,c1=0;
	a1 = (float)180*a/(a+b+c);
	b1 = (float)180*b/(a+b+c);
	c1 = (float)180*c/(a+b+c);
	printf("%.1f,%.1f,%.1f\n",a1,b1,c1);
}