#include<iostream>
using namespace std;
class top1
{
	int x,y;
};
class top2
{
	top1 obj;
	int temp;
	public: void swap(int a, int b)
	{
		obj.x=a;
		obj.y=b;
		temp=obj.x;
		obj.x=obj.y;
		obj.y=temp;
	}
};
int main(){
    top2 ob;
    ob.swap(2,3);
}

