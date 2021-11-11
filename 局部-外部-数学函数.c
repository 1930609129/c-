#include <stdio.h>

int main1()
{
	int num1=1;
	printf("%d\n",num1);
	if(num1>0)
	{
		int num1=2;
		printf("%d\n",num1);
		if(num1>0)
		{
			int num1=3;
			printf("%d\n",num1);
		}
		printf("%d\n",num1);
	}
	printf("%d\n",num1);
}

int iGlobalPrice=100;
void Store1Price();
void Store2Price();
void Store3Price();
void ChangePrice();

int main2()
{
	printf("original price:%d\n",iGlobalPrice);
	Store1Price();
	Store2Price();
	Store3Price();

	ChangePrice();
	printf("Revise price %d\n", iGlobalPrice);
	Store1Price();
	Store2Price();
	Store3Price();
	return 0;
}

void Store1Price()
{
	printf("1 hao price %d\n",iGlobalPrice);
}

void Store2Price()
{
	printf("2 hao price %d\n",iGlobalPrice);
}

void Store3Price()
{
	printf("3 hao price %d\n",iGlobalPrice);
}

void ChangePrice()
{
	printf("Revise price?:");
	scanf("%d",&iGlobalPrice);
}

#include <math.h>
#define PI 3.14159265

int main3()
{
	int abs_num;
	int num=-12;
	abs_num = abs(num);

	long abs_lnum;
	long lnum = -12345L;
	abs_lnum = labs(lnum);

	double abs_fnum;
	double fnum=-1229.0;
	abs_fnum = fabs(fnum);

	int age1;
	int age2;
	int differ,abs_age;

	printf("please age \n");
	scanf("%d,%d",&age1,&age2);
	differ = age1-age2;
	abs_age = abs(differ);
	printf("%d\n",abs_age);
}

int main()
{
	double fresultTan;
	fresultTan = tan( 45*PI /180);
	printf("tan is %f\n", fresultTan);
}