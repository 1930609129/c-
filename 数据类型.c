#include <stdio.h>
#define HOUR 365*24

void number()
{
	int a=45e-2; /*45x10^-2 0.45*/
	float f=1.23e2F; /*单精度*/
	long double ld = 5.423e-1L; /*长双精度*/
	double d = 1.23e2; /*默认双精度*/
}


int main1()
{
	int iResult=0;
	int i;
	printf("1加到100的结果 ：");
	for(i=1;i<=100;i++){
		iResult+=i;
	}
	printf("%d\n",iResult);
	return 0;
}

 void main2()
 {
 	int h,result;
 	printf("输入小时：");
 	scanf("%d",&h);
 	result=h/(HOUR);
 	printf("有%d\n",result );
 }

void main3()
{
	putchar('(');
	putchar('-');
	putchar('(');
	putchar('o');
	putchar('o');
	putchar(')');
	putchar('-');
	putchar(')');
}

void main4()
{
	signed int i,j; /*有符合基本整型*/
	unsigned d; /*无符号*/
	short s; /*有符合短整型*/
	unsigned short us; /*无符号短整型*/
	long iL; /*有符合长整型*/
	unsigned long iU; /*无符合长整型*/
	float fF; /*单精度*/
	float f1;
	double db; /*双精度*/
	long double fL; /*长双精度*/
	i = -200;  /*先定义变量再赋值*/
	j = 200;
	iL = 33L;
	iU = 30L;
	fF = 3.14f;
	f1 = 1000+0.0295*100;
	fL = 46;
	printf("%f\n", fL);
}

void main5()
{
	char Char1;
	char Char2;
	Char1 = 'a';
	Char2=97;
	printf("%c,%d\n", Char1,Char2);
}

void Addone()
{
	auto int a=1; /*auto 可以省略不写 默认是auto*/
	a++;
	printf("%d\n", a);
}

int main6()
{
	printf("第一次调用:" );
	Addone();  /*打印 2 调用结束释放*/
	printf("第二次调用：");
	Addone();	/*打印 2*/
}

void clik()
{
	static int sum = 0; /*static 整型变量*/
	sum++;
	printf("%d\n",sum);
}

int main7()
{
	clik(); /*static 始终保存上一次执行时的作用 1*/ 
	clik();	/*2*/
	clik(); /*3*/
}

int main8()
{
	register int a; /*寄存器整型变量 某个需要频繁访问的局部变量*/
	a = 100;
	printf("%d\n", a);
}

int main9()
{
	extern int e;  /*声明外部变量*/
	printf("%d\n", e);
}

int main10()
{
	int i1=10;
	int i2=6;
	char char1='a'; /*ASCll码值 97*/
	float f1=1.5f;
	double result = (i1+char1)-f1+f1*i2;
	printf("%f\n", result);
}

int main()
{
	int a=45e2;
	float f = 1.234e2F;
	printf("%f\n",f);
	printf("%d\n",a);
	return 0;
}