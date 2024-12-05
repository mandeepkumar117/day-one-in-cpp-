//operator overloading->operatoor overloading is use to redefine the nature of the operator for non premetive datataype
//there are two type overloading
//1)unary operator overloading
//2)binary operator overloading
//note->it use to solve the complex data tuype

#include<iostream>
using namespace std;

//1)unary operator overloading
//ex 1
//class top
//{
//	int x;
//	pubic:top(int a)
//	{
//		x=a;
//	}
//};
//ex 2

//class top 
//{
//	int x=10;
//	public: top()
//	{
//		cout<<x;
//	}
//	~top()
//	{
//		cout<<"memory reseelsed";
//	}
//};

class top
{
	int x;
	public:top(int a){
		x=a;
//		cout<<x;
	}
	void operator ++(){
		x++;
		cout<<x;
	}
	
};

//binary operator overloading

//class top
//{
//	int a,b;
//	public:top(int kg ,int grm)
//	{
//		a=kg;
//		b=grm;
//	}
//	top operator +(top obj)
//	{
//		top t2(obj);
//		t2.a+=obj.a;
//		t2.b+=obj.b;
//		cout<<"total kilogram= "<<t2.a<<"\n";
//		cout<<"total gram= "<<t2.b<<"\n";
//	}
//};
int main(){
//	ex 1
    top t1(3);
    t1.operator ++();
++t1;
//    top t2(6);
//    cout<<t1+t2;
//ex 2
//   top t;
//   binary operator overloading
//    top p1(20,30);
//    top p2(90,10);
//    p1 + (p2);
}

