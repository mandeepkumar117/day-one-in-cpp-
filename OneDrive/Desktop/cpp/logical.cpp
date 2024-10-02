 //logical
//    and(&&)                         or(||)                     not(!)            xor(exclusive or)
//    0 0 =0                          0 0 =0                     0 =1              0 0 =0
//    0 1 =0                          0 1 =1                     1 =0              0 1 =1
//    1 0 =0                          1 0 =1                                       1 0 =1
//    1 1 =1

//                -3,-2,-1,0,1,2,3,4,5//that is how to find compliment

//note-->right shift  and left shift operator can only deal with possitive number i negative number they show undefine behaviour
//right shift operator>>
//examole-->23=1 0 1 1 1 
//          shifted 23>>2
//             1 0 1 |1 1
//		     ans=4 |
//	40=1 0 1 0 0 0 |
//shifted 40>>2	   |            
//          1 0 1 0|0 0  //ismain do age wale ko remove kar deta hai
//           ans=10 



#include<iostream>
using namespace std;
int main()
{
//	int a=40,b=20, c=50;
//	cout<<"not of -->(a>b || a!=c)-->"<<!(a>b ||a!=c)<<endl;
//	int length=90;
//	length=length+10;
//	cout<<length<<endl;
//	
	
//	*assignment*//shorted order
//	int length1=90;
//	length+=10;
//	cout<<length;

//int a=12;//1100
//int b=10;//1010
//int c=a&b;
//cout<<"bitwise and:"<<c<<endl;
//c=a|b;
//cout<<"bitwise or:"<<c<<endl;
//c=a^b;
//cout<<"bitwise xor:"<<c<<endl;
//c=~a;
//cout<<"bitwise not"<<c<endl;

//int a=40;
//int r=a>>4;
//cout<<r<<endl;
int a=40;
int r=a<<3;
cout<<r<<endl;



}


