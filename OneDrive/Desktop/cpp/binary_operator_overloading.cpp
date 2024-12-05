#include<iostream>
using namespace std;
class top 
{
	int a,b;
	public:top()
	{
		a=kg;
		b=grm;
	}
	top operator +(top obj)
	{
		top t(obj);
		t.a=a+obj.a;
		t.b=b+obj.b;
		cout<<"kg="<<t.a<<"\t";
		cout<<"gram= "<<t.b<<"\t";
		return t;
	}
};
int main(){
    top p1(20,30);
    top p2(90,10);
    p1 + p2;
}

