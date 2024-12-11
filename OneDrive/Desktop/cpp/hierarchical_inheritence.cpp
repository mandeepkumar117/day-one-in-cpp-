//hierarchical inheritance->in hierarchical inheratance there is only one parent class and multiple children
// classess and each class inherite the property of root class
#include<iostream>
using namespace std;
class university
{
	public:void show()
	{
		cout<<"\nwelcome\n";
	}
};
class c1:public university
{
	public:void msg(){
		cout<<"\ncollege1\n";
	}
};
class c2:public university
{
	public:void msg()
	{
		cout<<"\college2\n";
	}
};
int main(){
    c1 obj1;
    obj1.msg();
    obj1.show();
    
    c2 obj2;
    obj2.msg();
    obj2.show();
}

