//loops are repeatitive task and also iterative performs when we need to perform iterativetask then we will use loops for
//eg:-calculating sum of first 100 number or letting there user perform calculation using our calculator application user does not want exit.
//do whilw is used when we want to execute repeating statement atleast once
//when we want to exit the lop baseed on user input then we will used do while loop .it is user control loop 
//the scope varibale is always limited to the block in it is declare .we can not acceess out of varible.if there are nested blocks like block of main function and there 
//if varibale is declare inside of block so we can acceess the varible .if a varible is declare outside of block we can not acceess the varible inside the block
hot flush input  string 
//do_while->that is exit control loop ->syntx->do{
                     //bodydefine
//                 }
//                   while(conditions);
//                   minimum one time execution
//                    menu driven,chioce based



//wap to perfomes some calculation accordingly
//r->area of rectangle
//s->area of square
//c->atea of cicrcle
//e->exit


#include<iostream>
using namespace std;
int main(){
	int length,bredth,side,red;
	char choice;
	const double pi=3.147;
	do{
		cout<<"\n---------menu driven program--------area\n";
		cout<<"R--------->rectangle\n";
		cout<<"S--------->Square\n";
		cout<<"C--------->Circle\n";
		cout<<"E--------->exit\n";
		cout<<"Enter ur choice:";
		cin>>choice;
		switch(choice){
			case'R':cout<<"Enter length and birdth:";
			        cin>>length>>bredth;
			        cout<<"Area:"<<length*bredth<<endl;
			        break;
		    case'S':cout<<"Enter side:";
		            cin>>side;
		            cout<<"Area:"<<side*side<<endl;
		            break;
		    case'C':cout<<"Enter redious:"<<endl;
			        cin>>red;
					cout<<"Area:"<<pi*red<<endl;
					break;
		    case'E':cout<<"good by"<<endl;
			        break;
			defoult:cout<<"Invalid choice";        
		}
	}
	while(choice!='E');
}
