//note->isupper()|
//    islower() |gives true or false


//      toupper()|lower to upper
//      tolower()|




#include<iostream>
using namespace std;
int main(){
//wap to display the string reverse order


//string str,rev;
//cout<<"enter string:";
//getline(cin,str);
////string str2=str.size();
//cout<<str.size()<<endl;
//for(int i=str.size()-1;i>=0;i--){
//	//cout<<str[i];
//	rev.push_back(str[i]);
//	
//
//}
//cout<<rev;

//find palindrome string

//string str[4]={"apple","mom","master","nitin"};
//for(int i=str.size()-1;i>=0;i--){
//	for(int j=str.size();j>=i;j--){
//		if(size==str[i] && size>=str[i]){
//			cout<<i;
//		}
//	}
//}


//reverse string

//string str= "india",rev="";
//for(int i=str.size()-1;i>=0;i--){
//	rev=rev+str[i];
//	
//}
//cout<<rev;


//string str= "india is our cuntry";
//int count;
//for(int i=0;i<str.size();i++){
//	if(str[i]==' '){
//		count++;
//	}
//}
//cout<<count;


//string str="india is our country";
//int count=0;
//for(int i=0;i<str.size();i++){
//	for(int j=0;j>i;j++){
//		if(str[i]==' '){
//			cout++;
//		}
//		if(str[i]!=''){
//			count++;
//		}
//	}
//	cout<<str[i];
//}


//string str= "india is our cuntry";
//int count;
//for(int i=0;i<str.size();i++){
//	if(str[i]=='i'){
//		count++;
//		str[i]='$';
//	}
//}
//cout<<count<<endl;;
//cout<<str;

// char ch='a';
// bool a=isupper(ch);
// cout<<a<<endl;
// ch=toupper(ch);
// cout<<a;


//string str="apple is good";
//cout<<"size-->"<<str.size()<<endl;
//cout<<"index-->"<<str.find('l');

//string str="burger is good for health";
//int index=str.find("is");
//int index=str.find(hello);not found
//cout<<index;
//int index=str.find("good");
//str.replace(index,4,"bad");
//cout<<str;

//wap to replace word

//string str="burger is good for health";
//cout<<str<<endl;
//string newstring,oldstring;
//cout<<"Enter old and new";
//cin>>oldstring>>newstring;
//int size=oldstring.size();
//int index=str.find(oldstring);
//str.replace(index,size,newstring);
//str.erase(7,2);//if do not pass parameter he erase all string
//cout<<str;



//find capicity

//string str="apple is good for health";
//str.push_back('y');
//cout<<    "string capacity:"<<str.capacity()<<endl;
//cout<<    "string size:"<<str.size()<<endl;

//by loop

string s="";
for(int i=0;i<=10;i++){
	s.push_back('a');
	cout<<s.size()<<"  "<<s.capacity()<<endl;
}

}
