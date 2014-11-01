#include<iostream>
#include<cstdio>
using namespace std;

class t{
	public:
		t(int c,int d):a(c),b(d){}
		~t(){cout<<"destructed"<<endl;}
		t(t& e){a=e.a;b=e.b;cout<<"copy constructed"<<endl;}
		t& operator=(t& rhs){a=rhs.a;b=rhs.b;cout<<"= operator"<<endl;}
		t& operator+(t& rhs){a=a+rhs.a;b=b+rhs.b;cout<<"+ operator"<<endl;return *this;}
		bool operator<(t& rhs){if((a+b)<(rhs.a+rhs.b)) return true;else return false;}
//		void operator<<(t &){cout<<t.a<<endl;}
		void printab(){cout<<a<<"  "<<b<<endl;}
	private:
		int a;
		int b;
};

int main()
{
	int a=2;
	int &b=a;
	int &ab=a;
	ab=4;
	printf("a is %d b is %d\n",a,b);
	t m(1,2);
	t n(3,4);
	t &mn=m;
	mn.printab();
	if(m<n)
		cout<<"m<n"<<endl;
	else
		cout<<"no <"<<endl;
	m.printab();
	n.printab();
	m=n;
	m.printab();
	t c(m);
	c.printab();
	t d(c);
	d=m+n;
	m.printab();
	d.printab();

	
}
