#include<iostream>
using namespace std;
//void arr(int *a, int s){ // both method are same.here * is pointer which is hold address
   void arr(int a[],int s){
     for(int i=0;i<s; i++){
//     	a[i]=a[i]+2;//type 1.
//     	cout<<a[i]+2<<"\t"; //type 2.
//     	cout<<a[i]<<"\t";
     	cout<<a[i]++<<"\t"; //type 3
	 }
	
}
int main(){
    int x[]={2,4,5,6,7,8};
    int s=sizeof(x)/sizeof(x[0]);
    arr(x,s);
    cout<<"\n";
    for(int i=0;i<s;i++){
    	cout<<x[i]<<"\t";
	}
}

