//wap to print fibonacci series opto n terms

//0 1 5 3 69 45 5 7 8 9 5 2 5 6 5...........
// 8 terms
//0 1 5 3 69 45 5 7
//10 terms
//0 1 5 3 69 45 5 7 8 9

//wap to swap to number

#include<iostream>
using namespace std;
int main()
{
//	int a,b,temp;
//	cout<<"enter first number:"<<endl;
//	cin>>a;
//	cout<<"enter second number:"<<endl;
//	cin>>b;
//	cout<<"before swaping:"<<a<<" "<<b<<endl;
//	temp=a;
//	a=b;
//	b=temp;
//	cout<<"after swaping:"<<a<<" "<<b<<endl;
    
    
//    int a,b,temp;
//	cout<<"enter first number:"<<endl;
//	cin>>a;
//	cout<<"enter second number:"<<endl;
//	cin>>b;
//	cout<<"before swaping:"<<a<<" "<<b<<endl;
//	a=a+b;
//	b=a-b;
//	a=a-b;
//	cout<<"after swaping:"<<a<<" "<<b<<endl;


//fibonacci series->The Fibonacci series is a sequence of numbers in which each number 
//(after the first two) is the sum of the two preceding ones. 
//It usually starts with 0 and 1. The sequence commonly starts like this:

//0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, ...

//soiution-> loop(1)i=1,i<=n-2
//if                i<=6-2=4
//            n3=n1+n2=0+1=1
//               n1=1
//               n2=1

   int n,n1=0,n2=1,n3;
   cout<<"how many terms do u want to display"<<endl;
   cin>>n;
   cout<<n1<<" "<<n2<<" ";
   for(int i=1;i<=n-2;i++)
   {
   	n3=n1+n2;
   	cout<<n3<<ends;
   	n1=n2;
   	n2=n3;
   }
   
   

//question(2)->factorial number

//      int n;
//      cout<<"enter number:"<<endl;
//      cin>>n;
//      for(int i=2;i<=n/2;i++)
//      {
//      	if(n%i==0)
//      	{
//      		cout<<i<<endl;
//		  }
//	  }


//no if prime or not


//      int n;
//      cout<<"enter number:"<<endl;
//      cin>>n;
//      bool is_prime=true;
//      for(int i=2;i<=n/2;i++)
//      {
//      	if(n%i==0)
//      	{
//      		is_prime=false;
//      		break;
//		  }
//	  }
//	  if(is_prime==true)
//	     cout<<"prime";
//	  else
//	  cout<<"not a prime";   


//find hcf and lcm

//    int n1,n2;
//    cout<<"enter two number:"<<endl;
//    cin>>n1>>n2;
//    int small;
//    if(n1<n2)
//      small=n1;
//    else
//	  small=n2;
//	  bool is_hcf=true;
//	for(int i=small;i>=2;i--)
//	{
//		if(n1%i==0 && n2%i==0)
//		{
//			is_hcf=false;
//			cout<<"hcf"<<" "<<i<<endl;
//			break;
//		}
//	  }
//	  if(is_hcf==true)
//	     cout<<"hcf is not possible"<<endl;
//	    
 
//         find lcm


//    int n1,n2;
//    cout<<"enter two number:"<<endl;
//    cin>>n1>>n2;
//    int max;
//    if(n1>n2)
//      max=n1;
//    else
//	  max=n2;
//	for(int i=max;i>=2;i++)
//	{	
//        if(i%n1==0 && i%n2==0){
//        	cout<<i;
//        	break;
//		}
//		
//	  }
//	    





// question(1)  wap to find range of square of each number
//     1 3 5 7.....
//     1 2 4 8 16.....

//     int n,square;
//     cout<<"Enter a number:"<<endl;
//     cin>>n;
//     for(int i=1;i<=n;i++)
//     {
//     	cout<<i<<" ";
//        square=i*i;
//     	 cout<<"square of each number = "<<square<<endl;
//	 }
     
     
     
//     int n,square;
//     cout<<"Enter a number:"<<endl;
//     cin>>n;
//     for(int i=1;i<=n;i=i+2)
//     {
//     	cout<<i<<" ";
//        square=i*i;
//     	 cout<<"square of each number = "<<square<<endl;
//	 }

	
}
