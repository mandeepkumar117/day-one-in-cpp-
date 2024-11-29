//function overloading in a class->if a class having more than one function with diferent parameter
//but function name are same is called function overloading
#include<iostream>
using namespace std;
class cybrom
{
	int a,b;
	public:
		void sum(int x, int y);
		void sum(int a,int b, int c);
		
};
void cybrom::sum(int x, int y)
{
	cout<<x+y<<"\n";
}
void cybrom::sum(int a, int b, int c)
{
	cout<<a+b+c<<"\n";
}
int main(){
    cybrom c;
    c.sum(4,6);
    c.sum(5,7,6);
}

