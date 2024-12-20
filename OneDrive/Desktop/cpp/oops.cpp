//oops-> object orinted programing language
//features->>class and object,inheritence,encapsulation,polymorohism,Abstraction.
//object->instance of a class is called an obj.or it is real world intity
//class->1)class is a user define data types,which user defined it  according to the requirement of real world problem.
//2)it is templete where we define attributes and behaviour
//3)class consist of daata member function or  class is a collection of  data member and member function is called class
//ex:phonepe
//        data_member:moble_num,account_num,username,upi_id
//        member function:method:withdrawn(),deposite(),transfer(),check_balance
          
          
//wap toa create a class phnepe having data menmer:mobile_num,account_num,username,upi_id,balance ,createusename,display()


#include<iostream>
using namespace std;
class Phonepe{
	public:
    	string username;
    	long account_num;
    	long long mobile_num;
    	double balance;
    	void createuser(){
    		cout<<"enter username: "<<endl;
    		cin>>username;
    		cout<<"Enter account number: "<<endl;
    		cin>>account_num;
    		cout<<"Enter moblie number: "<<endl;
			cin>>mobile_num;
			cout<<"Enter balance: "<<endl;
			cin>>balance;
		}
			void display(){
				cout<<"username is: "<<username<<endl;
				cout<<"Account number: "<<account_num<<endl;
				cout<<"mobile number: "<<mobile_num<<endl;
				cout<<"balance"<<balance<<endl;
			}
		};
int main(){
    Phonepe obj;
    obj.createuser();
    obj.display();
}
         
