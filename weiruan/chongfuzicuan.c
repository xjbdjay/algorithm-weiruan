#include<stdio.h>
#include<stdlib.h>

void LongChar(char* str)
{
	int  i,k,j;
 if(str==NULL)
  return;
 int max=0;
 int first=0;
 int count=0;
 for(i=1;i<strlen(str);i++)
  for(k=0,j=0;j<strlen(str)-i;j++)
  {
   if(str[j]==str[i+j])k++;
   else
    k=0;
   if(k>max)
   {
    max=k;
    first=j-k+1;
   }
  }
  if(max>0)
  {
   printf("long:\n",max);
   for(;count<max;count++)
    printf("%c ",str[first+count]);
    printf("\n");
  }
}
int main()
{
 char* str="abcdabcabcd";
 LongChar(str);
 return 0;
}
