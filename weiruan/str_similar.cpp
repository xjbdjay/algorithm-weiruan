#include<iostream>
#define min(a,b) ((a)>(b)?(b):(a))
using namespace std;


void stra_to_strb(const char *a,int n,const char *b,int m)
{
	int *f=new int[n*m];
	int i,j;
	if(a[0]==b[0])
	{
		f[0]=0;
		f[m]=0;
	}
	else
	{
		f[0]=1;
		f[m]=1;
	}
	for(j=1;j<m;j++)
		f[j]=f[j-1]+1;  //初始化f[0][j]
	for(i=1;i<n;i++)
		f[i*m]=f[(i-1)*m]+1;  //初始化f[i][0]
	for(i=1;i<n;i++)
		for(j=1;j<m;j++)
		{
			f[i*m+j]=min(f[(i-1)*m+j]+1,f[i*m+j-1]+1);//添加，删除
			if(a[i]==b[j])
				f[i*m+j]=min(f[i*m+j],f[(i-1)*m+j-1]);//相等
			else
				f[i*m+j]=min(f[i*m+j],f[(i-1)*m+j-1]+1);//替换
		}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
			cout<<f[i*m+j]<<" ";
		cout<<endl;
	}

}
int main()
{
	char *a="1bcde";
	char *b="ab45cde";
	stra_to_strb(a,5,b,7);
	return 0;
}
