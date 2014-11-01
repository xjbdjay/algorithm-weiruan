#include<stdio.h>
int a[20];
void getset(int n,int i)
{
	int j;
	if(n==1)
	{
		a[i]=1;
		for(j=0;j<=i;j++)
			printf("%d ",a[j]);
		printf("\n ");
		return;
	}
	if(n==0)
	{
		for(j=0;j<i;j++)
			printf("%d ",a[j]);
		printf("\n ");
		return ;
	}
	a[i]=1;
	getset(n-1,i+1);
	a[i]=2;
	getset(n-2,i+1);
}
int main()
{

	getset(20,0);
	return 0;
}
