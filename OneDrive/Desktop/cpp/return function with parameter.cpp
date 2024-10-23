#include<iostream>
using namespace std;


int dealer(int petrol){
	return 80 * petrol;
}

int main(){
    int cdemand;
    cout<<"how much petrol\n";
    cin>>cdemand;
    cout<<dealer(cdemand)+(cdemand*5)<<"rs";
}

