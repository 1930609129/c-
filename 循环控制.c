#include <stdio.h>

int main1()
{
	int i=0,n,n1;
	int sum=0;
	for(n=0;i<=6;i+=2)
	{
		n=n+i;
	}
	printf("%d\n",n);
	scanf("%d",&n1);
	while(n1<=100){
		sum+=n1;
		n1++;
	}
	printf("%d\n",sum);
	

	int x,y,z;
	for(x=0;x<20;x++)
	{
		for(y=0;y<33;y++)
		{
			z=100-x-y;
			if(5*x+3*y+z/3.0==100){
				printf("x=%d,y=%d,z=%d\n",x,y,z);
			}
		}
	}
}

int main2()
{
	int line=5;
	for(int i=1;i<line;i++)
	{
		for(int j=0;j<line-i;j++)
		{
			printf(" ");
		}

		for(int j=0;j<(2*i)-1;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}

int main3()
{
	int n = 5;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<i+1;j++)
		{

			printf("%d ",j);
		}
		printf("\n");
	}
}

int main4()
{
	int iStep;
	int iSelect;
	for(iStep=1;iStep<10;iStep)
	{
		printf("步骤号:%d\n",iStep);
		do{
			printf("please num \n");
			printf("0 is exit,1 is next step\n");
			scanf("%d",&iSelect);
			if(iSelect==0)
			{
				goto exit;
			}
		}
		while(iSelect!=1);
	}
	exit:
		printf("out\n");
}

int main5()
{
	int count;
	for(count=0;count<5;count++)
	{
		if(count==3)
		{
			continue;
		}
		printf("%d\n",count);
	}
}

