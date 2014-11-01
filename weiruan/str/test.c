#include<stdio.h>
//#include<string.h>
char *strcpy(char *dest,char const *src)
{
	char *address=dest;
	if(dest==NULL || src== NULL)
		return -1;
	while((*dest++=*src++)!='\0');
	return address;
}
char *strcat(char *dest,char const *src)
{
	char *address=dest;
	if(dest==NULL || src== NULL)
		return -1;
	while(*dest!='\0')
		dest++;
	while((*dest++=*src++)!='\0');
	return address;

}
int strcmp(char const *dest,char const * src)
{
	if(dest==NULL || src== NULL)
		return -1;
	while((*dest==*src) && (*dest!='\0'))
	{
		dest++;
		src++;
	}
	return *dest-*src;
}
char * substr(char const *src,char const *sub)
{
	char *p=src;
	char *f=sub;
	char *tmp;
	if(src==NULL || sub==NULL)
		return -1;
	for(;*p!='\0';p++)
	{
		tmp=p;
		for(f=sub;(*f==*tmp) && (*f!='\0');f++,tmp++)
			;
		if(*f=='\0')
			return p;
	}
	return NULL;
/*	while(*p)
	{
		if(*p==*f)
		{
			tmp=p;
			printf("%c\n",*tmp);
			while(*p==*f)
			{
				if(*f=='\0')
					return p-src-1;
				p++;
				f++;
			}
			if(*f=='\0')
				return p-src-1;
			p=tmp;
			f=sub;
		}
		p++;
	}
		return -2;
		*/
}

int main()
{
	char a[20]="sdfkwerj";
	char *s="hello";
	char *p=NULL;
	char *sub="lo";

	a[0]=0;
//	strcat(a,s);
//	strcat(a,p);
//	printf("%s\n",a);
	printf("%d\n",strcmp(a,s));
	puts(strcpy(a,s));
	puts(strcat(a,s));
	printf("%d\n",strcmp(a,s));
	if(p=substr(s,sub))
		printf("%s\n",p);

}
