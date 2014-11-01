#!/usr/bin/python 
#encoding=utf-8
#12个高低不同的人排成两队，各队按递增顺序，且第一队比第二队对应的人高

def sort_two_colum(a,b,i,j,n):
	if i==6:
		print a
		while n<13:
			b[j]=n
			j+=1
			n+=1
		print b
		return
	if i>j:
			a[i]=n
			sort_two_colum(a,b,i+1,j,n+1)
			b[j]=n
			sort_two_colum(a,b,i,j+1,n+1)
	if i==j :
		a[i]=n
		sort_two_colum(a,b,i+1,j,n+1)
if __name__=='__main__':
	a=[0]*6
	b=[0]*6
	sort_two_colum(a,b,0,0,1)

	

