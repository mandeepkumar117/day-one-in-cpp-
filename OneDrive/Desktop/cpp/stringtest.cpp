#include<iostream>
using namespace std;
int main(){
//	char ch='a';
//	bool mandeep=isalpha(ch);
//	cout<<mandeep<<endl;;
//	bool up=isupper(ch);
//	cout<<up<<endl;
//	bool low=islower(ch);
//	cout<<low<<endl;
//	bool dig=isdigit(ch);
//	cout<<dig<<endl;
//	char uper=toupper(ch);
//	cout<<uper<<endl;
//	char lower=tolower(ch);
//	cout<<lower<<endl;



//WAP to count number of uppercase letters, and lowercase letter 
//in a string s ,given by user.
//
//if s="apple IS"
//upper: 2
//lower: 5

//string str="APPLE is GOOD";
//int upper=0,lower=0;
//for(int i=0;i<str.size();i++){
////	if(str[i]>=65 && str[i]<=90)
//    if(isupper(str[i]))
//     {
//		 upper++;
//	}
////	if(str[i]>=97 && str[i]<=122)
//   if(islower(str[i]))
//    {
//		  lower++;
//	}
//}
//cout<<"upper case "<<upper<<endl;
//cout<<"lower case "<<lower;


//WAP to count number of digits, and alphabet in a string s ,
//given by user.
//
//if s="apple 123"
//alphabet: 5
//digits: 3

string str="apple is 1234";
int alpha=0,digit=0;
for(int i=0;i<str.size();i++){
	if(isalpha(str[i])){
		alpha++;
	}
	if(isdigit(str[i])){
		digit++;
	}
}
cout<<"alphabet is: "<<alpha<<endl;
cout<<"total number is: "<<digit;





//WAP to Capitalize each word of a array names.
//names={"ajay","rahul","ritu","raj"}
//output={"Ajay","Rahul","Ritu","Raj"}

//string str[3]={"apple","banana","pineapple"};
//for(int i=0;i<3;i++){
//	str[i][0]=toupper(str[i][0]);
//}
//for(int i=0;i<3;i++){
//	cout<<str[i]<<" ";
//}

//convert all upper case

//string str[3]={"apple","banana","pineapple"};
//for(int i=0;i<3;i++){
//	for(int j=0;j<str[i].size();j++){
//			str[i][j]=toupper(str[i][j]);		
//	}
//	cout<<str[i]<<" ";
//}

	
}
