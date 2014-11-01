#ifndef TREE_H
#define TREE_H
#define M 100
template <typename T>
class stack{
	T a[M];
	int i;
	public:
	stack(){i=0;}
	void push(T);
	T pop();
	int empty();
};
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
#endif
