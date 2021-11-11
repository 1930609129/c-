#include <stdio.h>

int main1()
{
	int jour,fee;
	puts("number:");
	scanf("%d",&jour);
	fee=(jour<3)?6:6*jour; /*小于返回6，大于返回6xjour*/
	printf("%d\n",fee);
}

int main2()
{
	float money=1026,m;
	float rebate=0.0f;
	int grade = (int)money/500;
	switch(grade){
		case 0:
			rebate=0.0f;
			m=money;
			break;
		case 1:
			rebate=0.9f;
			m=rebate*money;
			break;
		case 2:
			rebate=0.8f;
			m=rebate*money;
			break;
		case 3:
			rebate=0.7f;
			m=money*rebate;
			break;
		default:
			rebate=0.5f;
			m=money*rebate;
			break;
	}
	printf("number:%f rebate %.2f\n",money,rebate);
	printf("number x rebate %f\n",m);
}

int main3()
{
	int month;
	printf("please month \n");
	scanf("%d",&month);
	switch(month){
		case 3:
		case 4:
		case 5:
			printf("%d is spring\n", month);
			break;
		case 6:
		case 7:
		case 8:
			printf("%d is summer\n",month);
			break;
		case 9:
		case 10:
		case 11:
			printf("%d is autumn\n", month);
			break;
		case 12:
		case 1:
		case 2:
			printf("%d is winter\n", month);
		default:
			printf("error\n");
	}
}

int main()
{
	int telephone,num;
	printf("your play phone\n");
	scanf("%d",&telephone);
	if(telephone==10086){
		printf("1 or 0\n");
		scanf("%d",&num);
		switch(num){
			case 1:
				printf("100yuan\n");
				break;
			case 0:
				printf("Tinkn\n");
				break;
			default:
				printf("error\n");
		}
	}

	else if(telephone==10010)
	{
		printf("please play 10086\n");
	}
	
	else
	{
		printf("NOT\n");
	}
}

