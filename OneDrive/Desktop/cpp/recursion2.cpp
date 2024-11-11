#include<iostream>
using namespace std;
void f1(int n){
	if(n>5){
		return;
	}
	f1(n+1);//that is head recursion      //tail recursion that is called linear recursion 
	cout<<"this is function f1() ,current n value is: "<<n<<endl;
}
int main(){
    f1(1);
}

