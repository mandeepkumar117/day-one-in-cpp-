#include<iostream>
using namespace std;
int main(){
//   int arr[]={1,2,3,5,6,7};
//   int s;
//   s=sizeof(arr)/sizeof(arr[0]);
//   for(int i=0; i<s; i++){
//   	if(arr[i+1]-arr[1]>1){
//   		cout<<"missing number="<<arr[1]+1;
//   		break;
//	   }
//   }

int arr[]={12,23,4,16,5};
int s;
s=sizeof(arr)/sizeof(arr[0]);
for(int i=0; i<s; i++){
	int n=arr[i];
	for(int j=1; j<n/2; j++){
		if(j*j==n){
			cout<<n<<"\t";
		}
	}
}
}

