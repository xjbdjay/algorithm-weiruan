#include "stack.h"
template <typename T>
void stack<T>::push(T p)
{
	a[i++]=p;
}
template <typename T>
T stack<T>::pop()
{
	if(i)
		return a[--i];
}
template <typename T>
int stack<T>::empty()
{
	if(i>0)
		return 0;
	else 
		return 1;
}
