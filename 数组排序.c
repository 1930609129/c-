#include <stdio.h>
void Run(int left,int right,int array[]);

int main1()
{
	int array[6]={3,2,4,6,1,6};
	int i,j,temp,index;
	for(i=0;i<6;i++)
	{
		temp=array[i];
		index=i;
		for(j=i+1;j<7;j++)
		{
			if(temp>array[j])
			{
				temp=array[j];
				index=j;
			}
		}
		array[index]=array[i];
		array[i]=temp;
	}
	for (int i = 0; i < 6; ++i)
	{
		printf("%d\n", array[i]);
	}
}

int main2()
{
	int i,j;
	int array[6]={3,2,4,6,1,6};
	int temp;

	for(i=1;i<6;i++)
	{
		for(j=5;j>=i;j--)
		{
			if(array[j]<array[j-1])
			{
				temp=array[j-1];
				array[j-1]=array[j];
				array[j]=temp;
			}
		}
	}

	for(i=0;i<6;i++)
	{
		printf("%d\t", array[i]);
	}
}

int main3()
{
	int i,j;
	int array[6]={3,2,4,6,1,6};
	int temp;

	for(i=0;i<5;i++)
	{
		for(j=i+1;j<6;j++)
		{
			if(array[j]<array[i])
			{
				temp=array[i];
				array[i]=array[j];
				array[j]=temp;
			}
		}
	}

	for(i=0;i<6;i++)
	{
		printf("%d\t", array[i]);
	}
}

int main4()
{
	int i,j;
	int array[6]={3,2,4,6,1,6};
	int temp;

	for(i=1;i<6;i++)
	{
		temp=array[i];
		j = i-1;
		while(j>=0 && (temp<array[j]))
		{
			array[j+1]=array[j];
			j--;
		}
		array[j+1]=temp;
	}

	for(i=0;i<6;i++)
	{
		printf("%d\t", array[i]);
	}
}

int main()
{
	int i;
	int a[6]={3,2,4,6,1,6};
	Run(0,5,a);
	for(i=0;i<6;i++)
	{
		printf("%d\t",a[i]);
	}
}

void Run(int left,int right,int array[])
{
	int i,j;
	int middle,temp;
	i=left;
	j=right;
	middle=array[(left+right)/2];
	do
	{
		while( (array[i]<middle) && (i<right) )
			i++;
		while( (array[j]>middle) && (j>left) )
			j--;
		if(i<=j)
		{
			temp = array[i];
			array[i] = array[j];
			array[j] = temp;
			i++;
			j--;
		}
	}while(i<=j);
	if(left<j)
		Run(left,j,array);
	if(right>i)
		Run(i,right,array);
}

