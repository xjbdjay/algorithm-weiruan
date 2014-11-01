#include<stdio.h>

extern testt();
char a[]="hello";
int *b;

int main() //数组和main函数指针是有区别的，数组名和main函数只是一个常量，并没有对应的内存单元存储值
{
	char *p=a+3;
	testt();
	printf("main is %x\n",main);
	printf("a is %c\n",a[2]);
	printf("a value is %x\n",a);
	printf("a addr is %x\n",&a);
	printf("b value is %x\n",b);
	printf("b addr is %x\n",&b);
	printf("p-3 addr is %x\n",p[-7]);
	printf("a-3 addr is %x\n",a[-4]);
}
