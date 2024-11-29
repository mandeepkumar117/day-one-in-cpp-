//string->collectijon of character

//example->string="a"
//         string=" "(empty string)
//         string="name"
//=>string is a special data type which are create memory run time


#include<iostream>
using namespace std;
int main(){
//	char a[]={'w','e'};//"we" //array of chracter.it is faster
//	char c[2]={'w','e','r'};//error.it is faster.because size is fixed
//	char d[3]="we";//we heve to mention 1 extra memory for null character to terminate of string.if we declare 2 memory he
//	              // throw error
//	string b="abcd";//yemplate,class(data-type)string.it is slow because memory is no fixed
//	
//	cout<<a<<endl;
//	cout<<b<<endl;

//string str="apple ";
//str.push_back('&');//not->only add single character at a time
//str=str+" vivo is good";
//string str1="vivo";
////str1.compare(str);
//cout<<str<<endl;
//cout<<str1.compare(str);

//string str="apple";
//string str1="vivo";
//cout<<str.compare(str1)<<endl;
//cout<<str1.compare(str)<<endl;



//wap to display the string reverse order

//string str="my name is mandeep";
string str;
cout<<"enter string:";
getline(cin,str);
//string str2=str.size();
cout<<str.size()<<endl;
for(int i=str.size()-1;i>=0;i--){
	cout<<str[i];
}



}
