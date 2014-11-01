#include<stdio.h>
//#include<linkage.h>
void __attribute__((regparm(1)))  test_call(int a,int b)
{
	printf("a address %x\n",&a);
	printf("b address %x\n",&b);
	printf("a value %x\n",a);
	printf("b value %x\n",b);
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
//	printf("int a address  %x\n",&(int)a);
}

