//continue statement->>whenever continue is encounter over control jump to next iteration if possible
#include<iostream>
using namespace std;
int main(){
	for(int i=1;i<=9;i++){
		if(i==5){
			continue;
		}
		cout<<i;
	}
}
