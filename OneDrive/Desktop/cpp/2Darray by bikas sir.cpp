#include<iostream>
using namespace std;
int main(){
//    int arr[2][3];
//    cout<<"enter 6 values\n";
//    for(int r=0; r<2; r++){
//    	for(int c=0; c<3; c++){
//    		cin>>arr[r][c];
//		}
//	}
//	cout<<"\n stored data in 2d\n";
//    for(int r=0; r<2; r++){
//    	for(int c=0; c<3; c++){
//    		cout<<arr[r][c]<<"\t";
//		}
//		cout<<"\n";
//	}

//int arr[3][3];
//cout<<"enter 9 values\n";
//for(int r=0; r<3; r++){
//	for(int c=0; c<3; c++){
//		cin>>arr[r][c];
//	}
//}
//cout<<"\n store even data in 2d\n";
//for(int r=0; r<3; r++){
//	for(int c=0; c<3; c++){
//		if(arr[r][c] % 2 ==0){
//			cout<<arr[r][c]<<"\t";
//			
//		}
//		cout<<"\n";
//	}
//}




int arr[3][3];
cout<<"enter 9 values\n";
for(int r=0; r<3; r++){
	for(int c=0; c<3; c++){
		cin>>arr[r][c];
	}
}
cout<<"\n store even data in 2d\n";
int sum=0;
for(int r=0; r<3; r++){
	for(int c=0; c<3; c++){
		sum=sum+arr[r][c];
		
	}
	cout<<"sum of array"<<sum<<"\t";

}
}

