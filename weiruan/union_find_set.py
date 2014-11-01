#!/usr/bin/python  
#encoding=utf-8
import string

#并查集 解决 朋友圈问题

father=[]
for i in range(10):
	father.append(i)

def findset(x):
	px=x
	while px!=father[px]:
		px=father[px]
	while x!=px:  #路径合并
		i=father[x]
		father[x]=px
		x=i
	return x
def unionset(x,y):
	px=findset(x)
	py=findset(y)
	father[px]=py


if __name__=='__main__':
	a=[]
	f=open('./relation','r')
	num=f.readlines()
	for num1,num2 in num:
		print num1
		a.append(string.atoi(num1))
	print father
	for i in range(0,len(a),2):
		print father[1:]
		print a[i],a[i+1]
		unionset(a[i],a[i+1])
	print father[1:]
	for i in range(len(father)):
		findset(i)
	print father


		

