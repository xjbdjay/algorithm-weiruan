#!/usr/bin/python 

a=[]
for i in range(0,20):
	a.append(0)
def jump(n,i):
	if n==1:
		a[i]=1
		print a[0:i+1]
		return
	elif n==0:
		print a[0:i]
		return
	else:
		a[i]=1
		jump(n-1,i+1)
		a[i]=2
		jump(n-2,i+1)
		
jump(20,0)
print a[0]
print "success"
