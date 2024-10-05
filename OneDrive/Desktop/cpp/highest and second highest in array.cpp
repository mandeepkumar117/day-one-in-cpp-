#include<iostream>
using namespace std;
int main(){
	int arr[5]={45,25,14,24,5};
	int high,shigh;
	if(arr[0]>arr[1]){
		high=arr[0];
		shigh=arr[1];
	}
	else{
		high=arr[1];
		shigh=arr[0];
	}
	
	for(int i=2;i<5;i++){
		if(arr[i]>high){
			shigh=high;
			high=arr[i];
		}
	}
	cout<<"highest and second highest number in array are:"<<high<<" & "<<shigh;
}
