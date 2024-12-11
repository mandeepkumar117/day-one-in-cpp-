//note->
//multiple function ->different types of function like A(),B(),C()etc
//function overloading->same type of function but parameter deferent like A(),A(int a),A(int c).etc
//function overrriding->same types of fnction and parameter same is calles fun overriding.like A(int a),A(int a),A(int a).etc


#include<iostream>
using namespace std;
class RBI
{
	public:void f1()
	{
		cout<<"\nRBI CLASS\n";
		
	}
};
class SBI:virtual public RBI
{
	public:void f2()
	{
		cout<<"\nSBI CLASS\n";
	}
};
class AXIS:virtual public RBI
{
	public:void f3()
	{
		cout<<"\nAXIS CLASS\n";
	}
};
class CUSTOMER:public SBI,public AXIS
{
	public:void f4()
	{
		cout<<"\nCUSTOMER CLASS\n";
	}
};
int main(){
    CUSTOMER obj;
	obj.f1(); //yahan per dimond problem create hoga.is problem ko solve karne ke liye virttual key ka use kar len
	obj.f2();
	obj.f3();
	obj.f4(); 
}

