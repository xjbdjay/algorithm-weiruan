
def quicksort(a,l,h):
	if l>=h:
		return
	tmp=(l+h)/2
	t=a[l]
	a[l]=a[tmp]
	a[tmp]=t
	m=l+1
	for i in range(l+1,h+1):
		if(a[i]<a[l]):
			t=a[m]
			a[m]=a[i]
			a[i]=t
			m=m+1
	t=a[m-1]
	a[m-1]=a[l]
	a[l]=t
	quicksort(a,l,m-2)
	quicksort(a,m,h)
	return
print 'quick_sort module'
def quicksort_1(a,l,h):
	if l>=h:
		return
	i=l+1
	#i=l
	j=h
	tmp=a[l]
	while i<j:
		try:
			while a[i]<tmp and i<j:
				i+=1
			while a[j]>tmp and i<j:
				j-=1;
			if i==j:
				break;
			else:
				t=a[i]
				a[i]=a[j]
				a[j]=t
		except:
			print i,j
	if a[i]>tmp:
		i-=1;
	t=a[i]
	a[i]=a[l]
	a[l]=t
	quicksort_1(a,l,i-1)
	quicksort_1(a,i+1,h)

def quicksort_2(a,l,h):
	i=l
	j=h
	if i>=j:
		return
	tmp=a[l]
	while i<j:
		try:
			while a[j]>=tmp and i<j:
				j-=1
			a[i]=a[j]
			while a[i]<=tmp and i<j:
				i+=1
			a[j]=a[i]
		except:
			print "except",i,j
	a[i]=tmp
	quicksort_2(a,l,i-1)
	quicksort_2(a,i+1,h)

	
