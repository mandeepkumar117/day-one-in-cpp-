#include<iostream>
using namespace std;
#include<string.h>
int main(){
    char c[10];
    char v[10];
	cout<<"enter password\n";
	cin>>c;
	cout<<"re enter password\n";
	cin>>v;
	if(strcmp(c,v)==0){
		cout<<"password mached";
	}
	else{
		cout<<"password not mached";
	}
	cout<<"name= "<<c<<"\n";
	cout<<"reversw="<<strrev(c)<<"\n";
	cout<<"length="<<strlen(c)<<"\n";
	cout<<"upper latter="<<strupr(c)<<"\n";
	cout<<"small latter="<<strlwr(c)<<"\n";
	cout<<"merge="<<strcat(c,v)<<"\n";
	strcpy(c,v);
	cout<<"name="<<c<<"\n";
	cout<<"surname="<<v<<"\n";
}

