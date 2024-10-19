//
calling type->
//1)Implicit calling->these are calling automatic 
//2)Explicit calling->in this calling we have to call this function also these are force calling
#include<iostream>
using namespace std;

void show(){  //no return without parameter
	cout<<"welcome\n";
}
void sum(int a,int b){ //formal parameter
	cout<<a+b;
}


int main(){
	show();
	int a1,b1;
	cout<<"enter two number\n";
	cin>>a1>>b1;
	sum(a1,b1); //actual parameter

}

