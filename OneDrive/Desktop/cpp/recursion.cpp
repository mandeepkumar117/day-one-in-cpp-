//recursion->when ever the function calling itself ,the concept is known as recursion.

//it is classification
//1)direct recursion
//2)indirect recursion
//f1(){
//	/f1();direct recursion
//}

//f1()calls->f2()calls->f3 indirect recursion
//if we cant mension base condition in recursion then there is a problem arise which is known as stack overflow.generaly we analyse recursion using tracing tree.


//wap to find the factorial of a number using recursion

#include<iostream>
using namespace std;
int fact(int n){
	if(n==1 ||n==0){
		return 1;
	}
	else{
		return n*fact(n-1);
	}
}
 
void table(int num,int cur){
	if(cur>10){
		return;
	}
	else{
		cout<<num<<" * "<<cur<<" = "<<num*cur<<endl;
		table(num,cur+1);
	}
}//that is called return statement

//string is palindrome or not

bool palindrome(string s,int low,int high){
	if(low>high){
		return true;
	}
	if(s[low]!=s[high]){
		return false;
	}
	if(s[low]==s[high]){
		return palindrome(s,low+1,high-1);
	}
}
int main(){
    cout<<fact(5)<<endl;;
    table(11,1);
    cout<<palindrome("malayalam",0,8);
}






