#!/usr/bin/python 
#encoding=utf-8
'''微软32'''
import random
a=[]
b=[]
for i in range(1,10):
	a.append(random.randint(1,100))
	b.append(random.randint(1,100))
a.sort()
b.sort()
print a,b

def sum(a):
	s=0
	for i in range(0,a.__len__()):
		s+=a[i]
	return s
def switch(big,small,minus):
	print "switch",minus
	length=big.__len__()
	for i in range(length-1,-1,-1):
		for j in range(0,big.__len__()):
			if big[i]-small[j]>0 and  big[i]-small[j]<minus:
					print big[i],small[j]
					print sum(big),sum(small)
					tmp=big[i]
					big[i]=small[j]
					small[j]=tmp
					while big[i]<big[i-1] and i>0 :
						tmp=big[i-1]
						big[i-1]=big[i]
						big[i]=tmp
						i=i-1
					while j<length-1 and  small[j]>small[j+1] :
						tmp=small[j]
						small[j]=small[j+1]
						small[j+1]=tmp
						j=j+1
					print big
					print small
					return 0
			else:
				pass
	return 1
					
			



def getbalance(a,b):
	sum_a=sum(a)
	sum_b=sum(b)
	if sum_a>sum_b:
		minus=sum_a-sum_b
		if switch(a,b,minus)==0:
			getbalance(a,b)
			return
		else:
			return
	else:
		minus=sum_b-sum_a
		if switch(b,a,minus)==0:
			getbalance(b,a)
			return
		else:
			return 
	
getbalance(a,b)
print a,b
print "success"
