#include <stdio.h>
void Cook();
void Fish();
void Poem();
void exchange(int a,int b);
void shownum(int num);
void Evalvalue(int array[10]); /*赋值*/
void Display(int array[10]); /*打印*/

void judegTemperature(float temperature);
float getTemperature();

int main1()
{
	Cook();
	Fish();
	Poem();
}
void Cook()
{
	printf("can cook\n");
}

void Fish()
{
	printf("can fish\n");
}

void Poem()
{
	printf("can poem\n");
}

void exchange(int a,int b)
{
	int c;
	c=a;
	a=b;
	b=c;
	printf("%d,%d\n",a,b);
}

int main2()
{
	int a=3,b=4;
	printf("%d,%d\n",a,b);
	exchange(a,b);	
}

int add(int num1,int num2)
{
	int result;
	result=num1+num2;
	return result;
}

int main3()
{
	int result;
	result = add(3,4);
	printf("%d\n",result);
}

int main4()
{
	int array[10];
	int i;
	for(i=0;i<10;i++)
	{
		array[i]=i;
	}
	for(i=0;i<10;i++)
	{
		shownum(array[i]);
	}
}

void shownum(int num)
{
	printf("%d\n",num);
}

int main5()
{
	int array[10];
	Evalvalue(array);
	Display(array);
}

void Display(int array[10])
{
	int i;
	for(i=0;i<10;i++)
	{
		printf("%d\n",array[i]);
	}
}

void Evalvalue(int array[10])
{
	int i;
	for(i=0;i<10;i++)
	{
		array[i]=i;
	}
}

void _strcat(char str1[],char str2[])
{
	int i,j;
	for(i=0;str1[i]!='\0';i++);
		if(str1[i]=='\0'){
			for(j=0;str2[j]!='\0';j++)
			str1[i+j]=str2[j];
		}
	str1[i+j]='\0';
}

int main6()
{
	char str1[100],str2[100];
	puts("please String 1:");
	gets(str1);
	puts("please String 2");
	gets(str2);
	_strcat(str1,str2);
	printf("%s\n",str1 );
}

int main()
{
	judegTemperature(getTemperature());
}

float getTemperature()
{
	float temperature;
	printf("please temperature\n");
	scanf("%f",&temperature);
	printf("%.1f\n",temperature);
	return temperature;
}

void judegTemperature(float temperature)
{
	if(temperature<=37.3f && temperature>36)
		printf("Normal body temperature\n");
	else
		printf("Not normal body temperature\n");
}