#include "bintree.h"
//测试用例  ABC00D00EF00GH000
int main()
{
	bintree t;
//	Node *root=NULL;
	t.create_tree(&t.root);
	t.preorder(t.root);
	cout<<endl;
	t.postorder(t.root);
	cout<<endl;
	t.midorder(t.root);
	cout<<endl;
	t.preorder_iterate(t.root);
	cout<<endl;
	t.midorder_iterate(t.root);
	cout<<endl;
	t.root_to_leaf(t.root);
	cout<<endl;
	t.index(t.root,t.root);
	t.preorder(t.root);
	
//	postorder(root);
//	putchar('\n');
/*	midorder(root);
	putchar('\n');
	puts("iterate");
	midorder_iterate(root);
	putchar('\n');
	*/
/*	while(!s.empty(&s))
	{
		root=s.pop(&s);
		putchar(root->c);
	}
	*/
	return 1;
}

	

