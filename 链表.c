#include <stdio.h>
#include <stdlib.h>

struct Student
{
	char cName[20];
	int iNumber;
	struct Student *pNext; /*指向下一个结点的指针*/
};

int iCount;

struct Student *Create() /*创建链表函数*/
{
	struct Student *pHend = NULL; /*初始化链表头指针为空*/
	struct Student *pEnd,*pNew;
	iCount=0;  /*初始化链表长度*/
	pEnd=pNew=(struct Student*)malloc(sizeof(struct Student)); /*动态分配一块内存空间*/
	printf("please first enter :\n");
	scanf("%s",&pNew->cName);
	scanf("%d",&pNew->iNumber);
	while(pNew->iNumber!=0)
	{
		iCount++;
		if(iCount==1)
		{
			pNew->pNext=pHend; /*使得指向为空*/
			pEnd=pNew;  /*跟踪新加入的结点*/
			pHend=pNew; /*头指针指向首结点*/
		}

		else
		{
			pNew->pNext=NULL;  /*新结点的指针为空*/
			pEnd->pNext=pNew; /*原来的尾结点指向新结点*/
			pEnd=pNew; /*pEnd指向新结点*/
		}
		pNew=(struct Student*)malloc(sizeof(struct Student)); /*再次分配结点内存空间*/
		scanf("%s",&pNew->cName);
		scanf("%d",&pNew->iNumber);
	}
	free(pNew);  /*释放没有用的空间*/
	return pHend;
}

struct Student *Insert(struct Student *pHend)
{
	struct Student *pNew;
	printf("--first tne name --\n");
	pNew=(struct Student*)malloc(sizeof(struct Student)); /*分配内存空间，并返回指向该内存空间的指针*/

	scanf("%s",&pNew->cName);
	scanf("%d",&pNew->iNumber);

	pNew->pNext=pHend;  /*新结点指针指向原来的首结点*/
	pHend=pNew;  /* 头指针指向新结点*/
	iCount++;
	return pHend;
}

void Delete(struct Student *pHend,int iIndex)
{
	int i;
	struct Student *pTemp;
	struct Student *pPre;
	pTemp=pHend;
	pPre=pTemp;

	printf("--delete NO%d --\n",iIndex);
	for(i=1;i<iIndex;i++) /*使pTemp指向要删除的结点*/
	{
		pPre=pTemp;
		pTemp=pTemp->pNext;
	}
	pPre->pNext=pTemp->pNext;  /*连接删除结点两边的结点*/
	free(pTemp);
	iCount--;
}

void Print(struct Student* pHend)
{
	struct Student *pTemp;
	int iIndex=1;
	printf("--the List has %d number\n",iCount);
	printf("\n");
	pTemp=pHend;

	while(pTemp!=NULL)
	{
		printf("the NO%d number\n",iIndex);
		printf("name is:%s number is %d\n",pTemp->cName,pTemp->iNumber);
		printf("\n");
		pTemp=pTemp->pNext; /*移动临时指针到下一结点处*/
		iIndex++;
	}
}

int main()
{
	struct Student *pHend;
	pHend=Create();
	pHend=Insert(pHend);
	Delete(pHend,2);
	Print(pHend);
}

