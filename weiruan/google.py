#!/usr/bin/python 

def reverse(a,length):
	i=0
	j=length-1
	while i<j:
		t=a[i]
		a[i]=a[j]
		a[j]=t
		i+=1
		j-=1
def shift(a

		



a=[]
for i in range(1001,2001):
	a.append(i)
for i in range(2001,3001):
	a.append(i)
print a
