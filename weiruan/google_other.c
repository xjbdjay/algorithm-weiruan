#include "stdio.h"
#include "time.h"
int num=0;
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
   
  while(Cur_index!=Start)
   {
  Temp2=Data[(Cur_index*2)%(Lenth+1)-1];
        Data[(Cur_index*2)%(Lenth+1)-1]=Temp1;
        Temp1=Temp2;
  Cur_index=(Cur_index*2)%(Lenth+1);
  num++;
   }
}

 

//数组循环移位 参考编程珠玑
void Reverse(int Data[],int Len)
{
  int i,Temp;
  for(i=0;i<Len/2;i++)
  {
   Temp=Data[i];
   Data[i]=Data[Len-i-1];
   Data[Len-i-1]=Temp;
   num++;
  }
}
void ShiftN(int Data[],int Len,int N)
{
   Reverse(Data,Len-N);
   Reverse(&Data[Len-N],N);
   Reverse(Data,Len);

}


//满足Lenth=3^k-1的perfect shfulle的实现
void Perfect1(int Data[],int Lenth)
{
     int i=1;

    if(Lenth==2)
  {
   i=Data[Lenth-1];
   Data[Lenth-1]=Data[Lenth-2];
   Data[Lenth-2]=i;
   return;
  }
    while(i<Lenth)
 {
	 //print(Data,Lenth);
     Cycle(Data,Lenth,i);
     i=i*3;
 }
}
   //查找最接近N的3^k
int LookUp(int N)
{
   int i=3;
   while(i<=N+1) i*=3;

   if(i>3) i=i/3;

   return i;
}

void perfect(int Data[],int Lenth)
{
   int i,startPos=0;
   while(startPos<Lenth)
   {
     i=LookUp(Lenth-startPos);
     ShiftN(&Data[startPos+(i-1)/2],(Lenth-startPos)/2,(i-1)/2);
     Perfect1(&Data[startPos],i-1);
  startPos+=(i-1);
   }
}
#define N 2000000
 void main()
{
 int data[N]={0};
 int i=0;
 int n=200000;
 time_t start,end;
 //printf("please input the number of data you wanna to test(should less than 100):\n");
 //scanf("%d",&n);
 if(n&1)
 {
  printf("sorry,the number should be even ");
  return;
 }
 for(i=0;i<n;i++)
  data[i]=i+1;
 time(&start);
 perfect(data,n);
 time(&end);
// for(i=0;i<n;i++)
 //  printf("%d   ",data[i]);
  printf("\n%d ",num);
  printf("\n%d ",start);
  printf("\n%d ",end);

}
