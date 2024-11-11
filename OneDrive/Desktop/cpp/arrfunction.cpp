#include<iostream>
using namespace std;

    void show(int a[], int s){
    	for(int i=0; i<s; i++){
    		a[i]=a[i]+10;
    		cout<<a[i]<<"\n";
		}
	}
	int main(){
		int arr[]={23,13,43,3,5};
		int s= sizeof(arr) / sizeof(arr[0]);
		show(arr,s);
		cout<<"original array"<<"\n";
		for(int i=0; i<s; i++){
			cout<<arr[i]<<"\n";
		}
	}


