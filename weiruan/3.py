#!/usr/bin/python
a=[1,-2,3,10,-4,7,2,-5,-45,19]
def calmaxsub():
	sum=0;
	b=[]
	max=0
	min=0
	length=a.__len__()
	for i in range(0,length):
		sum+=a[i]
		b.append(sum)
	for i in range(0,length):
		if b[i]>max:
			max=b[i]
		if b[i]<min:
			min=b[i]
	print "max min",max,min
		
		
def getmax(fr,to):  
	sum=0
	max=0
	if fr==to:
		return a[fr]
	for i in range(fr,to):
		sum+=a[i]
		if sum>max:
			max=sum
	return max

max=0
sum=0
start=0;
length=a.__len__()
for i in range(0,length):
	sum+=a[i]
	if sum < 0 or i==(length-1):
		l=getmax(start,i)
		if max < l :
			max=l
		start=i+1
		sum=0
		
print "max is ",  max
calmaxsub();
