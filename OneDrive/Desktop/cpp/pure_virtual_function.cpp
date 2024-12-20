//pure virtual function->pure virtuala function is intialize by  zero. a class which contain a pure virtual function is called pure virtual function.
//and we have to override the pure virtual function in each child class otherwise it will not allow to acocate the memory object of child class
#include<iostream>
using namespace std;
class RBI
{
	public:virtual void helpdesk()=0;
	void fun()
	{
		cout<<"\n"
	}
};
class SBI:public RBI
{
	public:void loan()
	{
		cout<<"\nInterest rate 9%\n";
	}
	void helpdesk()
	{
		cout<<"\n may i help you\n";
	}
};
class AXIS:publi RBI
{
	public:void loan()
	{
		cout<<"\nInterest rate 10%\n";
	}
	void helpdesk()
	{
		cout<<"\nAXIS,may i help you\n";
	}
};
int main(){
    RBI *r;
    SBI s;
    r=&s;
    r->helpdesk();
    AXIS a;
    r=&a;
    r->helpdesk()
}

