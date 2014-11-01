#!/usr/bin/python 
import random
def shellsort(a,n):
	k=n/2
	while k>0:
		for i in range(k,n):
			tmp=a[i]
			j=i-k
			while tmp<a[j] and j>=0:
				a[j+k]=a[j]
				j=j-k
			a[j+k]=tmp
		k/=2

'''a=[]
for i in range(30):
	a.append(random.randint(1,100))
print a

shellsort(a,30)
'''
print 'shell_sort module'

