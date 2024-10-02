#include<iostream>
using namespace std;
int main()
{



for(int i=1;i<=8;i++)
  {
  	for(int j=1;j<=5;j++)
  	{ if(i==1 || j==1 || i==8 ||  j==5 ||i==4)
  		cout<<"*";
  	  else
  	    cout<<" ";
	}
	cout<<endl;
  }
  
  
  for(int i1=1;i1<=8;i1++)
  {
  	for(int j1=1;j1<=5;j1++)
  	{ if(i1==1 ||  i1==8 ||  j1==5 ||i1==4)
  		cout<<"*";
  	  else
  	    cout<<" ";
	}
	cout<<endl;
  }
//  
//  
  for(int i2=1;i2<=8;i2++)
  {
  	for(int j2=1;j2<=5;j2++)
  	{ if(i2==1 ||j2==1 ||  i2==8  ||i2==4)
  		cout<<"*";
  	  else
  	    cout<<" ";
	}
	cout<<endl;
  }
//  
  for(int i3=1;i3<=8;i3++)
  {
  	for(int j3=1;j3<=5;j3++)
  	{ if(i3==1 || j3==1 || i3==4)
  		cout<<"*";
  	  else
  	    cout<<" ";
	}
	cout<<endl;
  }
  
  
}
