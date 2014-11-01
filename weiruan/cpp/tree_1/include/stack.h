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
#endif
