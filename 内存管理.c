#include <stdlib.h>
#include <stdio.h>

int main1()
{
	int *plnt;
	plnt = (int*)malloc(sizeof(int)); /*分配一个整型内存空间*/
	*plnt=20;
	printf("%d\n", *plnt);
	free(plnt); /*释放内存*/
}

#include <string.h>

int main2()
{
	char *ch;
	ch=(char*)calloc(30,sizeof(char)); /*分配一段字符数组内存*/
	strcpy(ch,"english");
	printf("%s\n",ch);
	free(ch);
}

int main()
{
	int *iInt;
	char *cChar;
	iInt=(int*)malloc(sizeof(int));
	printf("int size %d\n",sizeof(*iInt));
	cChar=realloc(iInt,sizeof(char)); /*改变分配的空间大小*/
	printf("char size %d\n",sizeof(*cChar));
}