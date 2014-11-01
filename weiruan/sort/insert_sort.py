#!/usr/bin/python 

def insertsort(a):
	for i in range(2,len(a)):
		a[0]=a[i]
		j=i-1
		while a[j]>a[0] :
			a[j+1]=a[j]
			j-=1
		a[j+1]=a[0]
