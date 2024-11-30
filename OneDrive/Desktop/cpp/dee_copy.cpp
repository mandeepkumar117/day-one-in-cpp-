#include<iostream>
using namespace std;
#include<string.h>
//deep copy->it gets copy the content of previous object into a new one object and crete a new memory allocation of it
class top
{
	char *x;
	public:top(char *n)
	{
		x=new char[20];
		strcpy(x,n);
	}
	top(top &ob)
	{
		x=new char[20];
		strcpy(x,ob.x);
	}
	void concat(char *s)
	{
		strcat(x,s);
	}
	void show()
	{
		cout<<"mame="<<x<<"\n";
	}
};
int main(){
    top t1("Amait");
    top t2(t1);
    t1.show();
    t2.show();
    t1.concat("kumar");
    cout<<"title with t2\n";
    t2.show();
//    cout<<"title with t1\n";
//    t1.show();
}

