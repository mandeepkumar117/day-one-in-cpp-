//operator-->it is special symbols,used to perform some operation.every operator has a predefined
//code ,with,the,help of that,it perform any operation.
//ex-> 45+3=48;
//operator:on the basis of operands we classify operator as unary, binary, ternary 
//unary:+,-,++,--,/,&,*
#include<iostream>
using namespace std;
int main()
{
//	int num=90;
//	int test=num++;//firstly assign the value of num to test
//	               //test=num  test=90
////    int test=++num;//first increment the value of num by 1
//                   //num=1
//    cout<<test;
//    cout<<endl;
//    cout<<num;


     int a=90;
     int b=23;
     int c=87;
     c++;
     a=b+c++;
     a=--c;
     b=a+b;
     cout<<b;
    
}
//binary operator-->(1)arithmatic 
//                   (2)comparision
//                   (3)logical
//                   (4)assignment(shorthand)
//                   (5)bitwise(except one bitwise not)
