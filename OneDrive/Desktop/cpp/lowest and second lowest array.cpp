#include<iostream>
using namespace std;
int main(){
	int arr[5]={45,25,14,5,6};
	int low,slow;
	if(arr[0]<arr[1]){
		low=arr[0];
		slow=arr[1];
	}
	else{
		low=arr[1];
		slow=arr[0];
	}
	
	for(int i=2;i<5;i++){
		if(arr[i]<low){
			slow=low;
			low=arr[i];
		}
		if(arr[i]>low && arr[i]<slow)
		slow=arr[i];
	}
	cout<<"lowest and second lowest number in array are:"<<low<<" & "<<slow;
}

