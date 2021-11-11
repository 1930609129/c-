#include <stdio.h>
#include <time.h>
#include <string.h>

int main1()
{
	int i;
	char String[6]={"hello"};  /* '\0'也为一个字符 */
	char Reverse[6]={0};
	int size;
	size = sizeof(String);
	printf("%d\n", size);
	for(i=0;i<5;i++)
	{
		Reverse[size-i-2] = String[i];
	}
	printf("%s\n", String);
	printf("%s\n", Reverse);
}

int main2()
{
	int command[4]={0,1,2,3};
	int num;
	struct tm *sysTime;
	printf("please number 0!\n");
	printf("please cmd \n");

	while(1)
	{
		scanf("%d",&num);
		if(command[0]==num)
		{
			printf("this 1 show day this 2 show time this 3 show out\n");
		}
		else if(command[1]==num)
		{
			time_t nowTime;
			time(&nowTime);
			sysTime = localtime(&nowTime);
			printf("system day %d-%d-%d \n",1900 + sysTime->tm_year,sysTime->tm_mon+1,sysTime->tm_mday);
		}
		else if(command[2]==num)
		{
			time_t nowTime;
			time(&nowTime);
			sysTime = localtime(&nowTime);
			printf("system time %d:%d:%d\n",sysTime->tm_hour,sysTime->tm_min,sysTime->tm_sec);
		}
		else if(command[3]==num)
		{
			return 0;
		}
		printf("cmd-system :\n");
	}
}

int main()
{
	int result = 1;
	int i;
	int count = 0;
	char Text[128]={'\0'};
	char cryptograph[128] = {'\0'};
	while(1)
	{
		if(result == 1)
		{
			printf("encryption Text\n");
			scanf("%s",&Text);
			count = strlen(Text);
			for(i=0;i<count;i++)
			{
				cryptograph[i]=Text[i]+i+5;
			}
			cryptograph[i]='\0';
			printf("encryption Text is : %s %d strlen %d\n",cryptograph,i,count);
		}
		else if(result == 2)
		{
			count = strlen(Text);
			for(i=0;i<count;i++)
			{
				Text[i]=cryptograph[i]-i-5;
			}
			Text[i]='\0';
			printf("this Text %s\n",Text);
		}
		else if(result==3)
		{
			break;
		}
		else
		{
			printf("cmd-system: \n");
		}
		printf("please 1 encryption 2 is Text 3 is out\n");
		printf("cmd-system :\n");
		scanf("%d",&result);
	}
}