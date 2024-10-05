note->what is decay of size->when we pass array of size then we loss of array size
//passing arra in a function and acceess element af array with the help of pointer
#include<iostream>
using namespace std;
void increment_10(int arr[],int size){
	for(int i=0;i<size;i++){
		arr[i]=arr[i]+10;
	}
}
int main(){
	int arr[]={23,45,56,76,45};
	int size=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	increment_10(arr,size);//we actualy pass base address /(behave as call by reference)
		for(int i=0;i<size;i++){//size passing behave as call by value
			cout<<arr[i]<<" ";
		}
	
}

