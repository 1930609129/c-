#include <stdio.h>

int main1()
{
	char i;
	printf("请输入字符:\n");
	i = getchar();
	printf("ASCll码值%d\n",i );
}

int main2()
{
	char c1;
	c1 = getchar();
	putchar(c1);
	putchar('\n');
	getchar();
	putchar(getchar());
}

int main3()
{
	char* c = "I LOVE YOU"; /*字符指针变量并赋值*/
	puts("I LOVE YOU");
	puts("I\0 LOVE \0 YOU");
	puts(c);
	c="I\0LOVE";
	puts(c);
}

int main4()
{
	char account[20],password[20],name[20],IDcard[20];
	puts("请输入账号:");
	gets(account);
	puts("请输入密码：");
	gets(password);
	puts("请输入姓名:");
	gets(name);
	puts("请输入身份证号:");
	gets(IDcard);

	puts("注册完成,信息如下:");
	puts("你的账号为：");
	puts(account);
	puts("你的密码为:");
	puts(password);
	puts("你的名字为：");
	puts(name);
	puts("你的ID:");
	puts(IDcard);
}

int main5()
{
	long ld = 10000;
	printf("%ld\n",ld);

	printf("%sk\n", "MING-");
	printf("%10sk\n", "MING-"); /*右对齐*/
	printf("%-10sk\n","MING-" ); /*左对齐*/
	printf("%10.2sk\n", "MING-"); /*截取2个字符*/
	printf("%-10.2sk\n", "MING-"); 
}

int main6()
{
	int Num = 1;
	char* c = "个王八蛋";
	printf("%X%s",Num,c);
}

int main7()
{
	long ld;
	short iS;
	int iNum1=1;
	int iNum2=2;
	char c[10];
	printf("long int\n");
	scanf("%ld",&ld);
	printf("short int\n");
	scanf("%hd",&iS);
	printf("number\n");
	scanf("%d*%d",&iNum1,&iNum2); /* *不保存iNum2输入的值 */
	printf("char\n");
	scanf("%3s",c);
	printf("long int %ld\n",ld);
	printf("short int %hd\n",iS);
	printf("iNum1 %d\n",iNum1);
	printf("iNum2 %d\n",iNum2);
	printf("char %s\n",c);
}

int main8()
{
	getchar();
	printf("%X\n",getchar());
	getchar();
	printf("%x\n",getchar());
}

