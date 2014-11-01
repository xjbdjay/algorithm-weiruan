#!/usr/bin/python 
#coding=utf-8
'''微软面试21题'''

a=[]
for i in range(0,20):
	a.append(0)
def jump(n,m,i):
	if m==0:
		print a[0:i]
		return
	else:
		if n>m:
			j=m
		else:
			j=n
		while j*(j+1)>=m/2 and j>0:
			a[i]=j
			jump(j-1,m-j,i+1)
			j=j-1
		
jump(30,40,0)
print a[0]
print "success"
