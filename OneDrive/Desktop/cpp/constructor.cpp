//constructor->constructor alocate the memory of an object of an class.by default constructor existing in each an every class.
//there are two type of constructor
//note->it dosent have return type.constructor is alao called special function.every contructor have public modifier 
//1)defoult constructor->
//2)parameterize constructor
//3)copy constructor->these are two type of copy constructor
//                      1)shallow copy
//                      2)deep copy         
				
//destructor->it is use to dealoctes the memory of the class				


#include<iostream>
using namespace std;

//1)defoult
//syntax
//public:classname{
////	satement
//}

//example
class student
{
public:student()
{
	cout<<"\n allocate memory";
	}	
};
int main(){
    student t;
}
    
