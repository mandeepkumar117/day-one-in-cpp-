//copy constructor->type->
//1)shallow ->ek hi address ko share karte hai.by defoult class having a shallow copy structure.we need not cteate it and it share the address
//of exixt object to a new one
//2)deep
//syntax of shalow copy

//classname objectname2(objectname1)
//1)shalow copy
#include<iostream>
using namespace std;
#include<string.h>
class top
{
	int n;
	public: top(int a)
	{
		n=a;
	}
	void show()
	{
		cout<<"account no= "<<n<<"\n";
	}
};



int main(){
	top t1(78935);
	top t2(t1);
	t1.show();
	t2.show();

//===================================================//
//deep copy
}

