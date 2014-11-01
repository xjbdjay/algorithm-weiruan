#!/usr/bin/python 
#encoding=utf-8
'''顺时针打印数组'''
def clock_print(a):  
	i=1
	j=1
	direct=0  #0是向右 1是向下 2是向左 3是向上
	print a[i][j]
	while 1:
			if direct==0:
				if a[i][j]==0:
					j=j-1
					direct+=1
					i+=1
				else:
					print a[i][j]
					a[i][j]=0
					j+=1
			elif direct==1:
				if a[i][j]==0:
					i=i-1
					direct+=1
					j-=1
				else:
					print a[i][j]
					a[i][j]=0
					i=i+1
			elif direct==2:
				if a[i][j]==0:
					j+=1
					direct+=1
					i-=1
				else:
					print a[i][j]
					a[i][j]=0
					j=j-1
			else :
				if a[i][j]==0:
					i+=1
					direct=0
					j+=1
					if a[i][j]==0:
						break
				else:
					print a[i][j]
					a[i][j]=0
					i=i-1
	print 'success'
					
				

a=[[0]*10 for i in range(10) ]
#b=[0] for i in range(10)
#print b
print  len(a)
num=1
for i in range(1,9):
	for j in range(1,9):
		a[i][j]=num
		num+=1
for i in range(10):
	print a[i]
clock_print(a)
