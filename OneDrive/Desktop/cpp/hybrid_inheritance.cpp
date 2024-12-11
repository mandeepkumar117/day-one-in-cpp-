#include<iostream>
using namespace std;
class rbi
{
	public:void show()
	{
		cout<<"\n welcome to my rbi bank\n";
	}
};
class sbi:public rbi
{
	public:void display()
	{
		cout<<"\n welcome to my sbi bank\n";
	}
};
class axis:public rbi
{
	public:void run()
	{
		cout<<"\nwelcom to my aix bank\n";
	}
};
class customer:public axis,public sbi
{
	public:void runfast()
	{
		cout<<"\n my services is fast rather than another bank\n";
	}
};

int main(){
	customer c;
	c.show();

}

