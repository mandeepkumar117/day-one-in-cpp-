//types of class->there are many typesbof class
//1)singlr class->if a program having only  one class called single class
//2)anonomous ->there is no name of function is called anonomous function. a class which does not have own name of class called an0nomous function
//    note->an anonomous class we have to create an object while we creating it
//3)multi class->if a class having  more than one class is called multi classess.
//4)composite class->composite class contain the object of previous class.a class which holds the  object of previous class

#include<iostream>
//this is multi class
using namespace std;
//class top1
//{
//	public:
//		void show()
//		{
//			cout<<"top1 class\n";
//		}
//};
//class top2
//{
//	public:
//		void display()
//		{
//			cout<<"top2 class\n";
//		}
//};

//composite class

class hacker
{
	public:void virus()
	{
		cout<<"ur system hacked\n";
	}
};
class user
{
	hacker h;
	public:void reward()
	{
		cout<<"u won RS 20000000 in littory system\n";
		h.virus();
	}
};
int main(){
//    top1  t1;
//    t1.show();
//    top2 t2;
//    t2.display();

    user cust;
    cust.reward();
}

