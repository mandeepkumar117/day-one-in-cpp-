#include<iostream>
using namespace std;
int main(){
    int n,s=0,count=0;
    cout<<"enter any number\n";
    cin>>n;
    for(int i=1; i<n;i++){
    	if(n % i ==0){
    		s = s+i;
    		count++;
		}
	}
	if(s==n){
		cout<<"perfect number\n";
	}
	else{
		cout<<"not perfect number\n";
	}
	cout<<count<<"\n";
	cout<<s;
}

