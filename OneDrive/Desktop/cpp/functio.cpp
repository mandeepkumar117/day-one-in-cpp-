//function->functio is areusable block of code which is define to perform specific task.
//dry->with help of function we achieve dry (do not repeat yourself) principle
//==========================================================================================================================================
//features->
//1.it has a uniqe name.
//2.exect function overloding,function overriding.
//3.it must be define with parenthesis(),
//===========================================================================================================================================
//parameters->whilee define function(),we have a option to pass parameters,jwhich acts as a input value to
//our function ()->it is optional part,depends on the requirement of our task
//return value->again this is a optional part,if in the flow of our program ,we have a requrement of function output value ,then it is healthy
//practice to take return form the function , instead of calling it again.

//if we do`nt have any use ,then u hace return void.
//==============================================================================================================================================
//classification->
//1.no return  no parameter
//2.no return but having parameter
//3.return no parameter
//4.return but having prameter

//==============================================================================================================================================



//#include<iostream>
//using namespace std;
// 
// 
//void add(int num,int num2){
//	cout<<"addition: "<<num+num2<<endl;
//}
//int main(){
//	add(45,56);
//	
//}


#include<iostream>
using namespace std;

int highest(int num1,int num2,int num3){//formal parameter
	if(num1>num2 && num1>num3){
//		cout<<num1<<"is highest"<<endl;
		return num1;
	}
	else if(num2>num1 && num2>num3){
//		cout<<num2<<"is highest"<<endl;
		return num2;
	}
	else{
//		cout<<num3<<"is highest"<<endl;
		return num3;
	}
}
int main(){
	int result= highest(23,34,56);//actual parameter
	cout<<"highest value is: "<<result<<endl;
}






