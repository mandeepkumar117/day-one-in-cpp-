#include<iostream>
#include<cmath>
using namespace std;


int main()
{
int num,sum=0,last,length=0;
cout<<"enter num:";
cin>>num;
int temp=num; //153
while(num>0){  //7865
	num=num/10;
	length++;
}
//cout<<length; //3
num=temp;
while(num>0){
	last=num%10;
	sum=sum+pow(last,length);  // 3^3+5^3
	num=num/10;
}
if(temp==sum){
	cout<<temp<<endl;
}
}
