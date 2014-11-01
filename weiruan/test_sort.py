#!/usr/bin/python 
from sort import quick_sort, shell_sort,heap_sort,insert_sort
import random
a=[]
b=[]
c=[]
d=[]
e=[]
for i in range(0,20):
	a.append(random.randint(0,100))
	b.append(random.randint(0,100))
	c.append(random.randint(0,100))
	d.append(random.randint(0,100))
	e.append(random.randint(0,100))
quick_sort.quicksort(a,0,19)
#quick_sort.quicksort_(b,0,19)
quick_sort.quicksort_1(b,0,19)
quick_sort.quicksort_2(e,0,19)
heap_sort.heapsort(c,0,19)
#quick_sort.quicksort_(a,0,19)
#shell_sort.shellsort(b,20)
insert_sort.insertsort(d)
print a
print b
print c
print d
print e

