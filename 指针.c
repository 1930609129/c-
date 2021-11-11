#include <stdio.h>

int main1()
{
	char *string = "hello";
	printf("%s\n",string);
}

void _strcopy(char *str1,char *str2);

int main2()
{
	char str1[]="hello world";
	char str2[]="";
	_strcopy(str1,str2);
	printf("copy out :%s\n", str2);
}

void _strcopy(char *str1,char *str2)
{
	while(*str1 !='\0')
	{
		*str2=*str1;
		str1++;
		str2++;
	}
	*str2='\0';
}

int main3()
{
	int i;
	char *test[]={
		"math",
		"English",
		"china"
	};

	for(i=0;i<3;i++)
	{
		printf("%s\n",test[i]);
	}
}

int main4()
{
	int i;
	char **p;
	char *element[]=
	{
		"li",
		"pe",
		"ne",
		"lu"
	};

	for(i=0;i<4;i++)
	{
		p=element+i;
		printf("%s\n",*p);
	}
}

int main5()
{
	int a[10],*p1,**p2,i,n=0;
	printf("please input :\n");
	for(i=0;i<10;i++) /* for(p1=a;p1-a<10;p1++)*/
	{
		scanf("%d",&a[i]);	/* p2=&p1; */ /* scanf("%d",*p2) */
	}
	p1=a;
	p2=&p1;

	printf("the array is:\n");
	for(i=0;i<10;i++)  /* for(p1=a;p1-a<10;p1++)*/
	{    				/* p2=&p1; */
		if(*(*p2+i)%2==0)  /* **p2%2 == 0 */
		{
			printf("%5d",*(*p2+i)); /* printf("%5d",**p2) */
			n++;
		}
	}
	printf("\n");
	printf("the number is %d\n",n);
}

void swap(int *a,int *b) /*指针变量接收地址*/
{
	int tmp;
	tmp=*a;
	*a=*b;
	*b=tmp;
}

int main6()
{
	int x,y;
	int *p_x,*p_y;
	printf("please 2 num\n");
	scanf("%d",&x);
	scanf("%d",&y);
	p_x=&x;
	p_y=&y;
	swap(p_x,p_y); /*传入地址*/
	printf("x=%d \t y=%d\n",x,y);
}

void exchange(int *p1,int *p2,int *p3)
{
	if(*p1<*p2)
		swap(p1,p2);
	if(*p1<*p3)
		swap(p1,p3);
	if(*p2<*p3)
		swap(p2,p3);
}

int main7()
{
	int a,b,c,*q1,*q2,*q3;
	puts("Please input number");
	scanf("%d,%d,%d",&a,&b,&c);
	q1=&a;
	q2=&b;
	q3=&c;
	exchange(q1,q2,q3);
	printf("\n%d,%d,%d",a,b,c);
}

void SUM(int *p,int n)
{
	int i,sum=0;
	for(i=0;i<n;i++)
		sum+=*(p+i);
	printf("sum : %d\n",sum);
}

int main8()
{
	int *pointer,a[10],i;
	pointer=a;
	printf("please num\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	SUM(pointer,10);
}

void order(int *p,int n)
{
	int i,t,j;
	for(i=0;i<n-1;i++)
		for(j=0;j<n-1-i;j++)
			if(*(p+j)>*(p+j+1))
			{
				t=*(p+j);
				*(p+j)=*(p+j+1);
				*(p+j+1)=t;
			}
	printf("out :\n");
	for(i=0;i<n;i++)
	{
		if(i%5==0)
			printf("\n");
		printf("%5d",*(p+i));
	}
}

int main9()
{
	int a[10],i,n;
	printf("all num\n");
	scanf("%d",&n);
	printf("please array\n");
	for(i=0;i<n;i++)
		scanf("%d",a+i);
	order(a,n);
}

#include <string.h>

void sort(char *string[],int n)
{
	char *temp;
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(strcmp(string[i],string[j])>0)
			{
				temp = string[i];
				string[i]=string[j];
				string[j]=temp;
			}
		}
	}
}

int main10()
{
	int n=4;
	int i;
	char **p;
	char *name[]=
	{
		"apple",
		"orange",
		"banana",
		"grape"
	};

	p = name;
	sort(p,n);
	printf("out\n");
	for(i=0;i<n;i++)
		printf("%s\n",name[i]);
}

#define N 4

void max(int (*a)[N],int m)
{
	int value,i,j,sum=0;
	for(i=0;i<m;i++)
	{
		value=*(*(a+i));
		for(j=0;j<N;j++)
			if(*(*(a+i)+j)>value)
				value=*(*(a+i)+j);
		printf("the %d big is %d\n",i,value);
		sum+=value;
	}
	printf("\n");
	printf("the big sum %d\n",sum);
}

int main11()
{
	int a[3][N],i,j;
	int (*p)[N];
	p=&a[0];
	printf("please input\n");
	for(i=0;i<3;i++)
		for(j=0;j<N;j++)
			scanf("%d",*(p+i)+j);
	max(p,3);
}

void order_1(int a[],int n)
{
	int i,t,j;
	for(i=0;i<n-1;i++)
		for(j=0;j<n-1-i;j++)
			if(*(a+j)>*(a+j+1))
			{
				t=*(a+j);
				*(a+j)=*(a+j+1);
				*(a+j+1)=t;
			}
	printf("out :\n");
	for(i=0;i<n;i++)
	{
		if(i%5==0)
			printf("\n");
		printf("%5d",*(a+i));
	}
}

int main12()
{
	int a[10],i,n;
	int *p;
	p=a;
	printf("all num\n");
	scanf("%d",&n);
	printf("please array\n");
	for(i=0;i<n;i++)
		scanf("%d",p++);
	p=a;
	order(p,n);
}

int *per(int a,int b);
int Perimeter;

void main13()
{
	int iWidth,iLength;
	int *iResult;
	printf("please iLength\n");
	scanf("%d",&iLength);
	printf("please iWidth\n");
	scanf("%d",&iWidth);
	iResult = per(iWidth,iLength);
	printf("perimeter:\n");
	printf("%d\n",*iResult);
}

int *per(int a,int b)
{
	int *p;
	p=&Perimeter;
	Perimeter=(a+b)*2;
	return p;
}

int main(int argc, char const *argv[])
{
	printf("the list\n");
	printf("order name:\n");
	printf("%s\n", *argv);
	printf("num :\n");
	printf("%d\n",argc);
	return 0;
}