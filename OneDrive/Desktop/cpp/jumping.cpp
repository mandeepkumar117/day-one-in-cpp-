//break statement->whenever is counter get terminate immidiatly
#include<iostream>
using namespace std;
int main(){
	for(int i=1;i<=9;i++){
		cout<<i<<" ";
		if(i==5){
			break;
		}
		cout<<i;
	}
}
