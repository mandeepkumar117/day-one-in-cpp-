#include<iostream>
using namespace std;
int main(){
	int a=9;
	int &b=a;
	a=90;
	cout<<a<<"\n";
	cout<<b;
}

