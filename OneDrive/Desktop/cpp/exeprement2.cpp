#include<iostream>
#include<cmath>
using namespace std;
int main()
{
//	double b,p;
//	double power=1;
//	cout<<"enter base:"<<endl;
//	cin>>b;
//	cout<<":enter power:"<<endl;
//	cin>>p;
//	for(int i=1;i<=p;i++)
//	{
//	   power =power*b;
//	   	
//	}
//	cout<<b<<"^"<<p<<" = "<<power<<endl;


//reversr any number

//int num,last,sum=0;
//cout<<"Enter number:"<<endl;
//cin>>num;
//while(num>0)
//{
//  last=num%10;
//  sum=sum*10+last;
//  num=num/10;
//  
//}
//cout<<sum;



//number is prime or not
 int n;
cout<<"enter number:"<<endl;
cin>>n;
bool is_prime=true;
for(int i=2;i<=n/2;i++)
{
  if(n%i==0)
   {
   	is_prime=false;
   	cout<<i;
   	break;
	 }
   }
	if(is_prime==true)
	   cout<<"prime";
	else
	  cout<<"not a prime";         


//find prime number in given range

//for(int n=200;n<=1000;n++)
//{
//int flag=0;
//for(int i=2;i<=n/2;i++)
//{
//	if(n%i==0)
//	{ 
//	    flag=1;
//	    break;
//	}
//}
//if (flag==0)
//    cout<<n<<" ";
//
//}



//wap find number is armstrong or not


//int num,sum=0,last;
//cout<<"Enter number:"<<endl;
//cin>>num;
//int temp=num;
//while(num>0){
//	last=num%10;
//	sum=sum+last*last*last;
//	num=num/10;
//}
//if(temp==sum){
//	cout<<"number is armstrong"<<endl;
//}
//else{
//	cout<<"number is not armstrong"<<endl;
//}



//find armstrong number in given range

//int s,n;
//cout<<"Enter starting range:"<<endl;
//cin>>s;
//cout<<"Enter ending range:"<<endl;
//cin>>n;
//
//for(int i=s;i<=n;i++){
//
//
//int num=i,sum=0,last;
//int temp=num;
//while(num>0){
//	last=num%10;
//	sum=sum+last*last*last;
//	num=num/10;
//}
//if(temp==sum){
//	cout<<temp<<endl;
//}
//}

//WAP to print all palindrome number in given range

//int s,n;
//cout<<"Enter starting range:"<<endl;
//cin>>s;
//cout<<"Enter ending range:"<<endl;
//cin>>n;
//for(int i=s;i<=n;i++){
//	int num=i,last,sum=0,temp;
//   	temp=num;
//	while(num>0){
//		last=num%10;
//		sum=sum*10+last;
//		num=num/10;
//	}
//	if(temp==sum){
//		cout<<temp<<endl;
//	}
//	
//}


//Write a program to print Fibonacci series of n terms where n is input by user :
//0 1 1 2 3 5 8 13 24 .....


//int n,n1=0,n2=1,n3;
//cout<<"Enter number u want to display:";
//cin>>n;
//cout<<n1<<" "<<n2<<" ";
//for(int i=1;i<=n-2;i++){
//	n3=n1+n2;
//	cout<<n3<<" ";
//	n1=n2;
//	n2=n3;
//}



//Write a program to print Fibonacci series of n terms where n is input by user :
// 1/1+1/2+1/3+1/4+1/5.....

//    double n,sum=0;
//     cout<<"Enter number:"<<endl;
//     cin>>n;
//     for(int i=1;i<=n;i++)
//     {
//     	if(i<n)
//     	{
//     		cout<<'('<<1<<'/'<<i<<')'<<"+";
//		 }
//		 else
//		 {
//		 	cout<<'('<<1<<'/'<<i<<')'<<"=";
//		 
//		 }
//		 	sum=sum+1.0/i;
//	 }
//	 cout<<sum;


//Write a  program to calculate product of digits of a number?

//345=60
//23=6

//int num,sum=1,last;
//cout<<"Enter number:"<<endl;
//cin>>num;
//while(num>0){
//	last=num%10;
//	sum=sum*last;
//	num=num/10;
//}
//cout<<sum;


//wap to add first number and last number
//int n,last,count=0,sum=0,temp,power;
//cout<<"Enter number:"<<endl;
//cin>>n;
//temp=n;
//while(n>0){
//	n=n/10;
//	count++;
//}
//n=temp;
//power=pow(10,count-1);
//int first=n/power;
//last=n%10;
//sum=first+last;
//cout<<sum;




//int number, firstDigit, lastDigit;
//
//    // Prompt the user to enter a number
//    cout << "Enter a number: ";
//    cin >> number;
//
//    // Get the last digit
//    lastDigit = number % 10;
//
//    // Get the first digit
//    firstDigit = number;
//    while (firstDigit >= 10) {
//        firstDigit /= 10;
//    }
//
//    // Calculate the sum of the first and last digits
//    int sum = firstDigit + lastDigit;
//
//    // Display the result
//    cout << "Sum of the first and last digits: " << sum << endl;
//
//    return 0;


}


