#include<stdio.h>

int getset(int m,int n)
{
	int i=0;
	if(m == 0)
	{
		printf("+%d",m);
		return 0;
	}
	while(i<=m)
	{
		printf("+%d",m-i);
		getset(m-i,n)
	}

}
//wode charu
