#include<stdio.h>
//#include<linkage.h>
void __attribute__((regparm(1)))  test_call(int a,int b)
{
	printf("a address %x\n",&a);
	printf("b address %x\n",&b);
	printf("a value %x\n",a);
	printf("b value %x\n",b);
}
void f()
{
	int *p;
	{
		int a=3;
		p=&a;
	}
	printf("f()*p value %d\n",*p);
//	printf("f() a value %d\n",a);  compile error
}
void m()
{
	int a[10];
	int *p=&a;
	int *s=NULL;
	puts(s);

	int i=0;
	while(i++<100)
	{
		printf("i %d \n",i);
	//	*(p+i)=0;//缓冲区益处
	}
	printf("m() return \n");
	
	return;
}

int main()
{
	char a=1,b=2;
	printf("a address %x\n",&a);
	printf("b address %x\n",&b);
	printf("int a value  %x\n",(int)a);
	printf("int a value  %x\n",(int)b);

//	test_call(a,b);
	char p[10]="1234";
	char *s="mysohu";
	//s[0]=0; //..
	p[0]=0;
	printf("%s",p);
//	f();
//	m();
//	printf("int a address  %x\n",&(int)a);
	char *pp=0x08048338;
	putchar('\n');
	printf("0x8048338 value  %d\n",*pp);
	pp=0x08048000;//该进程的第一个虚存区间
	putchar('\n');
	printf("0x8048000 value  %d\n",*pp);
	pp=0x08047fff;//段错误
	putchar('\n');
	printf("0x8047fff value  %d\n",*pp);
}

