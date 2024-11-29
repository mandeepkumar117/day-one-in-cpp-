#include<iostream>
using namespace std;
//int cybrom(int a){
//	if(a<1){
//		return a;
//	}
//	cout<<a<<"\t"<<"\n"; //head recursion
//	cybrom(a-1);
//	cout<<a<<"\t"; //tail recursion
//}


//void cybrom1(int a,int b,int c){
//	if(b>c){
//		return; 
//	}
//	cout<<a<<"*"<<b<<"="<<a*b<<endl;
//	cybrom1(a,b+1,c);
//}
//another type

//void table(int t, int c=1){
//	if(c>10){
//		return;
//	}
//	cout<<t<<"*"<<c<<"="<<t*c<<"\n";
////	table(t,c+1); // another method
//table(t,++c); //yahan per post increement kaam nahi karta hai
//}

int fact(int f,int c=1){
	if(f<=1){
		return 1;
	}
	cout<< f * fact(f-1);
}
int main(){
//    cybrom(5);
//    int num,limit;
//    cout<<"enter any number"<<"\n";
//    cin>>num;
////    cout<<"enter limit";
////    cin>>limit;
//    table(num);
    int num;
    cout<<"eneter number";
    cin>>num;
    int result=fact(num);
//    cout<<"factorial of "<<num<<" is: "<<result<<endl;
}

