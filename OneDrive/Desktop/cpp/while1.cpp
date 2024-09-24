//syntax

//control_varibale initialization;

//while(condition)
//     body of while
//    updation


#include<iostream>
using namespace std;
int main()
{
//	int cv=10;
//	while(cv<=100)
//	{
//		cout<<"welcome\n";
//		cv=cv-10;
//	}
	
//     int num1,num2;
//     string choice="yes";
//     while(choice=="yes"){
//     	cout<<"Enter two number";
//     	cin>>num1>>num2;
//        cout<<"add:"<<num1+num2<<endl;
//        cout<<"do u want to contonue type'yes' or any other for exit";
//        cin>>choice;
//        if(choice=="yes")
//           cout<<"please go on......\n";
//        else
//	      cout<<"thank you for using our device";    
//	
//	 }
     
//question(1)	wap to determine wether a number is armstrong or not

//        int num,temp,sum=0,last;
//		cout<<"enter test number:";
//		cin>>num;
//		temp=num;
//		while(num>0)
//		{
//			last=num%10;
//			sum=sum+last*last*last;
//			num=num/10;
//		 } 
//		 if(sum==temp)
//		 {
//		 	cout<<"armstrong number";
//		 	
//			 }
//			 else
//			 {
//			 	cout<<"not armstrong number";
//					 }        
//

//    wap to add all the individual digit of a number given by user
 
       int num,last,sum=0;
		cout<<"enter test number:";
		cin>>num;
		while(num>0)
		{
		
			last=num%10;
			sum=sum+last;		
			num=num/10;
		 } 

		 cout<<sum<<endl;
	        

  


	
}

