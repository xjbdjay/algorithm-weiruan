#!/usr/bin/python 
#encoding=utf-8

'''微软面试100题之30'''

def get_num_one(n):
	a=[]
	sum=0
	m=n
	while n !=0:
		a.append(n%10)
		n=n/10
	print a
	for i in range(0,len(a)):
		tmp=0
		if i==0:
			j=1
			while j<len(a):
				tmp=tmp*(a[j]+1)
				sum+=tmp
		elif i==len(a)-1:
			while 


	return

get_num_one(1225)
