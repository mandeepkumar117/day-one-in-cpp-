//2darry->[a[0][0] a[0][1] a[0][2] a[1][0] a[1][1] a[1][2] etc]
//wap to create a two dimenssional array in which we store the marks of n students
// every student apear for three subjects


#include<iostream>
using namespace std;
int main(){
//	int a[4][3]={{34,45,2},{34,56,67},{24},{25,56}};
//	cout<<sizeof(a)<<endl;
//	cout<<a[2][0];

//    int n;
//    cout<<"how many student are there in a class:";
//    cin>>n;
//    int marks[n][3];
//    for(int i=0;i<n;i++){
//    	for(int j=0;j<3;j++){
//    		cout<<"enter marks of index"<<i<<j<<":";
//    		cin>>marks[i][j];
//		}
//	}
//	for(int i=0;i<n;i++){
//    	for(int j=0;j<3;j++){
//    		//cout<<"enter marks of index"<<i<<j<<":";
//    		cout<<marks[i][j]<<" ";
//		}
//		
//		cout<<endl;
//	}



//int a[3][3]={2,9,7,11,15,1,5,6,2};
//int sum;
//cout<<"row wise sum"<<endl;
//for(int i=0;i<3;i++){
//	sum=0;
//	for(int j=0;j<3;j++){
//		
//			cout<<a[i][j]<<" + ";
//		    sum=sum+a[i][j];
//	}
//	cout<<"-------->"<<sum;
//	cout<<endl;
//}



//int a[3][3]={2,9,7,11,15,1,5,6,2};
//int sum;
//cout<<"row wise sum"<<endl;
//for(int i=0;i<3;i++){
//	sum=0;
//	for(int j=0;j<3;j++){
//		
//			cout<<a[j][i]<<" + ";
//		    sum=sum+a[j][i];
//	}
//	cout<<"-------->"<<sum;
//	cout<<endl;
//}



int a[3][3]={2,9,7,11,15,1,5,6,2};
int sum;
cout<<"row wise sum"<<endl;
for(int i=0;i<3;i++){
	sum=0;
	for(int j=0;j<3;j++){
		if(i!=j){
			cout<<i<<" ";
		}
		else{
			cout<<"0";
		
       }
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(i==j){
				cout<<i<<" ";
			}
		}
	}
	cout<<"-------->"<<sum;
	cout<<endl;
}



}
