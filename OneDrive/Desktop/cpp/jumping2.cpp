//continue statement->>whenever continue is encounter over control jump to next iteration if possible
#include<iostream>
using namespace std;
int main(){
	int i=1;
	mylebel:
		cout<<i<<endl;
		i++;
	if(i<=10){
		goto mylebel;
	}
	cout<<i;
}
