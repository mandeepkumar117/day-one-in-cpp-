#include<iostream>
using namespace std;
int main()
{

for(int i=200;i<=1000;i++){


int num=i,sum=0,last;
int temp=num;
while(num>0){
	last=num%10;
	sum=sum+last*last*last;
	num=num/10;
}
if(temp==sum){
	cout<<temp<<endl;
}
}
}
