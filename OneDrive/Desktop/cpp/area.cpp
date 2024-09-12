#include<iostream>
using namespace std;
int main()
{
//	int num=3.14;
//	int r;
//	int area;
//	cout<<"Enter a number"<<" "<<endl;
//	cin>>r;
//	area=num*r*r;
//	cout<<"area is"<<" "<<area<<endl;
//	if(r>=0){
//		cout<<"number is possitive"<<endl;
//	}
//	else
//	{
//		cout<<"number is negative ";
//	}
//	int num1,r1;
//	cout<<"Enter a number"<<endl;
//	cin>>num1;//9
//	r1=num1>0;
//	cout<<r1<<endl;//9
//	cout<<(num1==0)<<endl;//0
//    cout<<(num1!=0)<<endl;//1
//    cout<<(num1>=0)<<endl;1
//    cout<<(num1<=0)<<endl;
    
	int age;
	cout<<"Enter age"<<endl;
	cin>>age;
	cout<<(age>=0 && age<=100)<<endl;
	
	
	
	char ch;
	int r;
	cout<<"enter any character:";
	cin>>ch;
	r= ch=='a'|| ch=='e'|| ch=='o' || ch=='u' || ch=='i';
	cout<<"vowel:"<<"\t"<<r<<endl;
	
	int price,r1;
	cout<<"Enter t-shirt price:";
	cin>>price;
	r=price>1000 && price<=100;
	cout<<"t-shirt price is:"<<r<<endl;
	
	
}
