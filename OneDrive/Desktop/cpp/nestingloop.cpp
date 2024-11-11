//nesting loop

//for every iteration of outer loop,inner loop get completly executed
//example
#include<iostream>
using namespace std;
int main()
{
//	for(int i=0;i<=3;i++)
//    {
//	cout<<"set:"<<i<<endl;
//	for(int j=0;l<=20;j++)
//	cout<<j<<"repetaion\n";
//  }
  
  
  //wap to display the multiplcation table fron 15 to 20
//  
//    for(int n=15;n<=20;n++)
//    {
//    	for(int i=1;i<=10;i++)
//    	{
//    		cout<<n<<" x "<<i<<" = "<<n*i<<"\n";
//		}
//		cout<<endl;
//	}
  
//  wap to display the rectangle pattern
//*
//**
//***
//****
//*****

//*****
//****
//***
//**
 //*



//that is first pattern


//for(int i=1;i<=5;i++)
//  {
//  	for(int j=1;j<=i;j++)
//  	{
//  		cout<<"*";
//	}
//	cout<<endl;
//  }






//that ia second pattern

//  for(int i=5;i>=1;i--)
//  {
//  	for(int j=1;j<=i;j++)
//  	{
//  		cout<<"*";
//	}
//	cout<<endl;
//  }


//hollo pattern


//note->i for colom and j for row

//for(int i=1;i<=5;i++)
//{
//	for(int j=1;j<=8;j++)
//	{
//		if(i==1 || i==5 || j==1 ||j==8)
//        if(i==1 ||i==5||j==1 ||j==8 )
//		{
//			cout<<"*";
//		}
//		else
//		{
//			cout<<" ";
//		}
//	}
//	cout<<endl;
//}


////hollo tiangle
//
////*
////* *
////*  *
////*   *
////*    *
////*     *
////********
//
//
for(int i=1;i<=5;i++){
	for(int j=1;j<=5;j++){
		if(i==5 || j==1||i==j){
			cout<<"*";
		}
		else{
			cout<<" ";
		}
   	}
   	cout<<endl;
}


//swastic pattern

//for(int i=1;i<=9;i++){
//	for(int j=1;j<=9;j++){
//	if(i==5 || j==5 || (i==1 && j>=5)||(i<=5 && j==1)||(j==9 && i>=5)||(i==9 && j<5)){
//	    if(i==5||j==5 ||(i==1&&j>=5) ||(i<=5 && j==1) ||(j==9 && i>=5) ||(i==9 &&j<5)){
//			cout<<"*";
//		}
//		else{
//			cout<<" ";
//		}
//	}
//	cout<<endl;
//}


  
}

