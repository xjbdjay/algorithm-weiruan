#include<stdio.h>
int m=0;

void sort_two_colum(int a[],int b[],int i,int j,int n)
{
//	printf("m   %d \n ",m++);
	int k;
	if (i == 6)
	{
		for(k=0;k<6;k++)
			printf("%d ",a[k]);
		printf("\n ");
		m++;
		for(k=0;k<j;k++)
			printf("%d ",b[k]);
		while(n<=12)
			printf("%d ",n++);
		printf("\n ");
		return ;
	}
	if (i>j)
	{
		a[i]=n;
		sort_two_colum(a,b,i+1,j,n+1);
		b[j]=n;
		sort_two_colum(a,b,i,j+1,n+1);
	}
	if (i==j)
	{
		a[i]=n;
		sort_two_colum(a,b,i+1,j,n+1);
	}
	return;
}

int main()
{
	int a[6]={0};
	int b[6]={0};
	sort_two_colum(a,b,0,0,1);
	printf(" %d\n ",m);
	return 1;
}
