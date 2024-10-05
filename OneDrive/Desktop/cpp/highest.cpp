//wap to find the highest digit in a number n
#include<iostream>
using namespace std;
int main(){
//	int num,last;
//	cout<<"Enter number:"<<endl;
//	cin>>num;
//	int high=0;
//	while(num>0){
//		last=num%10;
//		if(last>high)
//		
//			high=last;
//	    	num=num/10;
//		
//	}
//	cout<<high;


//find lowest number

int num,last;
	cout<<"Enter number:"<<endl;
	cin>>num;
	int high=9;
	while(num>0){
		last=num%10;
		if(last<high)
		
			high=last;
	    	num=num/10;
		
	}
	cout<<high;



}
