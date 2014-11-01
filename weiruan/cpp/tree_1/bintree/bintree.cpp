#include "bintree.h"

char tree[100]="ABC00D00EF00GH000";
int i=0;
void bintree::create_tree(Node **root)
{
	char c;
	Node *p;
	c=tree[i++];
	if(c=='0')
	{
		*root=NULL;
		return;
	}
	p=new Node;
	p->c=c;
	*root=p;
	create_tree(&p->lchild);
	create_tree(&p->rchild);
}
int n=20;
void bintree::preorder(Node *p)
{
	if(n--<0)
		return;
	cout<<p->c;
	if(p->lchild)
		preorder(p->lchild);
	if(p->rchild)
		preorder(p->rchild);
}
void bintree::postorder(Node *p)
{
	if(p->lchild)
		postorder(p->lchild);
	if(p->rchild)
		postorder(p->rchild);
	cout<<p->c;
}
void bintree::midorder(Node *p)
{
	if(p->lchild)
		midorder(p->lchild);
	cout<<p->c;
	if(p->rchild)
		midorder(p->rchild);
}
void bintree::midorder_iterate(Node *root)
{
	stack<Node *> s;
	Node *p;
	s.push(root);
	while(!s.empty())
	{
		p=s.pop();
		s.push(p);
		while(p->lchild)
		{
			s.push(p->lchild);
			p=p->lchild;
		}
		p=s.pop();
		cout<<p->c;
		while(!p->rchild && !s.empty())//一定要加empty，有可能已经访问到最后一个节点，导致堆栈里面没有了
		{
			p=s.pop();
			cout<<p->c;
		}
		if(p->rchild)
			s.push(p->rchild);
	}
	
}
void bintree::preorder_iterate(Node *root)
{
	stack<Node *> s;
	Node *p;
	s.push(root);
	while(!s.empty())
	{
		p=s.pop();
		cout<<p->c;
		while(p->lchild)
		{
			if(p->rchild)
				s.push(p->rchild);
			cout<<p->lchild->c;
			p=p->lchild;
		}
		if(!s.empty())
		{
			p=s.pop();
			cout<<p->c;
		
		if(p->rchild)
			s.push(p->rchild);
	}
}
}
void bintree::index(Node *root,Node *pre)
{
	if(root)
	{
		index(root->lchild,pre);
		if(!root->lchild)
		{
			root->lchild=pre;
		}
		if(!pre->rchild)
			pre->rchild=root;
		pre=root;
		index(root->rchild,pre);
	}
	return;
}
	
stack<Node *> s;
void bintree::root_to_leaf(Node * root)
{
	s.push(root);
	if(root->lchild)
		root_to_leaf(root->lchild);
	if(root->rchild)
		root_to_leaf(root->rchild);
	if(root->lchild==NULL && root->rchild==NULL)
	{
		stack<Node *> tmp;
		Node *p;
		while(!s.empty())
		{
			p=s.pop();
			tmp.push(p);
			cout<<p->c<<" ";
		}
		cout<<endl;
		while(!tmp.empty())
		{
			p=tmp.pop();
			s.push(p);
		}
	}
	s.pop();
	return;

}
	

