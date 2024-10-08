//call by value and call by reference

//wap to swap the value of two variable with each other using function.call by reference
//call by value
#include<iostream>
using namespace std;
//void increment_10(int num){
//	num=num+10;
//	cout<<"number:"<<num<<endl;
//}
//int main(){
//	int number;
//	cout<<"enter a number:";
//	cin>>number;
//	increment_10(number);
//	cout<<"after calling number:"<<number;
//}


//call by reference


//void increment_10(int *num){
//	*num=*num+10;
//	cout<<"number:"<<*num<<endl;
//}
//int main(){
//	int number;
//	cout<<"enter a number:";
//	cin>>number;
//	increment_10(&number);
//	cout<<"after calling number:"<<number;
//}

//wap to swap the number using call by value



//void swap(int num1,int num2){
//	cout<<"before swapping in swap: number1: "<<num1<<"number2: "<<num2<<endl;
//	int temp=num1;
//	num1=num2;
//	num2=temp;
//	cout<<"after swapping in swap: number1: "<<num1<<"number2: "<<num2<<endl;
//}
//int main(){
//	int number1,number2;
//	cout<<"enter a number1 and number2:";
//	cin>>number1>>number2;
//	cout<<"before calling in main: number1: "<<number1<<"number2: "<<number2<<endl;
//	swap(number1,number2);
//	cout<<"after calling in main: number1: "<<number1<<"number2: "<<number2<<endl;
//}



//wap to swap two number using call by reference


void swap(int *num1,int *num2){
	cout<<"before swapping in swap: number1: "<<*num1<<"number2: "<<*num2<<endl;
	int temp=*num1;
	*num1=*num2;
	*num2=temp;
	cout<<"after swapping in swap: number1: "<<*num1<<"number2: "<<*num2<<endl;
}
int main(){
	int number1,number2;
	cout<<"enter a number1 and number2:";
	cin>>number1>>number2;
	cout<<"before calling in main: number1: "<<number1<<"number2: "<<number2<<endl;
	swap(&number1,&number2);
	cout<<"after calling in main: number1: "<<number1<<"number2: "<<number2<<endl;
}
