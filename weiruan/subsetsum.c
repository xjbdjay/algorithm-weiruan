#include<stdio.h>
#include<stdlib.h>
/*
 * 求集合里面m个数的和跟给定的x最接近
 * */
int  getsubset(int a[],int n,int x)
{
	int **p,i,j;
	int (*f)[x];
	if((p=(int **)malloc(sizeof(int)*n*x))==NULL)
	{
		printf("malloc failed\n");
		exit(-1);
	}
	f=p;
	for (i=0;i<x;i++)
	{
		if(i==(a[0]-1))
			f[0][i]=a[0];
		else f[0][i]=0;
	}
	for (i=0;i<n;i++)
		printf("%d   ",a[i]);
	printf("\n");
	for (i=1;i<n;i++)
		for(j=0;j<x;j++)
			if(a[i]==(j+1))
			{
				f[i][j]=a[i];
				printf("a[i]= j+1 %d %d\n",i,j+1);
			}
			else if(a[i]<(j+1))
				if((a[i]+f[i-1][j-a[i]])==(j+1))
					f[i][j]=j+1;
				else f[i][j]=0;
			else
			{
				if((f[i-1][j])==(j+1))
				f[i][j]=j+1;
		//		printf("break a[i] j+1 %d %d \n",a[i],j+1);
			}
for (i=0;i<n;i++)
{
	for(j=0;j<x;j++)
		printf("%4d",f[i][j]);
	printf("\n");
}
int tmp=x;
for (i=0;i<n;)
	if(f[i][x-1]==tmp)
	{
		printf("%d\t",a[i]);
		tmp=x-a[i];
		x=tmp;
		i=0;
		if(x==0)
			break;
	}
	else i++;



return 1;
	

}


int main()
{
	int a[]={1,3,5,6,7,8,34,45,56};
	getsubset(a,9,43);
	printf("success\n");
}
	



