//pointer->it is a espcial variable ,which holds the address of a varible/object.generaly it occupies 8 byte of memory.
//declaration->

//data type *pointer_name;

//eg:
	
//	int *p1;//holds only integer address
//   double *p2;//holds only double address

//  *--->indirection opreator,dereference operator





#include<iostream>
using namespace std;
int main(){
//	int num1=90,num2;
//	int *p;
//	p=&num1;
//	cout<<"address stored by pointer p(address of num1 in stack):"<<p<<endl;
//	int *p1=new int;//block of heap section
////	                 new address return
////                     addresss return holds in p1
//cout<<"address stored by pointer p1(address of block in heap):"<<p1<<endl;


//int num1=90,num2=89;
//char ch='8';
//int *p=&num1;
//cout<<&num1<<endl;
//char *p1=&ch;
//cout<<&ch<<endl;
//cout<<"value at num1:"<<*p<<endl;
//*p=*p+10;
//cout<<"value at num1:"<<*p<<endl;


//addition

int num1=90,num2=89;
int *p1=&num1;
int *p2=&num2;
int num3=*p1+*p2;
int *p3=&num3;
cout<<"addition is:"<<*p3<<endl;
if(*p1>*p2){
	cout<<"p1 is greater:"<<endl;
}
else{
	cout<<"p2 is greater:";
}







}
