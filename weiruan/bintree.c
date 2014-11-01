#include<stdio.h>
#include<stdlib.h>
#define M 100

struct node
{
	char c;
	struct node *lchild;
	struct node *rchild;
};
typedef struct node Node;
struct stack{
	Node *a[M];
	int i;
	void (*push)(Node *,struct stack *);
	Node * (*pop)(struct stack *);
	int (*empty)(struct stack *);
};
void push(Node *p,struct stack *s)
{
	s->a[s->i++]=p;
	//puts("push");
}
Node * pop(struct stack *s)
{
	if(s->i>0)
		return s->a[--s->i];
}
int empty(struct stack *s)
{
	if(s->i>0)
		return 0;
	else 
		return 1;
}
struct stack s={
	.i=0,
	.push=push,
	.pop=pop,
	.empty=empty
};
char tree[100]="ABC00D00EF00GH000";
int i=0;
void create_tree(Node **root)
{
	char c;
	Node *p;
	c=tree[i++];
	if(c=='0')
	{
		*root=NULL;
		return;
	}
	if((p=(Node *)malloc(sizeof(Node)))==NULL)
	{
		printf("malloc failed\n");
		exit(-1);
	}
	p->c=c;
	*root=p;
	create_tree(&p->lchild);
	create_tree(&p->rchild);
}
void preorder(Node *p)
{
	putchar(p->c);
	if(p->lchild)
		preorder(p->lchild);
	if(p->rchild)
		preorder(p->rchild);
}
void postorder(Node *p)
{
	if(p->lchild)
		postorder(p->lchild);
	if(p->rchild)
		postorder(p->rchild);
	putchar(p->c);
}
void midorder(Node *p)
{
	if(p->lchild)
		midorder(p->lchild);
	putchar(p->c);
	if(p->rchild)
		midorder(p->rchild);
}
void midorder_iterate(Node *root)
{
	Node *p;
	s.push(root,&s);
	while(!s.empty(&s))
	{
		p=s.pop(&s);
		s.push(p,&s);
		while(p->lchild)
		{
			s.push(p->lchild,&s);
			p=p->lchild;
		}
		p=s.pop(&s);
		putchar(p->c);
		while(!p->rchild && !s.empty(&s))//一定要加empty，有可能已经访问到最后一个节点，导致堆栈里面没有了
		{
			p=s.pop(&s);
			putchar(p->c);
		}
		if(p->rchild)
			s.push(p->rchild,&s);
	}
}
void preorder_iterate(Node *root)
{
	Node *p;
	s.push(root,&s);
	while(!s.empty(&s))
	{
		p=s.pop(&s);
		putchar(p->c);
		while(p->lchild)
		{
			if(p->rchild)
				s.push(p->rchild,&s);
			putchar(p->lchild->c);
			p=p->lchild;
		}
/*		if(!s.empty(&s))
		{
			p=s.pop(&s);
			putchar(p->c);
		}
		*/
		if(p->rchild)
			s.push(p->rchild,&s);
	}
}
//测试用例  ABC00D00EF00GH000
int main()
{
	Node *root=NULL;
	create_tree(&root);
	preorder(root);
	putchar('\n');
	preorder_iterate(root);
//	postorder(root);
	putchar('\n');
	midorder(root);
	putchar('\n');
	puts("iterate");
	midorder_iterate(root);
	putchar('\n');
/*	while(!s.empty(&s))
	{
		root=s.pop(&s);
		putchar(root->c);
	}
	*/
}

	

