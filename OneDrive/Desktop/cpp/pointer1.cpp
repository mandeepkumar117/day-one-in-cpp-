//wap to increment all the element of array using pointer
#include<iostream>
using namespace std;
void increment_10(int *arr,int size){
	for(int i=0;i<size;i++){
		arr[i]=arr[i]+10;
	}
}
int main(){
    int arr[]={12,21,23,32,34,43,45,54};
    int *p=arr;
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
    	cout<<arr[i]<<" "<<endl;;
	}
	increment_10(arr,size);
	 for(int i=0;i<size;i++){
    	cout<<arr[i]<<" ";
	}
}

