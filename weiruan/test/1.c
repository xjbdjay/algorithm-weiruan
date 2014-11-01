#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void f()
{
	char *p=malloc(30);
	strcpy(p,"helloworldhahaha");
	printf("%d p is %s\n",__LINE__,p);
	free(p);
	if(p)
	{
	printf("%d p is %s\n",__LINE__,p+4);//free 函数把p的前4个字节清零了
	}
}
char * getm()
{
	char p[10]="hello";//要看p数组多大，越大hello就不会被覆盖掉
	return p;
}


int main()
{
	f();
	puts(getm());
}
