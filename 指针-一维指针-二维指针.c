#include <stdio.h>

int main1()
{
	int a;
	int *ipointer1; /*定义指针变量*/
	printf("enter data:\n");
	scanf("%d",&a);
	ipointer1 = &a;
	printf("16base :%x\n",*ipointer1);
}

int main2()
{
	int a=10,b=11;
	int *ipointer1,*ipointer2;
	ipointer1=&a;
	ipointer2=&b;
	if(*ipointer2>*ipointer1)
	{
		printf("b big to a\n");
	}
	else
	{
		printf("a big to b\n");
	}
}

int main3()
{
	long i,j,c;
	long *p,*q,*n;
	printf("please input:\n");
	scanf("%ld,%ld",&i,&j);
	c=i+j;
	p=&i;
	q=&j;
	n=&c;
	printf("%ld\n",&*p);
	printf("%ld\n",&*q);
	printf("%ld\n",&*n);
}

int main4()
{
	double a=1000*10*8*0.001;
	double *p;
	p=&a;
	printf("%.1lf\n", *&a);
	printf("%.1lf\n", *p);
}

int main5()
{
	int i;
	int *p;
	short j;
	short *q;
	printf("please input:\n");
	scanf("%d,%d",&i,&j);
	p=&i;
	q=&j;
	printf("int %d short %d\n", p,q);
	p++;
	q++;
	printf("int %d short %d\n", p,q);
}

int main6()
{
	int array[5]={1,0,1,0,1};
	int *p;
	p=&array[4];
	for(int i =0;i<5;i++)
	{
		if(*p)
		{
			printf("reciprocal %d\n", i+1);
			break;
		}
		p--;
	}
}

int main7()
{
	int *p,*q,a[5],b[5],i;
	p=&a[0];  /*将首地址赋给指针*/
	q=b;

	printf("please input array is a :\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
		// scanf("%d",p++); p=a; 重新指向数组a
	}
	printf("please input array is b :\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&b[i]);
		// scanf("%d",q++); q=b; 重新指向数组b
	}

	// p=a;
	// q=b;

	printf("array a is\n");
	for(i=0;i<5;i++)
	{
		printf("%5d", *(p+i)); /* *(p+n)表示数组a[n] */
		// printf("%5d", *(a+i));
		// printf("%5d",*p++);
	}
	printf("\n");
	printf("array b is\n");
	for (i=0;i<5;i++)
	{
		printf("%5d", *(q+i));
	}
}

int main8()
{
	int a[2][2],i,j; /* *p */
	// p=a[0];  /*定义p为第一行元素的首地址*/
	printf("please input\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",a[i]+j);
			// scanf("%d",p++);
		}
	}
	// p=a[0];
	printf("the array is\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%5d",*(a[i]+j));
			// printf("%5d",*p++);
		}
		printf("\n");
	}
}

int main()
{
	int a[2][3],i,j,(*p)[3];
	p=&a[0]; /*定义p为第一行元素的首地址*/
	for(i=0;i<2;i++)
		for(j=0;j<3;j++)
			scanf("%d",*(p+i)+j); /* *(a+i)与a[i]等价 */
	p=&a[1];
	printf("array 1 row\n");
	for(j=0;j<3;j++)
		printf("%d\n",*(*p+j));
}