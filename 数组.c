#include <stdio.h>

int main1()
{
	int Array[11],index;
	puts("phone:");
	for(index=0;index<11;index++)
	{
		scanf("%d",&Array[index]);
	}
	printf("your phone\n");
	for(index=0;index<11;index++)
	{
		printf("%d",Array[index]);
	}
}

int main2()
{
	int grade[10]={1,2,3,4,5,6,7,8,9,10};
	int total;
	int i;
	float avg;
	for(i=0;i<10;i++)
	{
		total+=grade[i];
	}
	avg=((float)total/10);
	printf("avg:%f",avg);
}

int main3()
{
	int a[2][3],b[3][2];
	int i,j;

	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("a-array\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}

	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			b[j][i]=a[i][j];
		}
	}
	printf("b-array\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
}

int main4()
{
	int array[][3]={10,2,3,1,10,3,1,2,10};
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i==j)
			{
				printf("%d\n",array[i][j]);
			}
		}
	}
}

int main5()
{
	int a[3][5];
	int mach=0,ch=0,en=0;
	int i,j,avg;
	for(i=0;i<3;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
			if(i==0)
			{
				mach+=a[i][j];
			}
			else if(i==1)
			{
				ch+=a[i][j];
			}
			else
			{
				en+=a[i][j];
			}
		}
	}
	avg=mach/5;
	printf("%d\n",avg);
	avg=ch/5;
	printf("%d\n",avg);
	avg=en/5;
	printf("%d\n",avg);
}

int main6()
{
	int index;
	char cArray[]="hello";
	char cArray2[11]="hello,world";
	for(index=0;index<11;index++)
	{
		putchar(cArray2[index]);
	}
	printf("\n%s\n",cArray);
}

int main()
{
	int index;
	int length=0;
	int strlen=1;
	char cArray[80];
	printf("String\n");
	gets(cArray);
	for(index=0;cArray[index]!='\0';index++)
	{
		if(cArray[index]==' ')
		{
			strlen++;
		}
		length++;
	}
	printf("length %d\n",length);
	printf("strlen %d\n",strlen);
}