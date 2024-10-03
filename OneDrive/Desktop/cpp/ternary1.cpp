#include<iostream>
using namespace std;
int main(){
//	int a;
//	a=12>3? 1:0;
//	cout<< a;

//  int age;
//  cout<< " enter your age \n";
//  cin>>age;
//  age>=18 ? cout<< " welcome" : cout<< " bhidcum";

    int num;
    cout<<"enter number \n";
    cin>>num;
    num >=0 ?cout<<"number is "<<num :cout<<"number is "<< - num<<"\n";
//    wap to print absolute value
    int negativeValue = -15;

    // Using the ternary operator to convert negative to positive
    int positiveValue = (negativeValue < 0) ? -negativeValue : negativeValue;

    std::cout << "Positive value: " << positiveValue << std::endl;

    return 0;
}

