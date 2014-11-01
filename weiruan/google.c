#include<stdio.h>
#define SWAP(a,b) do {a=a^b,b=a^b,a=a^b;} while(0);
int num=0;

void print(int a[],int length)
{
	int i;
	for(i=0;i<length;i++)
		printf("%d  ",a[i]);
	printf("\n");
}
void reverse(int a[],int length)
{
	int i=0,j=length-1;
	while(i<j)
	{
		SWAP(a[i],a[j])
		num++;
		i++;
		j--;
	}
	return;
}

void shiftn(int a[],int length,int n)
{
	reverse(a,length-n);
	reverse(a+length-n,n);
	reverse(a,length);
}

void perfect(int a[],int length)
{
	int i,length1,length2;
	print(a,length);
	if(length==6)
	{
		shiftn(a+1,4,2);
		SWAP(a[2],a[3])
	}
	else if(length==4)
		SWAP(a[1],a[2])
	else
	{
	i=length/2;
	if(i%2)  //如果是50 则要分拆成24+26
	{
		length1=i-1;
		length2=i+1;
	}
	else 
		length1=length2=i;
//	printf("%d    %d\n",length1,length2);
	shiftn(a+length1/2,i,length1/2);
	perfect(a,length1);
	perfect(a+length1,length2);
	}
	return;
}

	

void main()
{
	int a[20000];
	int i,j;
	for(i=0;i<20000;i++)
		a[i]=i;
	perfect(a,20000);
	//shiftn(a,20,9);
	//reverse(a,20);
	print(a,20000);
	printf("%d   \n",num);
	return;
}
//five
