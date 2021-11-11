#include <stdio.h>
int main1()
{
	int Num1,Num2,Num3;
	Num1=10;
	Num2=7;

	Num3 = Num1+3;
	printf("%d\n", Num3);

	Num3 = Num2+10;
	printf("%d\n", Num3);

	double b = 5/2;
	printf("%f\n", b);
	printf("%f\n", 5.0/2);
}

int main2()
{
	int width=2, lengh=4,num;
	float f = 1.5f;
	num = (int)(width/f)*(int)(lengh/f);
	float a = 38.5f;
	int j = (int)a;
	printf("%d\n", j+1);
	printf("%d",num);

}

int main3()
{
	int V1 = 0/3600,V2 = 100000/3600;
	float t = 8.7f;
	double a;
	a = (V2-V1)/t;
	printf("%f\n", a);
}

int main4()
{
	int i1 = 3;
	int i2 = 3;

	int ibefore,ilast;
	int ibefore_,ilast_;

	ibefore = ++i1;
	ilast = i2++;

	printf("++++\n");
	printf("i1 %d\n", i1);
	printf("i2 %d\n", i2);
	printf("ibefore %d\n", ibefore);
	printf("ilast %d\n", ilast);

	i1 = 3;
	i2 = 3;

	ibefore_ = --i1;
	ilast_ = i2--;

	printf("-----\n");
	printf("i1 %d\n", i1);
	printf("i2 %d\n", i2);
	printf("ibefore %d\n", ibefore_);
	printf("ilast %d\n", ilast_);
}


int main5()
{
	int money;
	printf("有多少钱 :\n");
	scanf("%d",&money);
	if (money>=3)
		printf("可以buy\n");
	if (money<3)
		printf("不可以buy\n");
}

int main6()
{
	float height;
	int age;
	printf("height ,age\n");
	scanf("%d %f",&age,&height);
	if (age>=25 && height>=1.7)
	{
		printf("Yes\n");
	}
	if (!age)
		printf("0");
	if (age||height)
		printf("%f\n",height);
}

int main7()
{
	int iV1,iV2,iV3,iR;
	iV1=10;
	iV2=43;
	iV3=26;
	iR=0;
	iR = iV1++,--iV2,iV3+4; /*第一个表达式结果给iR*/
	printf("%d\n",iR);
	iR=(iV1++,--iV2,iV3+4); /*计算后面一个表达式*/
	printf("%d\n", iR);
}

int main8()
{
	int x=3,y=3,z=1;
	printf("%d,%d,%d\n",(++x,y++),z+x+y+2 ,1);
}

int main()
{
	int iV;
	iV=7;
	iV+= iV*= iV/= iV-5; /*7/2=3 3x3=9 9+9=18*/
	printf("%d\n",iV);
}