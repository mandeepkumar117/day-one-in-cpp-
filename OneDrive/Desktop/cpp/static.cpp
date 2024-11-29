#include<iostream>
using namespace std;
//static int a; //static value share hota hai
// int a;//static value share hota hai.ye bhi static value hai
void show()
{
//	int a; //ye bhi static value hai
    static int a=0;
	a++;
	cout<<a<<"\t";
}
int main(){
    show();
    show();
    show();
}

