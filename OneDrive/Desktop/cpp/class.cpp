//note->we can use function inside a class ib 2 ways
//1.function declare &  define inside a class
//2)function declare on a class but define outside of class

#include<iostream>
using namespace std;
class cybrom
{
	int a,b;
	public:
		void sum(int x, int y);
		int cube(int a);
};
//datatype classname:: functionname(parameter)
void cybrom::sum(int x, int y)
{
	cout<<x+y<<"\n";
}
int cybrom::cube(int a)
{
	cout<<a*a*a<<"\n";
}
int main(){
    cybrom c;
    c.sum(4,6);
    c.cube(5);
}

