#include<iostream>
using namespace std;
int sum(int n3,int n4){ //formal parameter
int sum=n3+n4;
	return sum;
  }
  void run(int a1,int a2){
  	int add=a1/a2;
  	cout<<add<<endl;
  }
  int fast(){
  	int n1,n2,n3;
  	cout<<"enter two number:"<<endl;
  	cin>>n1>>n2;
  	n3=n1+n2;
  	return n3;
  }
  void barry(){
  	int a1,a2,a3;
  	cout<<"Enter two number:"<<endl;
  	cin>>a1>>a2;
  	a3=a1*a2;
  	cout<<a3<<endl;;
  }
int main(){
	int n1,n2;
	cout<<"enter two numbers:";
	cin>>n1>>n2;
    int sum1=sum(n1,n2);  //actual parameter
    cout<<sum1<<endl;
    int s1=50,s2=5;
    run(s1,s2);
    cout<<fast()<<endl;
    barry();
    
}

