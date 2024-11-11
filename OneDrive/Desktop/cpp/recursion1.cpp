#include<iostream>
using namespace std;
int cybrom(int a){
	if(a<1){
		return a;
	}
	cout<<a<<"\t"<<"\n"; //head recursion
	cybrom(a-1);
	cout<<a<<"\t"; //tail recursion
}
int main(){
    cybrom(5);
}

