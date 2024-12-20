//Polymorphism types->
//1)Early binding or compile time->
    //a)Normal object
    //b)function overloading
    //c)operator overloading
//2)Late Binding or Run time->
    //a)pointer & Normal object
    //b)virtual function
    //c)function overriding
    //d)pure virtual  function
    //e)Abstract class
    //f)Super class
    
//super class->super class always having a virtual function   and we create pointer object and non pointer object of it .
//and we always pass the address of the object of  non super class and get the member function by using this(->) arrow function
#include<iostream>
using namespace std;
class RBI
{
	public:virtual void msg()
	{
		cout<<"\nRBI CLASS\n";
	}
};
class SBI:public RBI
{
	public:void msg()
	{
		cout<<"\nSBI CLASS\n";
	}
};
class PNB:public RBI
{
	public:void msg()
	{
		cout<<"\nPNB CLASS\n";
	}
};
int main(){
    RBI *obj;
    RBI r;
    obj=&r;
    obj->msg();
    SBI s;
    PNB P;
    obj=&P;
    obj->msg();
    obj=&s;
    obj->msg();
}

