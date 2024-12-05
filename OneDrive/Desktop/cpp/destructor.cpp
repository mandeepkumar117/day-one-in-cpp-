//destructor->it is use to dealocates the memory of accupies object
//synatx:
//~classname()
//{
//   staement/code;
//}
#include<iostream>
using namespace std;
class top
{
	int x=10;
	public:top()
	{
		cout<<x<<"\n";
	}
	~top()
	{
		cout<<"memory released";
	}
};
int main(){
    top t;
    top t1;
}

