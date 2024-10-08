#include<iostream>
using namespace std;

//=================================having parameter  having return==================================================


//WAP to create a function namedaverage that is created to find out the average of 5 numbers 
//parameter -->5 number
//return --->string (a message success)

//string str(int num1,int num2,int num3,int num4,int num5){
//	int average=(num1+num2+num3+num4+num5)/5;
//	cout<<"average of five number is: "<<average<<endl;
//	return "programe success";
//}

//Write a program to find the factorial of any number entered by user
//parameter -->int
//return --->int (or long long in case of higher number) i,e result


//double fact(int num){
//	double factorial=1;
//	for(int i=1;i<=num;i++){
//		factorial=factorial*i;
//	} 
//	return factorial;
//}

//Write a program that prompts the user to input an integer and then 
//outputs the number with the digits reversed.
//parameter -->int
//return --->int 

//int reversed(int num){
//	int last,sum=0;
//	while(num>0){
//		last=num%10;
//		sum=sum*10+last;
//		num=num/10;
//	}
//	return sum;
//}


//WAP to print whether a number is armstrong number or not
//parameter -->int
//return --->string (a message "yes" or "no")


//string arms(int num){
//	int last,sum=0;
//	int temp=num;
//	while(num>0){
//		last=num%10;
//		sum=sum*last*last*last;
//		num=num/10;
//	}
//	if(temp==sum){
//		return "yes";
//	}
//	else{
//		return "no";
//	}
//	
//}
//
//
//WAP to print whether a number is palindrome number or not
//parameter -->int
//return --->string (a message "yes" or "no")

//string palind(int num){
//	int last,sum=0;
//	int temp=num;
//	while(num>0){
//		last=num%10;
//		sum=sum*10+last;
//		num=num/10;
//	}
//	if(temp==sum){
//		return "no is palindrome";
//	}
//	else{
//		return "no is not plaindrome";
//	}
//}




//int main(){
//	int n1,n2,n3,n4,n5;
//	cout<<"Enter five number:";
//	cin>>n1>>n2>>n3>>n4>>n5;
//	string result=str(n1,n2,n3,n4,n5);
//	cout<<result<<endl;

//double number;
//cout<<"Enter number:";
//cin>>number;
//double result=fact(number);
//cout<<"factorial of number is: "<<result<<endl;


//int number;
//cout<<"Enter number:";
//cin>>number;
//int result=reversed(number);
//cout<<"reversed number is: "<<result<<endl;


//int number;
//cout<<"enter number:";
//cin>>number;
//string result=arms(number);
//cout<<result;


//int number;
//cout<<"Enter number:";
//cin>>number;
//string result=palind(number);
//cout<<result;
//
//
//
//
//}



//============================having parameter  no return=====================================================

//WAP to concatenate name and surname of a user having one space
//between them
//parameter -->name,surname
//return --->no return 

//string namesurname(string name,string surname){
//	string str=name+ " "+surname;
//	cout<<"full name is: "<<str<<endl;
//}

//find string size

//string namesurname(string str){
//	cout<<str.size()<<endl;
//	for(int i=str.size()-1;i=0;i++){
//		cout<<str[i];
//	}
//}


//Write a program that ask the user to input a positive integer. 
//It should then print the multiplication table of that number.
//
//parameter -->int
//return --->no return 

//
//int tablenumber(int num){
//	for(int i=1;i<=10;i++){
//		int table=num*i;
//		cout<<"table= "<<num<<" * "<<i<<" = "<<table<<endl;
//	}
//}


//>Write a program that ask the user two input . 
//print the multiplication table of that range of numbers(nesting)
//
//parameter -->int,int(range)
//return --->no return

//int nesting(int num){
//	for(int i=1;i<=num;i++){
//		for(int j=1;j<=10;j++){
//			int table=i*j;
//			cout<<"table= "<<i<<" * "<<j<<" = "<<table<<endl;
//		}
//		cout<<" "<<endl;
//	}
//}
//
//
//WAP to print all prime number in given range. 
//parameter -->int,int(range)
//return --->no return

//int prime(int num){
//	bool isprime=true;
//	for(int i=2;i<num/2;i++){
//		if(num%i==0){
//			isprime=false;
//			cout<<i<<" ";
//			break;
//		}
//	}
//	if(isprime==true){
//		cout<<"prime numner"<<endl;
//		
//	}
//	else{
//		cout<<"not prime number"<<endl;
//	}
//}
//
//
//WAP to print all armstrong number in given range.
//parameter -->int,int(range)
//return --->no return

int allarms(int num){
	
	for(int i=2;i<=num;i++){
		int last,sum=0;
		int num=i;
		while(num>0){
			
			last =num%10;
			sum=sum+last*last*last;
			num=num/10;
		}
		if(i==sum){
		    cout<<i<<" ";
	   }
	}
	
}




int main(){
//	string name,surname;
//	cout<<"Enter name:"<<endl;
//	getline(cin,name);
//	cout<<"Enter surname:"<<endl;
//	getline(cin,surname);
//	namesurname(name,surname);



// string str;
// cout<<"Enter string:";
// getline(cin,str);
// namesurname(str);


//int number;
//cout<<"Enter number;";
//cin>>number;
//tablenumber(number);


//int number;
//cout<<"Enter number range: ";
//cin>>number;
//nesting(number);

//int number;
//cout<<"Enter number: ";
//cin>>number;
//prime(number);

int number;
cout<<"Enter range number: ";
cin>>number;
allarms(number);
	
}





















