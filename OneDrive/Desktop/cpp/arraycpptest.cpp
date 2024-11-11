#include<iostream>
#include<cmath>
using namespace std;
int main(){
	
//Q.1 W.A..P to display only unique value in an array?	
	
//     int arr[] = {1, 2, 2, 3, 4, 4, 5};
//    int n = sizeof(arr) / sizeof(arr[0]);
//
//    cout << "Unique values in the array are: ";
//    for (int i = 0; i < n; i++) {
//        bool isUnique = true;
//        for (int j = 0; j < n; j++) {
//            if (arr[i] == arr[j] && i != j) {
//                isUnique = false;
//                break;
//            }
//        }
//        if (isUnique) {
//            cout << arr[i] << " ";
//        }
//    }
//    cout << endl;


//Q.2 W.A..P.   to  only  display the prime values in an array?

  
//   int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//    int n = sizeof(arr) / sizeof(arr[0]);
//
//    cout << "Prime values in the array are: ";
//    for (int i = 0; i < n; i++) {
//        bool isPrime = true;
//        if (arr[i] <= 1){
//		 isPrime = false; 
//      }
//        
//        for (int j = 2; j * j <= arr[i]; j++) {
//            if (arr[i] % j == 0) {
//                isPrime = false;
//                break;
//            }
//        }
//
//        
//        if (isPrime) {
//            cout << arr[i] << " ";
//        }
//    }
//    cout << endl;


//Q.3 W.A.P.  to finding single  missing number in a consecutive value in an array?

//int arr[]={1,2,3,4,6,7,8};
//int n=sizeof(arr)/sizeof(arr[0]);
//int totalnumbers=n+1;
//int expectedsum=(totalnumbers * (totalnumbers +1))/2;
//int actualsum=0;
//for(int i=0; i<n; i++){
//	actualsum=actualsum+arr[i];
//	
//}
//int missingnumber=expectedsum - actualsum;
//cout<<"mussing number is = " <<missingnumber<<endl;


//Q.4 W.A.P. to display the sum of alternate values of an array?

//int arr[]={1,2,3,4,5,6,7,8};
//int n=sizeof(arr)/sizeof(arr[0]);
//int alternate=0;
//for(int i=0; i<n; i++){
//	alternate+=arr[i];
//}
//cout<<"sum of alternamte number= "<<alternate<<endl;


//Q.5 W.A.P.  to find square root of valid number in an array?

//int arr[]={1,2,3,4,5,6,7,8,9};
//int n=sizeof(arr)/ sizeof(arr[0]);
//cout<<"square roots of valid numbers in the array are:";
//for(int i=0; i<n; i++){
//	if(arr[i]>=0){
//		int sqrtvalue=sqrt(arr[i]);
//		cout<<"sqrt root of " << arr[i] << " is: "<< sqrtvalue << endl;
//		
//	}
//	else{
//		cout<<arr[i]<<"is not a valid number for aquare root."<<endl;
//		
//	}
//}


////Q.6 W.A.P.  to display array in ascending orders?
//
//int arr[]={4,3,6,2,1,5,8,7};
//int n=sizeof(arr) / sizeof(arr[0]);
//for(int i=0; i<n-1; i++){
//	for(int j=0; j<n-i-1; j++){
//		if(arr[j]>arr[j+1]){
//			int temp=arr[j];
//			arr[j]=arr[j+1];
//			arr[j+1]=temp;
//		}
//	}
//}
//cout<<"array in ascending order: "<<endl;
//for(int i=0; i<n; i++){
//	cout<<arr[i]<<" ";
//}
//cout<<endl;


//Q.7 W.A.P.  to display array in decending orders?

//int arr[]={4,3,6,2,1,5,8,7};
//int n=sizeof(arr) / sizeof(arr[0]);
//for(int i=0; i<n-1; i++){
//	for(int j=0; j<n-i-1; j++){
//		if(arr[j]< arr[j+1]){
//			int temp=arr[j];
//			arr[j]=arr[j+1];
//			arr[j+1]=temp;
//		}
//	}
//}
//cout<<"array in ascending order: "<<endl;
//for(int i=0; i<n; i++){
//	cout<<arr[i]<<" ";
//}
//cout<<endl;


//Q.8 W.A.P. to shift all zero at the end but relative order should be maintained?
//Ex: arr={2,4,0,9,0,7}
//Output:{2,4,9,7,0,0}

int arr[]={2,3,0,5,0,6,7,0,8};
int n=sizeof(arr) / sizeof(arr[0]);
int nonzero=0;
for(int i=0; i<n; i++){
	if(arr[i]!=0){
		arr[nonzero]=arr[i];
		nonzero++;
	}
}
for(int i=nonzero; i<n; i++){
	arr[i]=0;
}
cout<<"array after shifting zeros to the end:"<<endl;
for(int i=0; i<n; i++){
	cout<<arr[i]<<" ";
}
cout<<endl;




   


}

