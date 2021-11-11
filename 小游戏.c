#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<conio.h>
#include<windows.h>

#define	CNO		4		//选项数量
#define swap(type, x, y)   do { type t = x; x = y; y = t; } while (0)
void endgame();

void File_in();
void File_out();
void rule();
void Lost();
void choose();
int read();
int run();

int score = 0;
int HighScore = 0;
int	QNO;				//单词数量 
char **cptr;			//指向中文单词的指针数组 
char **eptr;			//指向英语单词的指针数组
						/*设置光标位置*/
void gotoxy(int x, int y)
{
	COORD c;
	c.X = x;
	c.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

/*开始界面*/
void start()
{
	int n;
	int i, j = 1;
	gotoxy(23, 2);


	printf("英 语 单 词 巩 固 练 习");
         			
	for (i = 6; i <= 12; i++)   	//输出上下边框*
	{
		for (j = 7; j <= 54; j++)  //输出左右边框☆
		{
			gotoxy(j, i);
			if (i == 6 || i == 12)
			{
				printf("*");
			}
			else if (j == 7 || j == 54)
			{
				printf("☆");
			}
		}
	}
	gotoxy(15, 8);
	printf("1.开始练习");
	gotoxy(35, 8);
	printf("2.积分规则");
	gotoxy(15, 10);
	printf("3.退出练习");
	gotoxy(19, 13);
	printf("请选择[1 2 3]:[ ]\b\b");        //\b为退格，使得光标处于[]中间
	
	scanf("%d", &n);    		//输入选项
	switch (n)
	{
	case 1:
		system("cls");
		run();       //选择题
		break;
	case 2:
		rule();      	//积分规则
		break;
	case 3:
		exit(0);     		//退出游戏
		break;
	default:				//输入非1~3之间的选项
	
		gotoxy(40, 28);
		printf("请输入1~3之间的数!");
		getch();			//输入任意键
		system("cls");		//清屏
		start();
	}
}
/*显示选项*/
void print(const int c[], int sw)
{
	int i;
	
	for (i = 0; i < CNO; i++)
		printf("(%d) %s  ", i, sw ? cptr[c[i]] : eptr[c[i]]);
	printf("：");
}

/*生成选项并返回正确的下标*/
int make(int c[], int n)
{
	int i, j, x;

	c[0] = n;						//在开头元素中存入正确答案 

	for (i = 1; i < CNO; i++) {
		do {						//生成不重复的随机数 
			x = rand() % QNO;
			for (j = 0; j < i; j++)
				if (c[j] == x)		//已经生成了相同的随机数 
					break;
		} while (i != j);
		c[i] = x;
	}

	j = rand() % CNO;
	if (j != 0)
		swap(int, c[0], c[j]);	    //移动正确答案

	return j;
}
/*读取单词*/
int read()
{
	int	i;
	FILE *fp;
	char filename[30];

	printf("请输入单词存储文件名:\n");

	scanf("%s", filename);
	if ((fp = fopen(filename, "r")) == NULL)
		return 1;

	fscanf(fp, "%d", &QNO);			//读取单词数量

	if ((cptr = calloc(QNO, sizeof(char *))) == NULL) return 1;
	if ((eptr = calloc(QNO, sizeof(char *))) == NULL) return 1;

	for (i = 0; i < QNO; i++) {
		char etemp[1024];
		char ctemp[1024];
		fscanf(fp, "%s%s", etemp, ctemp);
		if ((eptr[i] = malloc(strlen(etemp) + 1)) == NULL) return 1;
		if ((cptr[i] = malloc(strlen(ctemp) + 1)) == NULL) return 1;
		strcpy(eptr[i], etemp);
		strcpy(cptr[i], ctemp);
	}
	fclose(fp);

	return 0;
}
/*练习结束*/
void endgame()
{
	system("cls");
	Lost();

	gotoxy(35, 10);
	printf("综合比赛成绩，您的得分是%d", score);
	if (score >= HighScore)
	{

		gotoxy(33, 12);
		printf("创纪录啦！最高分被你刷新啦，真棒！！！\n");
		File_in();              //把最高分写进文件
	}
	else
	{

		gotoxy(33, 12);
		printf("继续努力吧~ 你离最高分还差：%d\n", HighScore - score);
	}
	choose();
}
/*边框下面的分支选项*/
void choose()
{
	int n;
	gotoxy(25, 23);

	printf("我要重新练一局-------1");
	gotoxy(52, 23);
	printf("不练了，退出吧-------2");
	gotoxy(46, 25);

	printf("选择：");

	scanf("%d", &n);
	switch (n)
	{
	case 1:
		system("cls");          //清屏
		score = 0;                //分数归零
		start();
		break;
	case 2:
		exit(0);                //退出游戏
		break;
	default:
		gotoxy(35, 27);

		printf("※※您的输入有误，请重新输入※※");
		system("pause >nul");
		endgame();
		choose();
		break;
	}

}
/*失败界面*/
void Lost()
{
	int i;
	system("cls");
	gotoxy(17, 5);

	printf("+-------------------------");

	gotoxy(31, 5);

	printf("〃★★★");
	gotoxy(40, 5);

	printf("-------------------");
	gotoxy(55, 5);

	printf("----------");
	gotoxy(65, 5);

	printf("-----------------+");


	for (i = 6; i <= 19; i++)        //竖边框
	{
		gotoxy(17, i);
		printf("|");
		gotoxy(82, i);
		printf("|");
	}

	gotoxy(17, 20);
	printf("+---------------------------------");

	gotoxy(52, 20);

	printf("★★★〃");

	gotoxy(60, 20);

	printf("----------------------+");

}
/*判断选择题*/
int run()
{
	int i;
	int nq, pq;			//题目编号和上一次的题目编号 
	int na;				//正确答案的编号 
	int sw;				//题目语言（0：中文/1：英语）
	int retry;			//重新挑战吗？
	int cand[CNO];		//选项的编号

	if (read() == 1) {
		printf("\a单词文件读取失败。\n");
		return 1;
	}
	srand(time(NULL));	//设定随机数的种子

	pq = QNO;			//上一次的题目编号（不存在的编号）

	do {
		int no;

		do {						//决定用于出题的单词的编号
			nq = rand() % QNO;
		} while (nq == pq);			//不连续出同一个单词 

		na = make(cand, nq);	//生成选项 
		sw = rand() % 2;
	
		printf("哪一个是%s？\n", sw ? eptr[nq] : cptr[nq]);

		do {
			print(cand, sw);	//显示选项 
			scanf("%d", &no);
			if (no != na)
			{
		
				puts("对不起，您的回答错误，减掉10分");
				score -= 10;
			}
		} while (no != na);

		puts("您的回答正确，恭喜加10分");
		score += 10;
		pq = nq;

		printf("再来一次？0-否/1-是：");
		scanf("%d", &retry);
	} while (retry == 1);

	for (i = 0; i < QNO; i++) {
		free(eptr[i]);
		free(cptr[i]);
	}
	free(cptr);
	free(eptr);
	File_out();
	endgame();
	exit(0);
	return 0;
}
/*储存最高分进文件*/
void File_in()
{
	FILE *fp;
	fp = fopen("save.txt", "w+");       //以读写的方式建立一个名为save.txt的文件
	fprintf(fp, "%d", score);           //把分数写进文件中
	fclose(fp);                         //关闭文件
}

/*在文件中读取最高分*/
void File_out()
{
	FILE *fp;
	fp = fopen("save.txt", "a+");       //打开文件save.txt
	fscanf(fp, "%d", &HighScore);       //把文件中的最高分读出来
	fclose(fp);                         //关闭文件
}
/*积分规则*/
void rule()
{
	int i, j = 1;
	system("cls");

	gotoxy(44, 3);
	printf("积分规则");

	for (i = 6; i <= 22; i++)   //输出上下边框===
	{
		for (j = 20; j <= 75; j++)  //输出左右边框||
		{
			gotoxy(j, i);
			if (i == 6 || i == 22) printf("*");
			else if (j == 20 || j == 75) printf("*");
		}
	}

	gotoxy(30, 8);
	printf("规则1: 从4个选项里选择对应的词义");

	gotoxy(30, 11);
	printf("规则2: 回答正确加10分");

	gotoxy(30, 14);
	printf("规则3: 回答错误减掉10分");

	gotoxy(30, 17);
	printf("规则4: Esc:退出练习");
	getch();                //按任意键返回主界面
	system("cls");
	start();
}
/*主函数*/
int main()
{
	start();
	run();
	return 0;
}