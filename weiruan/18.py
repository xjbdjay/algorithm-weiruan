#!/usr/bin/python 
a=[]
def joseph(n,m):
	fn=0
	for i in range(2,n+1):
		a.append(fn)
		fn=(fn+m)%i
	return fn

def joseph1(n,m):
	fn=0
	for i in range(n,1,-1):
		fn=(fn+m)%i
		print fn
joseph(111,3)
a.sort()
print a
#print joseph1(111,3)
