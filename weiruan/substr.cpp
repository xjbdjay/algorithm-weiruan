#include<iostream>
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))

using namespace std;

template<typename T>
void getmaxsum(T *p,int n)//最大子序列和
{
	T *sum=new T[n];
	int i,max,end;
	sum[0]=p[0];
	for(i=1;i<n;i++)
	{
		sum[i]=max(sum[i-1]+p[i],p[i]);
	}
	max=0;
	for(i=0;i<n;i++)
		if(sum[i]>max)
		{ 
			max=sum[i];
			end=i;
		}
	cout<<max<<"end is"<<endl;
}
template<typename T>
void getmaxmul(T *p,int n)//最大子序列积
{
	T *max=new T[n];
	T *min=new T[n];
	int i,end;
	T maxium=0;
	max[0]=min[0]=p[0];
	for(i=1;i<n;i++)
	{
		max[i]=max(max[i-1]*p[i],p[i]);
		max[i]=max(min[i-1]*p[i],max[i]);
		min[i]=min(min[i-1]*p[i],p[i]);
		min[i]=min(max[i-1]*p[i],min[i]);
		if(maxium<max[i])
		{
			maxium=max[i];
			end=i;
		}
	}
	cout<<maxium<<"end is"<<endl;
}
int main()
{
	int a[]={1,-2,3,4,5,0,-2,-4,6,7,8};
	getmaxsum(a,11);
	getmaxmul(a,11);
}
