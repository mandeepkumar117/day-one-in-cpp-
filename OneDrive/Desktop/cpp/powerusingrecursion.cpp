#include<iostream>
using namespace std;
      int calculatepower(int b,int p)
	  {
	  	if(b==0)
	  	{
	  		return 0;
		  }
		  if(p==0)
		  {
		  	return 1;
		  }
		  int ans=b*calculatepower(b,p-1);
		  return ans;
		}  

int main(){
    int b,p;
    cout<<"Enter base value\n";
    cin>>b;
    cout<<"enter power value\n";
    cin>>p;
    cout<<calculatepower(b,p);
}

