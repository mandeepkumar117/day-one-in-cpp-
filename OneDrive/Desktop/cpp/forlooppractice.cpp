#include<iostream>
using namespace std;
int main(){
//    int num ,table;
//    cout<<"Enter number:";
//    cin>>num;
//    for(int i=1;i<=10;i++){
//    	if(i%3!=0){
//    		table=num*i;
//    	cout<<"table of:"<<num<<" * "<<i<<" = "<<table<<endl;
//		}
//	}


//wap to print even numlbers from 1 to 100
//int num;
//cout<<"enter number:";
//cin>>num;
//for(int i=1;i<=num;i++){
//	if(i%2==0){
//		cout<<i<<" ";
//	}
//}
//for(intj=2;j<=100;j=j+2){
//	cout<<j<<",";
//}

//wap to print your name 100 times
  
//  for(int i=1;i<=100;i++){
//  	cout<<"mandeep"<<" ";
//  }

//jaise ki aaap instagram per dekhte hai,numrologiy main mul ank ka bahut jaruri hai.
//wap to accept date of birthof user in the format DDMMYYYY like 15071985.and print mul ank.mul ank hota
//date of birth sabhi digit ka sum.agar wo sum single digit  hai to wo mul ank hai nahi to uska mul ank banana padwega 
//kaise agar sum 2 dihgit aaya to undono digit ka sum karna padega

int num,last,sum =0;
cout<<"enter datof birth:";
cin>>num;
cout<<num<<"\n";
if(num > 9999999 && num < 1000000000){

while(num>0){
	last=num % 10;
	sum=sum + last;
	num=num / 10;
}
int sum1 = 0;
if(sum > 9){
	while(sum>0){
		last = sum % 10;
	    sum1 = sum1 + last;
	    sum = sum / 10;
	}
}
cout<<"mulank:"<< sum1 <<"\n";

}
else{
	cout<<"invalid number"<<"\n";
}
}

