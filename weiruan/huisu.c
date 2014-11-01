#include<stdio.h>
/*
 * 回溯法求一个数组里面几个数和为x
 * */

int flags[100]={0};
int num=0;

void getsub(int w[],int n,int x)
{
	int m=0,i=0,j;
	while(1)
	{
		num++;
		if(i==n ) //到底了 还是没找到，回溯到上一个被选中的物体，取出
		{
			while(i>=0)
			{
			if(flags[i]==1)
				break;
			i--;
			}
			if(flags[i]==0)
				break;
			flags[i]=0;
			m-=w[i];
			i++;
		}
		/*if(i==n && flags[i-1] && m<x) //到底了 还是没找到，回溯到上一个被选中的物体，取出
			break;*/
		else if(m+w[i]<x)
		{
			m+=w[i];
			flags[i]=1;
			i++;
		}
		else if(m+w[i]==x)
		{
			flags[i]=1;
			for(j=0;j<=i;j++)
				if(flags[j])
					printf("%d+",w[j]);
			printf("=%d\n",x);
			flags[i]=0;
			i++;
		}
		else 
		{
			flags[i]=0;
			i++;
		}
			
	}
}
int main()
{
	int w[8] = {9,1,4,3,4,5,2,7,3};
	getsub(w,9,15);
	printf("num is  %d\n",num);
	return 1;
}
