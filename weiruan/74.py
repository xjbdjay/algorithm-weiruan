#!/usr/bin/python 
#encoding=utf-8
'''
算法比较经典，连续出现的数字会累加，否则就减一，这样很容易知道次数超过一半的元素
'''

def getMajor(a,n):
	cnt=0
	for i in range(0,n):
		if cnt==0:
			x=a[i]
			cnt+=1
		elif a[i]==x:
			cnt+=1
		else:
			cnt-=1
	return x

a=[1,2,1,2,1,1,1,1,2,2]
print getMajor(a,10)


