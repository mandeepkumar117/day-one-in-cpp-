#include<iostream>
using namespace std;
int axis(int cardno, int pwd){
	if(cardno==101 & pwd==1234){
		return 10000;
	}
}
int sbi(int cardno, int pwd){
	return 20000;
}
int main(){
    int (*atm) (int,int);
    atm=sbi;
    int balance=atm(3,4);
    cout<<"sbi balance= "<<balance<<"\n";
    atm=axis;
    balance=atm(5,6);
    cout<<"axis balance= "<<balance;
}

