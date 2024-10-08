#include<iostream>
using namespace std;
int main(){
//  int arr[]={12,23,0,5,0,4,0};
//  int s;
//  s=sizeof(arr)/sizeof(arr[0]);
//  int temp[s],c=0;
//  for(int i=0; i<s;i++){
//  	cout<<arr[i]<<"\t";
//  }
//  for(int i=0; i<s;i++){
//  	if(arr[i]!=0){
//  		temp[c]=arr[i];
//  		c++;
//	  }
//  }
//  while(c<s){
//  	temp[c]=0;
//  	c++;
//  }
//  cout<<"\nresult\n";
//  for(int i=0; i<s;i++){
//  	cout<<temp[i]<<"\t";
//  }

int arr[]={12,2,5,3,1,6};
  int s;
  s=sizeof(arr)/sizeof(arr[0]);
  int temp[s],c=0;
  for(int i=0; i<s;i++){
  	cout<<arr[i]<<"\t";
  }
  int temp1;
  cout<<"\n sorted array is\n";
  for(int i=0;i<s;i++ ){
  	for(int j=i;j<s-1;j++){
  		if(arr[j]>arr[j+1]){
  			temp1=arr[j];
  			arr[j]=arr[j+1];
  			arr[j+1]=temp1;
		  }
	  }
  }
  for(int i=0; i<s; i++){
  	cout<<arr[i]<<"\n";
  }
}

