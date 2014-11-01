#include "stdio.h"
int num=0;
#define N 200000
 int data[N]={0};
 int flag[N]={0};
void print(int a[],int length)
{
	int i;
	for(i=0;i<length;i++)
		printf("%d ",a[i]);
	printf("\n");
}

//轮换
void Cycle(int Data[],int Lenth,int Start)
{
    int Cur_index,Temp1,Temp2;
      Cur_index=(Start*2)%(Lenth+1);
      Temp1=Data[Cur_index-1];
      Data[Cur_index-1]=Data[Start-1];
	  flag[Start-1]=1;
   
  while(Cur_index!=Start)
   {
	  flag[Cur_index-1]=1;
  Temp2=Data[(Cur_index*2)%(Lenth+1)-1];
        Data[(Cur_index*2)%(Lenth+1)-1]=Temp1;
        Temp1=Temp2;
  Cur_index=(Cur_index*2)%(Lenth+1);
		num++;
   }
}

 



//满足Lenth=3^k-1的perfect shfulle的实现
void Perfect1(int Data[],int start)
{
     int i=0;
	 while(i<N)
	 {
		 if(flag[i]==0)
			 Cycle(Data,N,i+1);
		 i++;
	 }

}

 void main()
{
 int i=0;
 int n=200000;
 //printf("please input the number of data you wanna to test(should less than 100):\n");
 //scanf("%d",&n);
 if(n&1)
 {
  printf("sorry,the number should be even ");
  return;
 }
 for(i=0;i<n;i++)
  data[i]=i+1;
 Perfect1(data,1);
 
 for(i=0;i<n;i++)
   printf("%d\n",data[i]);
  printf("\n%d ",num);

}
