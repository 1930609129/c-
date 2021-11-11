#include <stdio.h>
#include <stdlib.h>
int main1()
{
	FILE *fp;
	char ch;
	if((fp=fopen("E:\\1.txt","w"))==NULL)
	{
		printf("not open\n");
		exit(0);
	}
	printf("please see:\n");

	ch=getchar();
	while(ch!='#')
	{
		fputc(ch,fp);
		ch = getchar();
	}
	fclose(fp);
}


int main2()
{
	FILE *fp;  /* 定义一个指向FILE类型结构体的指针变量 */
	char ch;
	fp = fopen("E:\\1.txt","r");
	ch = fgetc(fp);
	while(ch!=EOF)
	{
		putchar(ch);
		ch=fgetc(fp);
	}
	printf("\n");
	fclose(fp);
}

int main3()
{
	FILE *fp;
	char filename[30],str[30];
	printf("file pwd\n");
	scanf("%s",filename);
	if((fp=fopen(filename,"w"))==NULL)
	{
		printf("not\n");
		getchar();
		exit(0);
	}
	printf("please word\n");
	getchar();
	gets(str);
	fputs(str,fp);
	fclose(fp);
}

int main4()
{
	FILE *fp;
	char filename[30],str[30];
	printf("file pwd\n");
	scanf("%s",filename);
	if((fp=fopen(filename,"r"))==NULL)
	{
		printf("not\n");
		getchar();
		exit(0);
	}
	fgets(str,sizeof(str),fp);
	printf("%s\n",str);
	fclose(fp);
}

int main5()
{
	FILE *fp;
	int i=1;
	int j=2;
	char filename[30];
	printf("please file save\n");
	scanf("%s",filename);
	if((fp=fopen(filename,"w"))==NULL)
	{
		printf("not\n");
		getchar();
		exit(0);
	}
	fprintf(fp,"%4d\n",i);
	fprintf(fp,"%2d",i);
	fprintf(fp,"%4d\n",i);
	fprintf(fp,"%d",i);
	fprintf(fp,"%3d",j);
	fprintf(fp,"%4d\n",i);
	fclose(fp);
}

int main6()
{
	FILE *fp;
	char i,j;
	char filename[30];
	printf("please file pwd\n");
	scanf("%s",filename);
	if((fp=fopen(filename,"r"))==NULL)
	{
		printf("not\n");
		getchar();
		exit(0);
	}
	for(i=0;i<15;i++)
	{
		fscanf(fp,"%c",&j);
		printf("%d answer is %5c\n",i+1,j);
	}
	fclose(fp);
}

struct address_list
{
	char name[10];
	char adr[20];
	char tel[15];
}info[100];

void save(char *name,int n)
{
	FILE *fp;
	int i;
	if((fp=fopen(name,"wb"))==NULL)
	{
		printf("not\n");
		exit(0);
	}
	for(i=0;i<n;i++)
	{
		if(fwrite(&info[i],sizeof(struct address_list),1,fp)!=1)
			printf("write error\n");
	}
	fclose(fp);
}

void show(char *name,int n)
{
	int i;
	FILE *fp;
	if((fp=fopen(name,"rb"))==NULL)
	{
		printf("not\n");
		exit(0);
	}
	for(i=0;i<n;i++)
	{
		fread(&info[i],sizeof(struct address_list),1,fp);
		printf("%15s%20s%20s\n",info[i].name,info[i].adr,info[i].tel);
	}
	fclose(fp);
}

int main7()
{
	int i,n;
	char filename[50];
	printf("all?\n");
	scanf("%d",&n);
	printf("please pwd\n");
	scanf("%s",filename);
	printf("please name adr phone\n");
	for(i=0;i<n;i++)
	{
		printf("NO%d\n",i+1);
		scanf("%s%s%s",info[i].name,info[i].adr,info[i].tel);
		save(filename,n);
	}
	printf("############\n");
	show(filename,n);
}

int main8()
{
	FILE *fp;
	char filename[30],str[50];
	printf("please pwd\n");
	scanf("%s",filename);
	if((fp=fopen(filename,"wb"))==NULL)
	{
		printf("not\n");
		getchar();
		exit(0);
	}
	printf("please str\n");
	getchar();
	gets(str);
	fputs(str,fp);
	fclose(fp);

	if((fp=fopen(filename,"rb"))==NULL)
	{
		printf("not\n");
		getchar();
		exit(0);
	}
	fseek(fp,7L,0);
	fgets(str,sizeof(str),fp);
	printf("\n end \n");
	puts(str);
	fclose(fp);
}

int main9()
{
	FILE *fp;
	char ch,filename[50];
	printf("please filename\n");
	scanf("%s",filename);
	if((fp=fopen(filename,"r"))==NULL)
	{
		printf("not\n");
		exit(0);
	}
	printf("\n password \n");
	ch = fgetc(fp);
	while(ch!=EOF)
	{
		putchar(ch);
		ch=fgetc(fp);
	}
	rewind(fp);
	printf("\n please password\n");
	ch = fgetc(fp);
	while(ch!=EOF)
	{
		putchar(ch);
		ch=fgetc(fp);
	}
	printf("\n");
	fclose(fp);
}

int main10()
{
	FILE *fp;
	int n;
	char ch,filename[50];
	printf("please filename\n");
	scanf("%s",filename);
	if((fp=fopen(filename,"r"))==NULL)
	{
		printf("not\n");
		exit(0);
	}
	printf("password:");
	ch = fgetc(fp);
	while(ch!=EOF)
	{
		putchar(ch);
		ch = fgetc(fp);
	}
	n=ftell(fp);
	if(6==n)
		printf("success password\n");
	else
		printf("error password\n");
	fclose(fp);
}

int main()
{
	FILE *fp1,*fp2;
	char ch,filename1[30],filename2[30];
	printf("please filename1 \n");
	scanf("%s",filename1);
	printf("please filename2 \n");
	scanf("%s",filename2);
	if((fp1=fopen(filename1,"ab+"))==NULL)
	{
		printf("not\n");
		getchar();
		exit(0);
	}
	if((fp2=fopen(filename2,"rb"))==NULL)
	{
		printf("not\n");
		getchar();
		exit(0);
	}
	fseek(fp1,0L,2);
	while((ch=fgetc(fp2))!=EOF)
	{
		fputc(ch,fp1);
	}
	fclose(fp1);
	fclose(fp2);
}