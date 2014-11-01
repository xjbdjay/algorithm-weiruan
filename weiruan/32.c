//使两个数组之差最小
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define swap(a,b) do{int c=a^b;a=c^a,b=c^b;} while(0)
int num=0;

void maopao(int a[],int n)
{
	int i,j;
	for(i=0;i<n-1;i++)
		for(j=0;j<n-i-1;j++)
			if(a[j]>a[j+1])
			{
				swap(a[j],a[j+1]);
			}
}
int	switch_arrary (int *pa,int *pb,int minus,int n)
{
	int i,j,k;
	for(i=0;i<n;i++)
		for(j=n-1;j>=0;j--)
			//if(pa[j]-pb[i]>minus/2 && pa[j]-pb[i]<minus)
			if(pa[j]-pb[i]>0 && pa[j]-pb[i]<minus)
			{
				swap(pa[j],pb[i]);
				for(k=i;k<n-1;k++)
				{
					if(pb[k]>pb[k+1])
						swap(pb[k],pb[k+1]);
					else break;
				}
				for(k=j;k>0;k--)
				{
					if(pa[k]<pa[k-1])
						swap(pa[k],pa[k-1]);
					else break;
				}
				for(i=0;i<10;i++)
					printf("%d  ",pa[i]);
				printf("\n  ");
				for(i=0;i<10;i++)
					printf("%d  ",pb[i]);
				printf("\n  ");
				return 0;
			}
		return 1;
		
}
int getbalance(int *pa,int *pb,int n)
{
	int suma,sumb,i,minus;
	suma=sumb=0;
	printf("%d   %d\n ",num++,minus);
	for(i=0;i<n;i++)
	{
		suma+=pa[i];
		sumb+=pb[i];
	}
	if(suma>sumb)
	{
		minus=suma-sumb;
		printf("%d,%d,%d\n  ",suma,sumb,minus);
		if(!switch_arrary(pa,pb,minus,n))
			getbalance(pa,pb,n);
		else
			return 0;
	}
	else
	{
		minus=sumb-suma;
		printf("%d,%d,%d\n  ",sumb,suma,minus);
		if(!switch_arrary(pb,pa,minus,n))
			getbalance(pa,pb,n);
		else
			return 0;
	}

}

int main()
{
	int i;
//	randomize();
	srand((unsigned)time(0));//设置种子
//	int a[10],b[10];
	int a[10]={5, 10, 27, 61, 72, 72, 81, 86, 96};
	int b[10]={12, 27, 29, 49, 49, 51, 60, 74, 88};

	printf("ten random numbers from 0 to 99\n");
	for(i=0;i<10;i++)
	{
		a[i]=rand()%100;
		b[i]=rand()%230;
	}
	
	for(i=0;i<10;i++)
		printf("%d  ",a[i]);
	printf("\n  ");
	for(i=0;i<10;i++)
		printf("%d  ",b[i]);
	printf("\n  ");
	maopao(a,10);
	maopao(b,10);
	for(i=0;i<10;i++)
		printf("%d  ",a[i]);
	printf("\n  ");
	for(i=0;i<10;i++)
		printf("%d  ",b[i]);
	printf("\n  ");
	getbalance(a,b,10);
	for(i=0;i<10;i++)
		printf("%d  ",a[i]);
	printf("\n  ");
	for(i=0;i<10;i++)
		printf("%d  ",b[i]);
	
//	swap(a,b);
//	printf("%d,%d",a,b);
	return 0;
}
