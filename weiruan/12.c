#include<stdio.h>
#define mul(r,x,i) (x & 1<<i) && (r+=x<<i)
//不使用乘除法，for，while，if，else  ?判断等关键字实现1+2...n,
//必须要注意 &&就可以实现if语句判断

int foo(int n)
{
	int	r=n;
	mul(r,n,0);
	mul(r,n,1);
	mul(r,n,2);
	mul(r,n,3);
	mul(r,n,4);
	mul(r,n,5);
	mul(r,n,6);
	mul(r,n,7);
	mul(r,n,8);
	mul(r,n,9);
	mul(r,n,10);
	mul(r,n,11);
	mul(r,n,12);
	mul(r,n,13);
	mul(r,n,14);
	mul(r,n,15);
	mul(r,n,16);
	mul(r,n,17);
	mul(r,n,18);
	mul(r,n,19);
	mul(r,n,20);
	mul(r,n,21);
	mul(r,n,22);
	mul(r,n,23);
	mul(r,n,24);
	mul(r,n,25);
	mul(r,n,26);
	mul(r,n,27);
	mul(r,n,28);
	mul(r,n,29);
	mul(r,n,30);
	mul(r,n,31);
	return r/2;
}
int main()
{
	int a=1,b=3;
	printf("%d\n",foo(100));
	printf("%d\n",~b);
}


/*wojiade  git*/
/*wojiade  git*/
//haha first
//slfjl
