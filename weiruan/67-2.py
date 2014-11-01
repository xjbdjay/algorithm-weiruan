#!/usr/bin/python 
#encoding=utf-8

'''
浅拷贝
a=[[]]*10
'''
a=[[] for i in range(10)] #深拷贝
for i in range(6):
	a[1].append(1.0/6)
print a
def get_possible(a,n):
	for i in range(2,n+1):
		for s in range(i,6*i+1):
			tmp=0
			for j in range(1,7):
				if s>j and (s-j)<=(i-1)*6 :
					try:
						tmp+=a[i-1][s-j-i+1]/6
					except:
						print i-1,s-j-i+1
						print 's=%d,j=%d' %(s,j)
						print a[i-1]
						return
			a[i].append(tmp)
get_possible(a,6)
for j in range(6):
	tmp=0
	for i in range(len(a[3])):
		tmp+=a[3][i]
	print tmp



