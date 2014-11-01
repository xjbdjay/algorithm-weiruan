#include <iostream>
#include "stack.h"
using namespace std;

int main()
{
	class stack<int> s;
	s.push(1);
	s.push(2);
	s.push(3);
	while(!s.empty())
	{
		cout<<s.pop()<<endl;
	}
	return 1;
}


