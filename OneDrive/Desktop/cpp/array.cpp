//notes->

//array->it is a collection of homogenious data element storedat contigious (continous)memory,with the 
//help of single varible(reference)

//features of array->
//(1)syntax:

//   data_type  array_name [size_of_array];//declaration

//ex    : int marks[5];//declare
//        int marks[5]={23456};declare +initialized


//(2) generaly array has a fixed size,and we have to mention it.
//(3)higest index -->n-1
//     int marks[n];

//(4)it is a ordered data type.

//#include<iostream>
//using namespace std;
//int main(){
//	double a[]={23,34,56,76,56,45};
//	int size=sizeof(a)/sizeof(a[0]);
//	cout<<size;
//
//}



#include<iostream>
using namespace std;
int main(){
//	int ar[]={34,45,23};  //[]->>that is subscript operator
//	cout<<sizeof(ar)<<endl;
//	int arr[4]={2,3,4,5};
//	cout<<sizeof(arr)<<endl;
//	cout<<arr[2]<<endl;
//	cout<<arr[10]<<endl;


//     int arr[5]={3,34,56,78,89};
//     cout<<arr[2]<<endl;
//     arr[1]=200;
//     cout<<arr[1]<<endl;
//     cout<<arr[60];
//     arr[60]=45;  // undefined
//     cout<<arr[60];


//wap to create a array of n element

//    int ar[5];
//      ar[1]=23;
//      ar[12];
//      cout<<"Enter array index number:"<<endl;
//      cin>>ar[2];
//      cout<<ar[1]<<endl;
//      cout<<ar[2]<<endl;


//   int n;
//   cout<<"Enter range:"<<endl;
//   cin>>n;
//   int ar[n];
//   for(int i=0;i<n;i++){
//   	cout<<"Enter number:"<<endl;
//   	cin>>ar[i];
//   }
//   for(int i=0;i<n;i++){
//   	cout<<"Element at index "<<i<<" "<<ar[i]<<endl;
//   }


// print five names in index    
     
//     int n;
//     cout<<"Enter range:"<<endl;
//     cin>>n;
//     string ar[n];
//     for(int i=0;i<n;i++){
//     	cout<<"enter name:"<<endl;
//     	cin>>ar[i];
//	 }
//	 for(int i=0;i<n;i++){
//	 	cout<<"Element at index "<<i<<" "<<ar[i]<<endl;
//	 }
     

//    string names[5]={"tanu","isha","mandeep","gagan","isha"};
//    string temp;
//    cout<<"Enter name that u want to search:"<<endl;
//    cin>>temp;
//    bool is_name=true;
//    for(int i=0;i<5;i++){
//    	if(temp==names[i]){
//    		is_name=false;
//    		cout<<"result found at index "<<i<<endl;
//		}	
//	}
//   if(is_name==true)
//      cout<<"not found";


//double a[]={23,45,67,76,78,87};
//int size=sizeof(a)/sizeof(a[0]);
//cout<<size<<endl;
//cout<<a[3]<<endl;
//a[3]=5000;
//cout<<a[3]<<endl;


//wap to create a array with n elements here elwements is actualy the marks of student show you have to grace of five number
//you have to give a maximum grace of 5 marks to the stdent whose marks is in the range 35-39
//(passing marks=40)


//int n;
//cout<<"enter number of student"<<endl;
//cin>>n;
//int marks[n];
//for(int i=0;i<=n;i++){
//	cout<<"Enter marks:";
//	cin>>marks[i];
//}
//for(int i=0;i<=n;i++){
//	if(marks[i]>=35 && marks[i]<=39){
//		cout<<"student at index "<<i<<"got a grace of "<<40-marks[i]<<endl;
//		marks[i]=40;
//	}
//}

//int n,count=0;
//cout<<"Enetr number:"<<endl;
//cin>>n;
//int num[n];
//for(int i=0;i<n;i++){
//	cout<<"Enter array element:";
//	cin>>num[i];
//	
//}int key;
//cout<<"enter key value:";
//cin>>key;
//for(int i=0;i<n;i++){
//	if(num[i]==key){
//		num[i]=0;
//		count++;
//	}
//}
//for(int i=0;i<n;i++){
//	cout<<num[i]<<" ";
//	}
//cout<<endl;
//if(count>0)
//cout<<"key value is:"<<count<<endl;
//if(count==0)
//cout<<"key value not found:";


//wap to find the hieghest and lowest element in  a array

//  	int marks[8]={34,56,12,34,56,7,89,11};
//  	int high=marks[0];
//  	for(int i=1;i<8;i++){
//  		if(marks[i]>high){
//  			high=marks[i];
//		  }
//	  }
//	  cout<<"highest element" <<high<<endl;

      int marks[8]={34,56,12,34,56,7,89,11};
  	  int lowest=marks[0];
  	  for(int i=1;i<8;i++){
  		if(marks[i]<lowest){
  			lowest=marks[i];
		  }
	  }
	  cout<<"highest element  "<<lowest<<endl;
  
}
