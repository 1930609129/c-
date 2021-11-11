#include <stdio.h>

void main1()
{
	unsigned result;
	int age1,age2;
	printf("the 1 age1:\n");
	scanf("%d",&age1);
	printf("the 2 age2:\n");
	scanf("%d",&age2);
	printf("age1=%d age2=%d\n",age1,age2);
	result = age1&age2;  /* 位运算 对应的两个二进位均为1时 结果为1 否则为0 */
	printf("\n age1&age2=%u \n",result);
}

int main2()
{
	int a=0xEFCA,result;
	result = a|a; /* 位运算 对应的两个二进位有一个为1 结果为1 */
	printf("a|a=  %X \n",result);
}

int main3()
{
	unsigned result;
	int a;
	printf("please input a :\n");
	scanf("%d",&a);
	printf("a=%d\n",a);
	result=~a;  /* 位运算1时为0 0时为1 取反 */
	printf("\n~a=\n",a);
}

int main4()
{
	unsigned result;
	int a,b;
	printf("please input a :\n");
	scanf("%d",&a);
	printf("please input b :\n");
	scanf("%d",&b);
	printf("a=%d,b=%d\n",a,b);
	result = a^b; /* 对应两位二进位数相异时结果为1 否则为0 */
	printf("\n a^b = %u \n",result);
}

int main5()
{
	int x=15;
	x=x<<2;
	printf("left 2 out: %d\n",x); /* 左移2位 15x2x2 */
	x=x<<3;
	printf("out left 3 out: %d\n",x);
}

int main6()
{
	int x=30,y=-30;
	x=x>>3;
	y=y>>3;

	printf("x right 3 out y right 3 out %d,%d\n",x,y);

	x=x>>2;
	y=y>>2;

	printf("out x right 2 out  out y right 2 out %d,%d\n",x,y);
}

unsigned left(unsigned value ,int n)
{
	unsigned z;
	z=(value>>(32-n)|(value<<n));
	return z;
}

int main7()
{
	unsigned a;
	int n;
	printf("please one num\n");
	scanf("%o",&a);
	printf("please Displacement :\n");
	scanf("%d",&n);
	printf("cycle left out %o\n",left(a,n));
}

unsigned right(unsigned value ,int n)
{
	unsigned x,y,z;

	x=value<<(32-n);
	y=(value>>n);

	z=(x|y);
	return z;
}

int main8()
{
	unsigned a;
	int n;
	printf("please one num\n");
	scanf("%o",&a);
	printf("please Displacement :\n");
	scanf("%d",&n);
	printf("cycle left out %o\n",right(a,n));
}



/* 位段 */
struct status
{
	unsigned sign:1;
	// /* 类型 变量名 长度为位 */
	unsigned zero:1;
	unsigned carry:1;
	unsigned parity:1;
	unsigned a:4;
}data;

int main()
{
	printf("%d",sizeof(data));
}