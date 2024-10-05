#include<iostream>
using namespace std;
int main(){
//	                                  * lavel1 *
	
//	int a[4]={4,5,6,7};
	//cout<<a[2]<<" "<<endl;;
//	for(int i=0;i<3;i++){
//		
//		cout<<a[i]<<" ";
//	}


//	revese element
//	for(int i=0;i<3;i++){
//		
//		cout<<a[i]<<" ";
//	}

// display alternate elements from starting index.

//  int a[10]={12,3,2,4,5,6,78,8,9,10};
//  for(int i=0;i<10;i=i+2){
//  	cout<<a[i]<<" ";
//  }

//add them all and show result

//int a[5]={2,3,4,5,6};
//int avg,sum=0;
//for(int i=0;i<5;i++){
//	sum=sum+a[i];
//	avg=sum/5;
//	
//}
//cout<<"sum of number:"<<sum<<" "<<"and";
//cout<<"average of number:"<<avg<<" ";

	 
	 
//	 display elements which are multiple of 7
//	 int a[4]={7,23,14,21};
//	 bool num=false;
//	 for(int i=0;i<4;i++){
//	 	if(a[i]%7==0){
//	 		num=true;
//	 	cout<<a[i]<<" ";
//	 }
//	 }
//	 if(num==false)
//	 cout<<"number not found";


// WAP to find highest and second highest element in an array.


//int marks[8]={34,12,34,56,7,89,90,11};
//int high=marks[0];
//int shigh=marks[1];
//if(marks[0]>marks[1]){
//	high=marks[0];
//	shigh=marks[1];
//}
//else{
//	high=marks[1];
//	shigh=marks[0];
//}   
//for(int i=2;i<8;i++){
//	if(marks[i]>high){
//		shigh=high;
//		high=marks[i];
//	}
//}                     
//cout<<"highest element "<<"is"<<high<<endl;
//cout<<"second highest "<<"is"<<shigh<<endl;  


//WAP to find lowest and second lowest element in an array. 


//   int marks[8]={34,12,34,56,7,89,90,11};
//int lowest=marks[1];
//int slowest=marks[0];
//if(marks[1]<marks[0]){
//	lowest=marks[1];
//	slowest=marks[0];
//}
//else{
//	lowest=marks[0];
//	slowest=marks[1];
//}   
//for(int i=2;i<8;i++){
//	if(marks[i]<lowest){
//		slowest=lowest;
//		lowest=marks[i];
//	}
//}                     
//cout<<"lowest element"<<"is "<<lowest<<endl;
//cout<<"second lowest"<<"is "<<slowest<<endl; 


//find highest element in an array

//int arr[8]={12,21,4,45,6,56,67,2};
//int highest=arr[0]; 
//for(int i=0;i<8;i++){
//    if(arr[i]>highest){
//		highest=arr[i];
//	}
//}    
//cout<<"heighest is "<<highest<<endl;


//find lowest element in an array

//int arr[9]={12,21,4,45,6,56,2,78,14};
//int lowest=arr[0];
//for(int i=0;i<9;i++){
//	if(arr[i]<lowest){
//		lowest=arr[i];
//	}
//}    
//cout<<"lowest element is "<<lowest<<endl;


// WAP to find sum of all even element in an array.

//int arr[9]={12,21,4,45,6,56,2,78,14};
//for(int i=0;i<9;i++){
//	if(arr[i]%2==0){
//		cout<<"even element is "<<arr[i]<<endl;
//
//	}
//}    


//wap to find sum of all even element in an array

//int arr[9]={12,21,4,45,6,56,2,78,9};
//int count=0;
//for(int i=0;i<9;i++){
//	if(arr[i]%2!=0){
//		count++;
//		cout<<"odd element is: "<<arr[i]<<endl;
//
//	}
//
//}    
//cout<<"total odd element is: "<<count<<endl;



//WAP to create an array of names. And perform searching operation too of any key element,
//If result is not found. display message not found otherwise display the indices where our key element is present.


//int arr[9]={12,21,4,45,6,56,2,78,};
//int count=0;
//int key;
//cout<<"Enter key value: "<<endl;
//cin>>key;
//for(int i=0;i<9;i++){
//	if(arr[i]==key){
//		arr[i]=0;
//		count++;
//	}
//}
//for(int i=0;i<9;i++){
//	cout<<arr[i]<<" ";
//}
//cout<<endl;
//if(cout>0){
//	cout<<"key value is: "<<count<<endl;
//}
//if(count==0){
//	cout<<"key value is not found";
//}



//                                                     *lave 2*


//WAP to create an array with n even elements. (hint: use while loop instead of for)

//int n;
//int b;
//cout<<"enter array range:";
//cin>>n;
//int temp=n;
//int arr[n];
//count=0;
//int i=0;
//while(n>0){
//	cout<<"Enter number:";
//	cin>>b;
//	if(b%2==0){
//	  arr[i]=b;
//	  i++;
//	  n--;
//	  	
//	}
//	else{
//		cout<<"Entered number is odd ,enter again:"<<endl;	
//	}
//	
//}
//i=0;
//while(i<temp){
//	cout<<arr[i]<<" ";
//	i++;
//}

////WAP to create an array with n even elements. (hint: use while loop instead of for)
//
//int n,temp;
//cout<<"Enter range:";
//cin>>n;
//int even[n];
//for(int i=0;i<n;){
//	cout<<"Enter number:"<<endl;
//	cin>>temp;
//	if(temp%2==0){
//		even[i]=temp;
//		i++;
//	}
//}
//for(int i=0;i<n;i++){
//	cout<<even[i]<<" ";
//}


//int a[5]={23,45,34,23,45};
//int b[5]={a[0]};
//int c=0;
////cout<<a[c]<<" ";
//bool unique;
//for(int i=1;i<5;i++){
//	unique=true;
//	for(int j=0;j<=c;j++){
//		if(b[j]==a[i]){
//			unique=false;
//			break;
//		}
//	}
//	if(unique==true){
//		c++;
//		b[c]=a[i];
////		cout<<b[c]<<" ";
//	}
//}
//	for(int i=0;i<=c;i++){
//		cout<<b[i]<<" ";
//
//}
//WAP to copy the elements of one array into another array.
 
// int n;
// cout<<"Enter range:";
// cin>>n;
// int arr[n];
// for(int i=0;i<n;i++){
// 	cout<<"Enter array element:"<<endl;
// 	cin>>arr[i];
// }
// int arr1[n];
// for(int i=0;i<n;i++){
// 	arr1[i]=arr[i];
// 	cout<<arr1[i]<<" ";
// }

 
// WAP to separate odd and even integers into separate arrays.
 
// int n;
// cout<<"Enter range:";
// cin>>n;
// int arr[n];
// for(int i=0;i<n;i++){
// 	cout<<"Enter array element:"<<endl;
// 	cin>>arr[i];
// 	
// }
// int arr1[n];
// for(int i=0;i<n;i++){
// 	if(arr[i]%2==0){
// 		arr1[i]=arr[i];
// 		cout<<"even element:"<<arr1[i]<<" "<<endl;;
//	 }
// }
// int arr2[n];
// for(int i=0;i<n;i++){
// 	if(arr[i]%2!=0){
// 		arr2[i]=arr[i];
// 		cout<<"odd element:"<<arr2[i]<<" ";
//	 }
// }



//                                                 *   Lavel 3   *


//WAP to find how many duplicate elements are present in our array.



//int arr[6]={12,11,21,11,5,21};
//bool duplica=false;
//for(int i=0;i<6;i++){
//	duplica=false;
//	for(int j=0;j<i;j++){
//	   if(arr[i]==arr[j]){
//	   	duplica=true;
//	   	break;
//	   }
//	   
//	}
//	if(duplica==false){
//	   	cout<<arr[i]<<" ";
//	   }
//}



// int n;
//cout<<"Enter range:";
//cin>>n;
//int arr[n];
//bool duplicate=false;
//for(int i=0;i<n;i++){
//	cout<<"Enter array elemenet:";
//    cin>>arr[i];
//    duplicate=false;
//    for(int j=0;j<i;j++){
//    	if(arr[i]==arr[j]){
//    		duplicate=true;
//    		break;
//		}
//	}
//	if(duplicate==false){
//	for(int i=0;i<n;i++){
//		cout<<arr[i]<<" ";
//	}
//}	
//}


//WAP to find the sum of duplicate elements which are present in our array.


//    int arr[6] = {12, 11, 23, 11, 12, 24};
//    int sum = 0;
//    bool dupli = false;
//
//    for (int i = 0; i < 6; i++) {
//        dupli = false;
//        for (int j = 0; j < i; j++) {
//            if (arr[i] == arr[j]) {
//                dupli = true;
//                break;
//            }
//        }
//        if (dupli == false) {
//            cout <<"Unique: "<<arr[i]<< endl;
//        } else {
//            cout << "Duplicate: "<< arr[i]<< endl;
//            sum=sum+arr[i];
//        }
//    }
//    
//    cout << "Sum of duplicates: " << sum << endl;
    
    
//    WAP to display  only the prime number which are present in our array.
//    int arr[6] = {5, 23, 11, 8, 17, 19};
//    bool prime;
//    
//    for (int i=0; i<6; i++) {
//        prime = true;
////        if (arr[i] <= 1) {
////            prime = false;
////        }
////		 else {
//            for (int j=2; j<=arr[i]/2; j++) {
//                if (arr[i]%j==0) {
//                    prime = false;
//                    break;
//                }
////            }
//        }
//        if (prime==true) {
//            cout << arr[i] << endl;
//        }
//    }
//    return 0;

//Given an array of size n-1 such that it only contains distinct integers in the range of 1 to n.
// display the missing element.
//Examples:
//Input: n = 5, arr[] = {1,2,3,5} Output: 4
//Input: n = 2, arr[] = {1} Output: 2



//first method
//int arr1[]={1,2,3,5};
//int size1=sizeof(arr1)/sizeof(arr1[0]);
//for(int i=0;i<size1;i++){
//	if(i+1==arr1[i]){
//		continue;
//	}
//	else{
//		cout<<i;
//		break;
//	}
//	
//}


//second method

//int arr1[]={1,2,3,5};
//int size1=sizeof(arr1)/sizeof(arr1[0]);
//int j=1;
//for(int i=0;i<size1;i++){
//	if(j==arr1[i]){
//		j++;
//		continue;
//	}
//	else{
//		cout<<j;
//		break;
//	}
//}

//third method

//int arr1[]={1,2,3,5};
//int size1=sizeof(arr1)/sizeof(arr1[0]);
//for(int i=0;i<size1;i++){
//	if(i+1!=arr1[i]){
//		cout<<i+1;
//		break;
//	}
//}


//Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.
//Note that you must do this in-place without making a copy of the array.
// Example 1:
//Input: nums = [0,1,0,3,12] Output: [1,3,12,0,0]
//Example 2:
//Input: nums = [0] Output: [0]


//int arr[5]={1,4,0,0,4};
//int j=0;
//for(int i=0;i<5;i++){
//	if(arr[i]!=0){
//		arr[j]=arr[i];
//		j++;
//	}
//}
//while(j<5){
//	arr[j]=0;
//	j++;
//
//}
//cout<<arr[i];

//wap to delete position element


int n=8;
int arr[n]={1,2,3,4,5,6,7,8};
int position=3;
for(int i=position;i<n;i++){
	if(i<n-1){
		arr[i]=arr[i+1];
	}
	else{
		arr[i]=0;
	}
}
for(int i=0;i<n;i++){
	cout<<arr[i]<<" ";
}



    
}




