//multiple inheritence->in multiple inheriterce we can inherit more than one class at time
in a multiple inheritence there may be a diamond problem if both the ihertate  classes having the same signature of a function
#include<iostream>
using namespace std;
class sbi
{
	public:void sbishow()
	{
		cout<<"\n SBI CLASS\n";
		
	}
};
class axis
{
	public:void axisshow()
	{
		cout<<"\n AXIS CLASS\n";
	}
};
class customer:public sbi,public axix
{
	public:void show()
	{
		cout<<"\n customer class\n";
	}
};
int main(){
    customer c;
	c.show();
	c.sbishow();
	c.axisshow(); 
}

