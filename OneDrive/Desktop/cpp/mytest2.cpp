#include<iostream>
using namespace std;
int main(){
//	int cost,sell;
//	cout<<"Enter cost price:"<<endl;
//	cin>>cost;
//	cout<<"Enter sell price:"<<endl;
//	cin>>sell;
//	if(cost>sell){
//		int sum=sell-cost;
//		cout<<sum<<endl;
//		cout<<"loss"<<endl;
//	}
//	if(cost<sell){
//		int sum1=sell-cost;
//		cout<<sum1<<endl;
//		cout<<"profit"<<endl;
//	}
//	if(cost==sell){
//		cout<<"no profit or no loss";
//	}

   int num;
   char choice;
   cout<<"Enter choice:"<<endl;
   cin>>choice;
   switch(choice){
   	case'e':
   		    cout<<"Enter range:"<<endl;
   		    cin>>num;
	        for(int i=0;i<num;i++){
	        	if(i%2==0){
	        		cout<<"even number is "<<i<<endl;
				}
			}
		   	break;
	case'o':
		    cout<<"Enter range:"<<endl;
	        cin>>num;
			for(int i=0;i<num;i++){
				if(i%2!=0){
					cout<<"odd number is "<<i<<endl;
				}
			}
			break;		
   }
}
