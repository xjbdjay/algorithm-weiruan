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
		void seta(int c){a=c;}
		int a;
		int b;
};

int main()
{
	int a=10;
	int &b=a;
	int &ab=b;
	ab=5;

	t m(1,2);
	t n(3,4);
	t &mn=m;
	t &nm=n;
	t &c=mn;
	t &d=c;
//	mn.seta(a);
	d.a=3;
	c.seta(20);
	d.printab();
/*	cout<<static_cast<int>(mn)<<endl;
	cout<<static_cast<int>(nm)<<endl;
	*/
}
