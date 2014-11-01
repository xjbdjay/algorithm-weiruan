c=[]
def restore_heap(a,s,end):
	if end<2*s+1:
		return
	while s<end:
		left=2*s+1
		right=2*s+2
		if left<=end:
			if right<=end:
				if a[right]>a[left]:
					min=left
				else:
					min=right
			else:
				min=left
			if a[s]<=a[min]:
				break;
			else:
				tmp=a[s]
				a[s]=a[min]
				a[min]=tmp
				s=min
		else:
			break
			
def build_heap(a,l,h):
	end=(h-1)/2
	for i in range(end,-1,-1):
		restore_heap(a,i,h)
print 'heap_sort module'

def heapsort(a,l,h):
	build_heap(a,l,h)
	for i in range(l,h):
		c.append(a[l])
		a[l]=a[h-i]
		restore_heap(a,l,h-i-1)
	c.append(a[l])
	print c
