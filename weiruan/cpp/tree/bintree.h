#ifndef BINTREE_H
#define BINTREE_H
#include <iostream>
#include "stack.h"
using namespace std;
struct node
{
	char c;
	struct node *lchild;
	struct node *rchild;
};
typedef struct node Node;
class bintree{
public:
	Node *root;
	bintree(){root=NULL;}
	void create_tree(Node **);
	void preorder(Node *p);
	void postorder(Node *p);
	void midorder(Node *p);
	void midorder_iterate(Node *root);
	void preorder_iterate(Node *root);
	void index(Node *root,Node *pre);//线索化
	void root_to_leaf(Node *root);//线索化
	void delete_node(char value);
};

#endif
