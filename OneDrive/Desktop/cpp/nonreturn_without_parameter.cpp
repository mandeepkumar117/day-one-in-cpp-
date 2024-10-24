//
//calling type->
//1)Implicit calling->these are calling automatic 
//2)Explicit calling->in this calling we have to call this function also these are force calling
//wap to findout the gratest number between two using function
//wap to findout the squre rout of any number
//wap for swapping using function using two variables
#include<iostream>
using namespace std;

//void show(){  //no return without parameter
//	cout<<"welcome\n";
//}
//void sum(int a,int b){ //formal parameter
//	cout<<a+b<<"\n";
//}

//void square(int a){
//	int sq=a*a;
//	cout<<"square of number="<<sq<<endl;
//}

//void add(int a=9,int b=0,int c=0){
//	cout<<"result= "<<a+b+c<<"\n";
//}

// int fact=1;
//void factorial(int a){
	
//	for(a; a>0; a--){
//		fact=fact*a;
//	}
//	
//}
//void display(){
//	cout<<"factorial of number is= "<<fact;
//}

void swap(int &a, int &b){ //call by reference
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<"value of a= "<<a<<"\n";
	cout<<"value of b= "<<b<<"\n";
}


int main(){
//	show();
//	int a1,b1;
//	cout<<"enter two number\n";
//	cin>>a1>>b1;
//	sum(a1,b1); //actual parameter
//	add();
//	square(2);
//	factorial(5);
//	display();

 int x,y;
cout<<"enter 2 no\n";
cin>>x>>y;
swap(x,y);
cout<<"value of x= "<<x<<"\n";
cout<<"value of y= "<<y<<"\n";



}

