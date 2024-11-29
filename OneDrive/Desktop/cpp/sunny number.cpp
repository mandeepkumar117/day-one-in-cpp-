#include <iostream>
using namespace std;

int main(){
	cout<<"enter a number"<<endl;
	int n;
	cin>>n;
	
//	19

int n1=n%10; // 8
int n2=n/10; // 2
int sum = (n1*n1)+(n2*n2);  
//cout<<sum;
	int n3=sum%10;
	int n4=sum/10;
	if((n3+n4)==(n1+n2)){
		cout<<n<<" is sunny number";
	}

}
