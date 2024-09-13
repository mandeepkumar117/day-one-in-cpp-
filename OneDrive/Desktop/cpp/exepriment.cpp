#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double b,p;
	double power=1;
	cout<<"enter base:"<<endl;
	cin>>b;
	cout<<":enter power:"<<endl;
	cin>>p;
	for(int i=power;i<=p;i++)
	{
	   power =power*b;
	   	
	}
	cout<<b<<"^"<<p<<" = "<<power<<endl;


}
